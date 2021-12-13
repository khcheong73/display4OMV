#include "U8glib.h"
//U8GLIB_NHD27OLED_BW u8g(13, 11, 10, 9);  // SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9
//U8GLIB_NHD27OLED_2X_BW u8g(13, 11, 10, 9);  // SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9
//U8GLIB_NHD27OLED_GR u8g(13, 11, 10, 9); // SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9
//U8GLIB_NHD27OLED_2X_GR u8g(13, 11, 10, 9);  // SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9
//U8GLIB_NHD31OLED_BW u8g(13, 11, 10, 9); // SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9
//U8GLIB_NHD31OLED_2X_BW u8g(13, 11, 10, 9);  // SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9
//U8GLIB_NHD31OLED_GR u8g(13, 11, 10, 9); // SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9
//U8GLIB_NHD31OLED_2X_GR u8g(13, 11, 10, 9);  // SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9
//U8GLIB_DOGS102 u8g(13, 11, 10, 9, 8);   // SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9
//U8GLIB_DOGM132 u8g(13, 11, 10, 9);    // SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9
//U8GLIB_DOGM128 u8g(13, 11, 10, 9);    // SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9
//U8GLIB_DOGM128_2X u8g(13, 11, 10, 9);   // SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9
//U8GLIB_ST7920_128X64_1X u8g(8, 9, 10, 11, 4, 5, 6, 7, 18, 17, 16);   // 8Bit Com: D0..D7: 8,9,10,11,4,5,6,7 en=18, di=17,rw=16
//U8GLIB_ST7920_128X64_4X u8g(8, 9, 10, 11, 4, 5, 6, 7, 18, 17, 16);   // 8Bit Com: D0..D7: 8,9,10,11,4,5,6,7 en=18, di=17,rw=16
//U8GLIB_ST7920_128X64_1X u8g(18, 16, 17);  // SPI Com: SCK = en = 18, MOSI = rw = 16, CS = di = 17
//U8GLIB_ST7920_128X64_4X u8g(18, 16, 17);  // SPI Com: SCK = en = 18, MOSI = rw = 16, CS = di = 17
//U8GLIB_ST7920_192X32_1X u8g(8, 9, 10, 11, 4, 5, 6, 7, 18, 17, 16);   // 8Bit Com: D0..D7: 8,9,10,11,4,5,6,7 en=18, di=17,rw=16
//U8GLIB_ST7920_192X32_4X u8g(8, 9, 10, 11, 4, 5, 6, 7, 18, 17, 16);   // 8Bit Com: D0..D7: 8,9,10,11,4,5,6,7 en=18, di=17,rw=16
//U8GLIB_ST7920_192X32_1X u8g(18, 16, 17);  // SPI Com: SCK = en = 18, MOSI = rw = 16, CS = di = 17
//U8GLIB_ST7920_192X32_4X u8g(18, 16, 17);  // SPI Com: SCK = en = 18, MOSI = rw = 16, CS = di = 17
//U8GLIB_ST7920_192X32_1X u8g(13, 11, 10);  // SPI Com: SCK = en = 13, MOSI = rw = 11, CS = di = 10
//U8GLIB_ST7920_192X32_4X u8g(10);    // SPI Com: SCK = en = 13, MOSI = rw = 11, CS = di = 10, HW SPI
//U8GLIB_ST7920_202X32_1X u8g(8, 9, 10, 11, 4, 5, 6, 7, 18, 17, 16);   // 8Bit Com: D0..D7: 8,9,10,11,4,5,6,7 en=18, di=17,rw=16
//U8GLIB_ST7920_202X32_4X u8g(8, 9, 10, 11, 4, 5, 6, 7, 18, 17, 16);   // 8Bit Com: D0..D7: 8,9,10,11,4,5,6,7 en=18, di=17,rw=16
//U8GLIB_ST7920_202X32_1X u8g(18, 16, 17);  // SPI Com: SCK = en = 18, MOSI = rw = 16, CS = di = 17
//U8GLIB_ST7920_202X32_4X u8g(18, 16, 17);  // SPI Com: SCK = en = 18, MOSI = rw = 16, CS = di = 17
//U8GLIB_LM6059 u8g(13, 11, 10, 9);   // SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9
//U8GLIB_LM6063 u8g(13, 11, 10, 9);   // SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9
//U8GLIB_DOGXL160_BW u8g(10, 9);    // SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9
//U8GLIB_DOGXL160_GR u8g(13, 11, 10, 9);  // SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9
//U8GLIB_DOGXL160_2X_BW u8g(13, 11, 10, 9); // SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9
//U8GLIB_DOGXL160_2X_GR u8g(13, 11, 10, 9); // SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9
//U8GLIB_PCD8544 u8g(13, 11, 10, 9, 8);   // SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9, Reset = 8
//U8GLIB_PCF8812 u8g(13, 11, 10, 9, 8);   // SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9, Reset = 8
//U8GLIB_KS0108_128 u8g(8, 9, 10, 11, 4, 5, 6, 7, 18, 14, 15, 17, 16);    // 8Bit Com: D0..D7: 8,9,10,11,4,5,6,7 en=18, cs1=14, cs2=15,di=17,rw=16
//U8GLIB_LC7981_160X80 u8g(8, 9, 10, 11, 4, 5, 6, 7,  18, 14, 15, 17, 16);  // 8Bit Com: D0..D7: 8,9,10,11,4,5,6,7 en=18, cs=14 ,di=15,rw=17, reset = 16
//U8GLIB_LC7981_240X64 u8g(8, 9, 10, 11, 4, 5, 6, 7,  18, 14, 15, 17, 16);  // 8Bit Com: D0..D7: 8,9,10,11,4,5,6,7 en=18, cs=14 ,di=15,rw=17, reset = 16
//U8GLIB_LC7981_240X128 u8g(8, 9, 10, 11, 4, 5, 6, 7,  18, 14, 15, 17, 16);   // 8Bit Com: D0..D7: 8,9,10,11,4,5,6,7 en=18, cs=14 ,di=15,rw=17, reset = 16
//U8GLIB_ILI9325D_320x240 u8g(18,17,19,U8G_PIN_NONE,16 );       // 8Bit Com: D0..D7: 0,1,2,3,4,5,6,7 en=wr=18, cs=17, rs=19, rd=U8G_PIN_NONE, reset = 16
//U8GLIB_SBN1661_122X32 u8g(8,9,10,11,4,5,6,7,14,15, 17, U8G_PIN_NONE, 16);   // 8Bit Com: D0..D7: 8,9,10,11,4,5,6,7 cs1=14, cs2=15,di=17,rw=16,reset = 16
//U8GLIB_SSD1306_128X64 u8g(13, 11, 10, 9); // SW SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9
//U8GLIB_SSD1306_128X64 u8g(4, 5, 6, 7);  // SW SPI Com: SCK = 4, MOSI = 5, CS = 6, A0 = 7 (new white HalTec OLED)
//U8GLIB_SSD1306_128X64 u8g(10, 9);   // HW SPI Com: CS = 10, A0 = 9 (Hardware Pins are  SCK = 13 and MOSI = 11)
U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NONE|U8G_I2C_OPT_DEV_0);  // I2C / TWI 
//U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_DEV_0|U8G_I2C_OPT_NO_ACK|U8G_I2C_OPT_FAST); // Fast I2C / TWI 
//U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NO_ACK);  // Display which does not send AC
//U8GLIB_SSD1306_ADAFRUIT_128X64 u8g(13, 11, 10, 9);  // SW SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9
//U8GLIB_SSD1306_ADAFRUIT_128X64 u8g(10, 9);    // HW SPI Com: CS = 10, A0 = 9 (Hardware Pins are  SCK = 13 and MOSI = 11)
//U8GLIB_SSD1306_128X32 u8g(13, 11, 10, 9); // SW SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9
//U8GLIB_SSD1306_128X32 u8g(10, 9);             // HW SPI Com: CS = 10, A0 = 9 (Hardware Pins are  SCK = 13 and MOSI = 11)
//U8GLIB_SSD1306_128X32 u8g(U8G_I2C_OPT_NONE);  // I2C / TWI 
//U8GLIB_SSD1306_64X48 u8g(13, 11, 10, 9);  // SW SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9
//U8GLIB_SSD1306_64X48 u8g(10, 9);             // HW SPI Com: CS = 10, A0 = 9 (Hardware Pins are  SCK = 13 and MOSI = 11)
//U8GLIB_SSD1306_64X48 u8g(U8G_I2C_OPT_NONE); // I2C / TWI 
//U8GLIB_SH1106_128X64 u8g(13, 11, 10, 9);  // SW SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9
//U8GLIB_SH1106_128X64 u8g(4, 5, 6, 7); // SW SPI Com: SCK = 4, MOSI = 5, CS = 6, A0 = 7 (new blue HalTec OLED)
//U8GLIB_SH1106_128X64 u8g(U8G_I2C_OPT_NONE); // I2C / TWI 
//U8GLIB_SH1106_128X64 u8g(U8G_I2C_OPT_DEV_0|U8G_I2C_OPT_FAST); // Dev 0, Fast I2C / TWI
//U8GLIB_SH1106_128X64 u8g(U8G_I2C_OPT_NO_ACK); // Display which does not send ACK
//U8GLIB_SSD1309_128X64 u8g(13, 11, 10, 9); // SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9
//U8GLIB_SSD1327_96X96_GR u8g(U8G_I2C_OPT_NONE);  // I2C
//U8GLIB_SSD1327_96X96_2X_GR u8g(U8G_I2C_OPT_NONE); // I2C
//U8GLIB_UC1611_DOGM240 u8g(U8G_I2C_OPT_NONE);  // I2C
//U8GLIB_UC1611_DOGM240 u8g(13, 11, 10, 9, 8);  // SW SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9, RST = 8
//U8GLIB_UC1611_DOGM240 u8g(10, 9);   // HW SPI Com: CS = 10, A0 = 9 (Hardware Pins are  SCK = 13 and MOSI = 11)
//U8GLIB_UC1611_DOGM240 u8g(10, 9);   // HW SPI Com: CS = 10, A0 = 9 (Hardware Pins are  SCK = 13 and MOSI = 11)
//U8GLIB_UC1611_DOGM240 u8g(8, 9, 10, 11, 4, 5, 6, 7, 18, 3, 17, 16);   // 8Bit Com: D0..D7: 8,9,10,11,4,5,6,7 en=18, cs=3, di/a0=17,rw=16
//U8GLIB_UC1611_DOGXL240 u8g(U8G_I2C_OPT_NONE); // I2C
//U8GLIB_UC1611_DOGXL240 u8g(13, 11, 10, 9, 8); // SW SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9, RST = 8
//U8GLIB_UC1611_DOGXL240 u8g(10, 9);    // HW SPI Com: CS = 10, A0 = 9 (Hardware Pins are  SCK = 13 and MOSI = 11)
//U8GLIB_UC1611_DOGXL240 u8g(8, 9, 10, 11, 4, 5, 6, 7, 18, 3, 17, 16);   // 8Bit Com: D0..D7: 8,9,10,11,4,5,6,7 en=18, cs=3, di/a0=17,rw=16
//U8GLIB_NHD_C12864 u8g(13, 11, 10, 9, 8);  // SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9, RST = 8
//U8GLIB_NHD_C12832 u8g(13, 11, 10, 9, 8);  // SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9, RST = 8
//U8GLIB_LD7032_60x32 u8g(13, 11, 10, 9, 8);  // SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9, RST = 8
//U8GLIB_LD7032_60x32 u8g(11, 12, 9, 10, 8);  // SPI Com: SCK = 11, MOSI = 12, CS = 9, A0 = 10, RST = 8  (SW SPI Nano Board)
//U8GLIB_UC1608_240X64 u8g(13, 11, 10, 9, 8); // SW SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9, RST = 8
//U8GLIB_UC1608_240X64_2X u8g(13, 11, 10, 9, 8);  // SW SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9, RST = 8
//U8GLIB_UC1608_240X64 u8g(10, 9, 8); // HW SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9, RST = 8
//U8GLIB_UC1608_240X64_2X u8g(10, 9, 8);  // HW SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9, RST = 8
//U8GLIB_UC1608_240X u8g(13, 11, 10, 9, 8); // SW SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9, RST = 8
//U8GLIB_UC1608_240X64_2X u8g(13, 11, 10, 9, 8);  // SW SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9, RST = 8
//U8GLIB_UC1608_240X64 u8g(10, 9, 8); // HW SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9, RST = 8
//U8GLIB_UC1608_240X64_2X u8g(10, 9, 8);  // HW SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9, RST = 8
//U8GLIB_T6963_240X128 u8g(8, 9, 10, 11, 4, 5, 6, 7, 14, 15, 17, 18, 16); // 8Bit Com: D0..D7: 8,9,10,11,4,5,6,7, cs=14, a0=15, wr=17, rd=18, reset=16
//U8GLIB_T6963_128X128 u8g(8, 9, 10, 11, 4, 5, 6, 7, 14, 15, 17, 18, 16); // 8Bit Com: D0..D7: 8,9,10,11,4,5,6,7, cs=14, a0=15, wr=17, rd=18, reset=16
//U8GLIB_T6963_240X64 u8g(8, 9, 10, 11, 4, 5, 6, 7, 14, 15, 17, 18, 16); // 8Bit Com: D0..D7: 8,9,10,11,4,5,6,7, cs=14, a0=15, wr=17, rd=18, reset=16
//U8GLIB_T6963_128X64 u8g(8, 9, 10, 11, 4, 5, 6, 7, 14, 15, 17, 18, 16); // 8Bit Com: D0..D7: 8,9,10,11,4,5,6,7, cs=14, a0=15, wr=17, rd=18, reset=16
//U8GLIB_HT1632_24X16 u8g(3, 2, 4);   // WR = 3, DATA = 2, CS = 4
//U8GLIB_SSD1351_128X128_332 u8g(13, 11, 8, 9, 7); // Arduino UNO: SW SPI Com: SCK = 13, MOSI = 11, CS = 8, A0 = 9, RESET = 7 (http://electronics.ilsoft.co.uk/ArduinoShield.aspx)
//U8GLIB_SSD1351_128X128_332 u8g(76, 75, 8, 9, 7); // Arduino DUE: SW SPI Com: SCK = 13, MOSI = 11, CS = 8, A0 = 9, RESET = 7 (http://electronics.ilsoft.co.uk/ArduinoShield.aspx)
//U8GLIB_SSD1351_128X128_332 u8g(8, 9, 7); // Arduino: HW SPI Com: SCK = 13, MOSI = 11, CS = 8, A0 = 9, RESET = 7 (http://electronics.ilsoft.co.uk/ArduinoShield.aspx)
//U8GLIB_SSD1351_128X128_HICOLOR u8g(76, 75, 8, 9, 7); // Arduino DUE, SW SPI Com: SCK = 76, MOSI = 75, CS = 8, A0 = 9, RESET = 7 (http://electronics.ilsoft.co.uk/ArduinoShield.aspx)
//U8GLIB_SSD1351_128X128_HICOLOR u8g(8, 9, 7); // Arduino, HW SPI Com: SCK = 76, MOSI = 75, CS = 8, A0 = 9, RESET = 7 (http://electronics.ilsoft.co.uk/ArduinoShield.aspx)
//U8GLIB_SSD1351_128X128GH_332 u8g(8, 9, 7); // Arduino, HW SPI Com: SCK = 76, MOSI = 75, CS = 8, A0 = 9, RESET = 7 (Freetronics OLED)
//U8GLIB_SSD1351_128X128GH_HICOLOR u8g(8, 9, 7); // Arduino, HW SPI Com: SCK = 76, MOSI = 75, CS = 8, A0 = 9, RESET = 7 (Freetronics OLED)

