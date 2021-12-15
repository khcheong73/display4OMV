#!/bin/bash

OSPART=$(df | awk '$6=="/" {print $1}')
OSDRV=${OSPART%?}

# the number of data drives
NUMDRV=4

# lm_sensor name
SENSOR_TCPU=Tdie
SENSOR_TMB=temp2
SENSOR_FCPU=fan1
SENSOR_FHDD=fan3

ETHIF=$(ls /sys/class/net | grep -v lo)
DATADRV=$(blkid | grep "/dev/md" | cut -d':' -f1 | cut -d'/' -f3)

LMSENSORS=$(sensors)

# Temperature
TEMPCPU=$(echo "$LMSENSORS" | grep $SENSOR_TCPU | awk '{print $2}' | cut -d'+' -f2 | cut -d'.' -f1)
TEMPMB=$(echo "$LMSENSORS" | grep $SENSOR_TMB | awk '{print $2}' | cut -d'+' -f2 | cut -d'.' -f1)

TEMPHDD=$(for i in $(smartctl --scan | awk '{print $1}' | grep -v $OSDRV); do smartctl --nocheck=standby -A $i | awk '$1==194 {print $10}'; done)
#printf "°C\tC %s\tM %s\tD %s %s %s %s\n" $TEMPCPU $TEMPMB $TEMPHDD  
#Tdie:         +46.5°C  

# Fa
FANCPU=$(echo "$LMSENSORS" | grep $SENSOR_FCPU | awk '{print $2}')
FANHDD=$(echo "$LMSENSORS" | grep $SENSOR_FHDD | awk '{print $2}')
#printf "RPM\tC %s\tD %s\n" $FANCPU $FANHDD
# Drive usage
DRVUSE=$(df | grep $DATADRV | awk '{print $5}' | cut -d'%' -f1)

CPUUSE=$(echo 100-$(iostat -c | grep avg-cpu -A1 | tail -1 | awk '{print $6}') | bc | cut -d'.' -f1)
if [ -z $CPUUSE ]; then CPUUSE=0; fi

MEMUSE=$(echo 100-100*$(cat /proc/meminfo | grep MemFree | awk '{print $2}')/$(cat /proc/meminfo | grep MemTotal | awk '{print $2}') | bc)
#printf "%%\tC %s\tM %s\tD %s\n" $CPUUSE $MEMUSE "$DRVUSE"

NETUSE=$(sar -n DEV 1 2 --human| grep $ETHIF | grep -v Average | tail -1)
NETRX=$(echo $NETUSE | grep $ETHIF | awk '{print $6}')
NETTX=$(echo $NETUSE | grep $ETHIF | awk '{print $7}')
#printf  "Net\tR %s\tT %s\n" $NETRX $NETTX

DRVIO=$(iostat --human -d 3 2 -p $DATADRV | grep $DATADRV | tail -1 | awk '{print $3" "$4}')
DRVREAD=$(echo $DRVIO | awk '{print $1}')
DRVWRITE=$(echo $DRVIO | awk '{print $2}')
#printf "DIO\tR %s\tW %s\n" $DRVIO

IP=$(hostname -I)

#echo $IP


printf "%s,%s,%s," $(hostname) $TEMPCPU $TEMPMB
for (( i=1 ; i<=$NUMDRV; i++)); do
	THDD=$(echo $TEMPHDD | cut -d' ' -f$i)
	if [ -z $THDD ]; then THDD="NA"; fi
	printf "%s," $THDD
done
printf "%s,%s,%s%%,%s%%,%s%%,%s,%s,%s,%s,%s\n" $FANCPU $FANHDD $CPUUSE $MEMUSE $DRVUSE $NETRX $NETTX $DRVREAD $DRVWRITE $IP
echo
