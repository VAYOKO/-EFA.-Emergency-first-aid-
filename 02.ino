#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#
#define SCREEN_WIDTH 128 // pixel ความกว้าง
#define SCREEN_HEIGHT 64 // pixel ความสูง 
int x = 0;
// กำหนดขาต่อ I2C กับจอ OLED
#define OLED_RESET     -1 //ขา reset เป็น -1 ถ้าใช้ร่วมกับขา Arduino reset
Adafruit_SSD1306 OLED(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
#define bt 12
int var = 0; // ตัวแปรสำหรับทดสอบแสดงผล
void setup() {
  Serial.begin(9600);
  if (!OLED.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // สั่งให้จอ OLED เริ่มทำงานที่ Address 0x3C
    Serial.println("SSD1306 allocation failed");
  } else {
    Serial.println("ArdinoAll OLED Start Work !!!");
  }
  OLED.clearDisplay(); // ลบภาพในหน้าจอทั้งหมด
  OLED.setTextColor(WHITE, BLACK);  //กำหนดข้อความสีขาว ฉากหลังสีดำ
  OLED.setCursor(0, 0); // กำหนดตำแหน่ง x,y ที่จะแสดงผล
  OLED.setTextSize(2); // กำหนดขนาดตัวอักษร
  OLED.println("E.F.A."); // แสดงผลข้อความ ALL
  OLED.drawLine(0, 60, 200, 60, WHITE);

  OLED.drawLine(0, 17, 200, 17, WHITE);
  OLED.setCursor(0, 20);
  OLED.setTextSize(2);
  OLED.println("SBTVC"); // แสดงผลข้อความ ALL
  OLED.setCursor(0, 40);
  OLED.setTextSize(2);
  OLED.println("ELECTRONIC"); // แสดงผลข้อความ ALL

  OLED.display(); // สั่งให้จอแสดงผล
  delay(3000);
  OLED.clearDisplay(); // ลบภาพในหน้าจอทั้งหมด
  OLED.display(); // สั่งให้จอแสดงผล
}

void loop() {

  int btd = digitalRead(bt);   //presses the button for drop medicine

  if (btd == HIGH) {
    OLED.clearDisplay();
    OLED.display();

    delay(2000);
    x = 10;

    while (x == 10) {
      OLED.clearDisplay(); // ลบภาพในหน้าจอทั้งหมด
      OLED.setTextColor(WHITE, BLACK); //กำหนดข้อความสีขาว ฉากหลังสีดำ
      OLED.setCursor(0, 0); // กำหนดตำแหน่ง x,y ที่จะแสดงผล
      OLED.setTextSize(2); // กำหนดขนาดตัวอักษร
      OLED.println("."); // แสดงผลข้อความ ALLOLED.setCursor(0, 0); // กำหนดตำแหน่ง x,y ที่จะแสดงผล
      OLED.display();
      delay(2000);

      OLED.setCursor(10, 0); // กำหนดตำแหน่ง x,y ที่จะแสดงผล
      OLED.setTextSize(2); // กำหนดขนาดตัวอักษร
      OLED.println("."); // แสดงผลข้อความ ALLOLED.setCursor(0, 0); // กำหนดตำแหน่ง x,y ที่จะแสดงผล
      OLED.display();
      delay(2000);

      OLED.setCursor(20, 0); // กำหนดตำแหน่ง x,y ที่จะแสดงผล
      OLED.setTextSize(2); // กำหนดขนาดตัวอักษร
      OLED.println("."); // แสดงผลข้อความ ALLOLED.setCursor(0, 0); // กำหนดตำแหน่ง x,y ที่จะแสดงผล
      OLED.display();
      delay(2000);

      OLED.setCursor(30, 0); // กำหนดตำแหน่ง x,y ที่จะแสดงผล
      OLED.setTextSize(2); // กำหนดขนาดตัวอักษร
      OLED.println("."); // แสดงผลข้อความ ALLOLED.setCursor(0, 0); // กำหนดตำแหน่ง x,y ที่จะแสดงผล
      OLED.display();
      delay(2000);

      Serial.println("SSF TEST EFA...");
x=20;
while(x==20){
    OLED.setTextColor(WHITE, BLACK); //กำหนดข้อความสีขาว ฉากหลังสีดำ
    OLED.setCursor(0, 0); // กำหนดตำแหน่ง x,y ที่จะแสดงผล
    OLED.setTextSize(2); // กำหนดขนาดตัวอักษร
    OLED.println("OK"); // แสดงผลข้อความ ALLOLED.setCursor(0, 0); // กำหนดตำแหน่ง x,y ที่จะแสดงผล
    OLED.display();
}
    }


  }
  else {
    OLED.setTextColor(WHITE, BLACK); //กำหนดข้อความสีขาว ฉากหลังสีดำ
    OLED.setCursor(0, 0); // กำหนดตำแหน่ง x,y ที่จะแสดงผล
    OLED.setTextSize(2); // กำหนดขนาดตัวอักษร
    OLED.println("presses   the button for drop medicine"); // แสดงผลข้อความ ALLOLED.setCursor(0, 0); // กำหนดตำแหน่ง x,y ที่จะแสดงผล
    OLED.display();


  }

}
