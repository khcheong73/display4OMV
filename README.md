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

Since Arduino source is based on my hardware, souce might be modified for other hardware.

Related blog (in Korean) https://crazydoc.tistory.com/958