const uint8_t fan_bitmap[] PROGMEM = {102,207,237,120,30,183,243,102};
//const uint8_t thermo_bitmap[] PROGMEM = { 64,166,79,25,48,48,27,14,0,0};
const uint8_t thermo_bitmap[] PROGMEM = {60,36,52,36,52,126,255,255,126};
const uint8_t cpu_bitmap[] PROGMEM = {126,129,189,189,189,189,189, 129,126};
const uint8_t mem_bitmap[] PROGMEM = {255,129,221,157,65,157,221,129,255};
const uint8_t percentage_bitmap[] PROGMEM = {195,199,14,28,56,112,227,195};
const uint8_t net_bitmap[] PROGMEM = { 56,40,56,16,254,68,238,170,238,0 };
const uint8_t hdd_bitmap[] PROGMEM = { 255,227,193,201,209,227,223,161,255,0 };
const uint8_t up_bitmap[] PROGMEM = { 0,16,56,84,146,16,16,16 };
const uint8_t down_bitmap[] PROGMEM = { 0,16,16,16,146,84,56,16 };
const uint8_t omv1_bitmap[] PROGMEM = {127,64,95,87,95,64,95,87};
const uint8_t omv2_bitmap[] PROGMEM = {255,1,253,253,253,1,253,253};
const uint8_t omv3_bitmap[] PROGMEM = {95,64,95,87,95,64,127,0};
const uint8_t omv4_bitmap[] PROGMEM = {253,1,253,253,253,1,255,0};

