# display4OMV

Open Media Vault is a nice open-souce NAS project with any PC-based hardware.<br>
I added display to show some useful information such as disk usage, fan speed, network upload/download speed, etc.

Displayed information
- IP address
- hostname
- Temperature (CPU, 4 disk drives)
- Fan speed (CPU, system)
- Usage (CPU, memory, drive)
- Network speed (download, upload)
- Disk I/O (read, write)

Requirement
- Arduino module (I used Arduino Nano) connected to USB port
- 128x64 LCD display (I used 12864 OLED with SH1106 controller) - Any u8glib compatible display will be good. 

Required packages on OMV
- sudo apt-get install lm-sensors linux-headers-$(uname -r) make git sysstat bc python-pip
- pip install pyserial

Set script to run automatically when OMV boots.
- Put monitor_now.sh & send2lcd.py to any directory, for example /usr/local/bin/
- chmod +x /etc/rc.local
- Add "/usr/bin/python /usr/local/bin/send2lcd.py" to end of /etc/rc.local
- Reboot OMV

Since Arduino source and monitor_now are based on my environment, souce might be modified for other hardware.

Related blog (in Korean) https://crazydoc.tistory.com/958
