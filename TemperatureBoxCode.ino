#include <Wire.h> 
#include <LiquidCrystal_I2C.h> 

int warning_led_pin = 3; 
int temp_sensor_pin = A0; 
int buzzer = 5; 
LiquidCrystal_I2C lcd(0x20,16,2);

void setup() {
  Serial.begin(9600); 
  pinMode(warning_led_pin, OUTPUT);
  pinMode(buzzer, OUTPUT);
  lcd.init(); 
}

void loop() {
     int reading = analogRead(temp_sensor_pin); 
     
     float voltage = reading * 5.0;
     voltage /= 1024.0; 
     
     float temperatureC = (voltage - 0.5) * 100; 
  
     float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;

     lcd.backlight();
     lcd.print(" ");
     lcd.print(temperatureC); lcd.println(" degrees C"); 
     lcd.setCursor(1,1);
     lcd.print(temperatureF); lcd.println(" degrees F"); 
     delay(1000); 

     if(temperatureF < 70 || temperatureF > 75) { 
      digitalWrite(warning_led_pin, HIGH);
      delay(100);
      digitalWrite(warning_led_pin, LOW);
      delay(100);
      tone(buzzer, 1000);
      delay(1000);
      noTone(buzzer);
      delay(1000);
     } else {
      digitalWrite(warning_led_pin, LOW);
      digitalWrite(buzzer, LOW);
     }
}