int MAX_COUNT=10;
int INPUT_COUNT;
int INTERVAL=0;
unsigned long PrevMillis=0;

void InitScreen() {
  u8g.firstPage();  
  do {
    u8g.setFont(u8g_font_fixed_v0);
  //u8g.setFont(u8g_font_osb21);
    u8g.drawBox(0,13,128,11);
    u8g.setColorIndex(0);
    u8g.drawStr( 33, 22, "KEVIN'S NAS");
    u8g.setColorIndex(1);
    u8g.drawStr( 33, 53, "powered by");    
    u8g.drawStr( 33, 62, "openmediavault");   
    u8g.drawBitmapP(11,47,1,8, omv1_bitmap); 
    u8g.drawBitmapP(19,47,1,8, omv2_bitmap);
    u8g.drawBitmapP(11,55,1,8, omv3_bitmap);
    u8g.drawBitmapP(19,55,1,8, omv4_bitmap);
  } while( u8g.nextPage() );  
}

void ShowIP(char x[]) {
  u8g.setFont(u8g_font_fixed_v0);
  u8g.drawBox(0,0,128,9);
  u8g.setColorIndex(0);
  int H=strlen(x)/2;
  u8g.drawStr(63-H*5,8, x);
  u8g.setColorIndex(1);
}

