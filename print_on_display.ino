#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Initialize the LCD with I2C address and size
LiquidCrystal_I2C lcd(0x27, 16, 2); // Replace 0x27 with your LCD address

void setup() {
  // Initialize I2C communication
  Wire.begin(21, 22); // SDA = GPIO 21, SCL = GPIO 22

  lcd.init();          // Initialize the LCD
  lcd.backlight();     // Turn on the backlight
  lcd.setCursor(0, 0); // Set cursor to first row, first column
  lcd.print("Hello, World!"); // Replace "World" with your name
}

void loop() {
  // Nothing to do in loop for static text
}
