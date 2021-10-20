#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <TinyDHT.h> 
#include <avr/power.h>  
#define DHTPIN 3    
#define DHTTYPE DHT11 
DHT dht(DHTPIN, DHTTYPE);
#define TEMPTYPE 0   
LiquidCrystal_I2C lcd(0x27, 0, 2);

void setup(){
   if (F_CPU == 16000000) clock_prescale_set(clock_div_1); // 5V Trinket: run at 16 MHz
  dht.begin();  // Initialize DHT Teperature Sensor
    lcd.begin();

  // Turn on the blacklight and print a message.
  lcd.backlight();
  //Serial.begin(9600);
}
void loop() {
  int8_t h = dht.readHumidity();               // Read humidity
  int16_t t = dht.readTemperature(TEMPTYPE);  
  lcd.setCursor(0, 0); 
  if ( t == BAD_TEMP || h == BAD_HUM ) { // if error conditions (see TinyDHT.h)
     lcd.print("Bad read on DHT");
     } else {
     lcd.print("Humidity: ");            // write to LCD
     lcd.setCursor(10,0); 
     lcd.print(h);
     lcd.setCursor(12, 0); 
     lcd.print(" % ");
     lcd.setCursor(0, 1); 
     lcd.print("Temperature:"); 
     lcd.setCursor(12, 1); 
     lcd.print(t);
     lcd.setCursor(15, 1); 
     lcd.print("C");
  }
  delay(2000);  // Read temp every second (2000 ms) (DHT sensor max rate)
}