void ShowTEMP(char t1[], char t2[], char t3[], char t4[], char t5[]) {
  u8g.setFont(u8g_font_fixed_v0);  // default font
  u8g.drawBitmapP(0, 12,1,9, thermo_bitmap);
  u8g.drawBitmapP(15,12,1,9, cpu_bitmap);
  u8g.drawBitmapP(48,12,1,9, hdd_bitmap);
  u8g.drawStr(25,20,t1);
  u8g.drawStr(58,20,t2);
  u8g.drawStr(73,20,t3);
  u8g.drawStr(88,20,t4);
  u8g.drawStr(103,20,t5);
}

void ShowRPM(char r1[], char r2[]) {
  u8g.setFont(u8g_font_fixed_v0);
  u8g.drawBitmapP(0,23,1,8, fan_bitmap);
  u8g.drawBitmapP(15,23,1,9, cpu_bitmap);
  u8g.drawBitmapP(81,23,1,9, hdd_bitmap);
  u8g.drawStr(25,31,r1);
  u8g.drawStr(91,31,r2);
}

void ShowUSAGE(char u1[], char u2[], char u3[]) {
  u8g.setFont(u8g_font_courB08);
  u8g.drawStr(1,42, "%");
  u8g.drawBitmapP(15,34,1,9, cpu_bitmap);
  u8g.drawBitmapP(48,34,1,9, mem_bitmap);
  u8g.drawBitmapP(81,34,1,9, hdd_bitmap);
  u8g.setFont(u8g_font_fixed_v0);  
  u8g.drawStr(25,42,u1);
  u8g.drawStr(58,42,u2);
  u8g.drawStr(91,42,u3);
}

