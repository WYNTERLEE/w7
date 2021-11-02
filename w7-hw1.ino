#include <Wire.h>
#include "SSD1306Wire.h"
SSD1306Wire  display(0x3c, 21, 22);

void setup() {
//    int input=analogRead(13);
    Serial.begin(115200);
    pinMode(13,INPUT);
    // Initialising the UI will init the display too.
    display.init();
    
    display.flipScreenVertically(); //畫面上下顛倒顯示
    
    display.setFont(ArialMT_Plain_10);   //設定字型與大小
}
void drawFontFaceDemo() {
  // Font Demo1
  // create more fonts at http://oleddisplay.squix.ch/
  display.setTextAlignment(TEXT_ALIGN_LEFT);
//  display.setFont(ArialMT_Plain_10);
//  display.drawString(0, 0, "Value");
  display.setFont(ArialMT_Plain_16);
  display.drawString(0, 10, "Value");
  
}
void loop() {
//  int input=analogRead(13);
   
   
//    display.setFont(ArialMT_Plain_16);   //設定字型與大小
//    display.drawString(0, 0, "Hello World");  //(x座標,y座標,"字串")
//    display.setFont(ArialMT_Plain_24);   //設定字型與大小
//    display.drawString(0, 16, "Hello World"); //(x座標,y座標,"字串")

   display.clear(); //清空畫面
    drawFontFaceDemo();
   display.setFont(ArialMT_Plain_16);
    display.setTextAlignment(TEXT_ALIGN_LEFT);
    display.drawString(0, 40, String(analogRead(13)));
     display.display(); //顯示畫面
    
//   Serial.println(input);
    delay(100);
}

