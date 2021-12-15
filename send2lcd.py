#!/usr/bin/python

import serial
import os
import time

USBP=os.popen("ls /dev/ttyUSB*").read().split()

#ser=serial.Serial(USBP[0],9600,timeout=1)
ser=serial.Serial(USBP[0],9600)
ser.close()
ser.open()
time.sleep(5)
while 1:
    MONNOW=os.popen("/root/NAS/monitor_now.sh").read().split()
#ser.write(("kevin-omv,42,38,38,35,38,NA,2235,1245,0,33,72,626.0B,0.0B,0.0k,0.0k,192.168.200.123").encode())
    ser.write(MONNOW[0].encode())
    print(MONNOW[0])
    time.sleep(5)