void ShowNET(char n1[], char n2[]){
  u8g.setFont(u8g_font_fixed_v0);
  u8g.drawBitmapP(0,44,1,9, net_bitmap);
  u8g.drawBitmapP(15,45,1,8, down_bitmap);
  u8g.drawBitmapP(81,45,1,8, up_bitmap);
  u8g.drawStr(25,53,n1);
  u8g.drawStr(91,53,n2);
}

void ShowDSKIO(char d1[], char d2[]) {
  u8g.setFont(u8g_font_fixed_v0);
  u8g.drawBitmapP(0,55,1,9, hdd_bitmap);
  u8g.drawStr(15,64, "R");
  u8g.drawStr(81,64, "W");
  u8g.drawStr(25,64, d1);
  u8g.drawStr(91,64, d2);
}

void setup(void) {
  Serial.begin(9600);
  // assign default color value
  if ( u8g.getMode() == U8G_MODE_R3G3B2 ) {
    u8g.setColorIndex(255);     // white
  }
  else if ( u8g.getMode() == U8G_MODE_GRAY2BIT ) {
    u8g.setColorIndex(3);         // max intensity
  }
  else if ( u8g.getMode() == U8G_MODE_BW ) {
    u8g.setColorIndex(1);         // pixel on
  }
  else if ( u8g.getMode() == U8G_MODE_HICOLOR ) {
    u8g.setHiColorByRGB(255,255,255);
  }
  InitScreen();
  pinMode(8, OUTPUT);
}

void loop(void) {
//char MyDATA[]="kevin-omv,42,38,38,35,38,NA,2235,1245,0,33,72,626.0B,0.0B,0.0k,0.0k,192.168.200.123";
  String SERIN=Serial.readStringUntil('\n');
//  String SERIN=Serial.readString();
  if ( SERIN != NULL ) {
    int LOC01=SERIN.indexOf(",");
    int LOC02=SERIN.indexOf(",",LOC01+1);
    int LOC03=SERIN.indexOf(",",LOC02+1);
    int LOC04=SERIN.indexOf(",",LOC03+1);
    int LOC05=SERIN.indexOf(",",LOC04+1);
    int LOC06=SERIN.indexOf(",",LOC05+1);
    int LOC07=SERIN.indexOf(",",LOC06+1);
    int LOC08=SERIN.indexOf(",",LOC07+1);
    int LOC09=SERIN.indexOf(",",LOC08+1);
    int LOC10=SERIN.indexOf(",",LOC09+1);
    int LOC11=SERIN.indexOf(",",LOC10+1);
    int LOC12=SERIN.indexOf(",",LOC11+1);
    int LOC13=SERIN.indexOf(",",LOC12+1);
    int LOC14=SERIN.indexOf(",",LOC13+1);
    int LOC15=SERIN.indexOf(",",LOC14+1);
    int LOC16=SERIN.indexOf(",",LOC15+1);
    int LOC17=SERIN.indexOf(",",LOC16+1);
   
    int LENGTH=SERIN.length();

    String S_HOSTNAME=SERIN.substring(0,LOC01)  ; char HOSTNAME[S_HOSTNAME.length()+1]  ; S_HOSTNAME.toCharArray(HOSTNAME,S_HOSTNAME.length()+1);
    String S_IP=SERIN.substring(LOC16+1,LOC17)  ; char IP[S_IP.length()+1]              ; S_IP.toCharArray(IP,S_IP.length()+1);    
      
    String S_TEMPCPU=SERIN.substring(LOC01+1,LOC02) ; char TEMPCPU[S_TEMPCPU.length()+1]  ; S_TEMPCPU.toCharArray(TEMPCPU,S_TEMPCPU.length()+1);
    String S_TEMPMB=SERIN.substring(LOC02+1,LOC03)  ; char TEMPMB[S_TEMPMB.length()+1]    ; S_TEMPMB.toCharArray(TEMPMB,S_TEMPMB.length()+1);
    
    String S_TEMPDR1=SERIN.substring(LOC03+1,LOC04) ; char TEMPDR1[S_TEMPDR1.length()+1]  ; S_TEMPDR1.toCharArray(TEMPDR1,S_TEMPDR1.length()+1);
    String S_TEMPDR2=SERIN.substring(LOC04+1,LOC05) ; char TEMPDR2[S_TEMPDR2.length()+1]  ; S_TEMPDR2.toCharArray(TEMPDR2,S_TEMPDR2.length()+1);
    String S_TEMPDR3=SERIN.substring(LOC05+1,LOC06) ; char TEMPDR3[S_TEMPDR3.length()+1]  ; S_TEMPDR3.toCharArray(TEMPDR3,S_TEMPDR3.length()+1);
    String S_TEMPDR4=SERIN.substring(LOC06+1,LOC07) ; char TEMPDR4[S_TEMPDR4.length()+1]  ; S_TEMPDR4.toCharArray(TEMPDR4,S_TEMPDR4.length()+1);    
       
    String S_FANCPU=SERIN.substring(LOC07+1,LOC08)  ; char FANCPU[S_FANCPU.length()+1]  ; S_FANCPU.toCharArray(FANCPU,S_FANCPU.length()+1);
    String S_FANHDD=SERIN.substring(LOC08+1,LOC09)  ; char FANHDD[S_FANHDD.length()+1]  ; S_FANHDD.toCharArray(FANHDD,S_FANHDD.length()+1);   
    
    String S_USECPU=SERIN.substring(LOC09+1,LOC10)  ; char USECPU[S_USECPU.length()+1]  ; S_USECPU.toCharArray(USECPU,S_USECPU.length()+1);
    String S_USEMEM=SERIN.substring(LOC10+1,LOC11)  ; char USEMEM[S_USEMEM.length()+1]  ; S_USEMEM.toCharArray(USEMEM,S_USEMEM.length()+1);
    String S_USEDRV=SERIN.substring(LOC11+1,LOC12)  ; char USEDRV[S_USEDRV.length()+1]  ; S_USEDRV.toCharArray(USEDRV,S_USEDRV.length()+1);

    String S_NETRX=SERIN.substring(LOC12+1,LOC13) ; char NETRX[S_NETRX.length()+1]  ; S_NETRX.toCharArray(NETRX,S_NETRX.length()+1);
    String S_NETTX=SERIN.substring(LOC13+1,LOC14) ; char NETTX[S_NETTX.length()+1]  ; S_NETTX.toCharArray(NETTX,S_NETTX.length()+1);

    String S_DRVREAD=SERIN.substring(LOC14+1,LOC15)   ; char DRVREAD[S_DRVREAD.length()+1]    ; S_DRVREAD.toCharArray(DRVREAD,S_DRVREAD.length()+1);
    String S_DRVWRITE=SERIN.substring(LOC15+1,LOC16)  ; char DRVWRITE[S_DRVWRITE.length()+1]  ; S_DRVWRITE.toCharArray(DRVWRITE,S_DRVWRITE.length()+1);
 
    u8g.firstPage();
    do {
      unsigned long CurrentMillis=millis();
      if (CurrentMillis - PrevMillis >= 2000 ) { INTERVAL = !INTERVAL; PrevMillis = CurrentMillis; }
      if ( INTERVAL == 0 ) { ShowIP(IP);}
      else { ShowIP(HOSTNAME);}
      Serial.println (INTERVAL);
      ShowTEMP(TEMPCPU, TEMPDR1, TEMPDR2, TEMPDR3, TEMPDR4);
      ShowRPM(FANCPU, FANHDD);
      ShowUSAGE(USECPU, USEMEM, USEDRV);
      ShowNET(NETRX, NETTX);
      ShowDSKIO(DRVREAD, DRVWRITE);

      INPUT_COUNT=0;
     } while( u8g.nextPage() );
  } // End of Action after Serial Input
  else {
    Serial.print ("No input - "); 
    INPUT_COUNT++;
    if (INPUT_COUNT > MAX_COUNT ) {
      InitScreen();
      INPUT_COUNT=0;
    }
    Serial.println (INPUT_COUNT);
  }
  delay(1000);
}
