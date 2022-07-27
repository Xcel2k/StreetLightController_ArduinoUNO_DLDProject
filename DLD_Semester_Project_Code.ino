#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 2, 3, 4, 5);

//int ledGreen = 7;
int ledRed = 8;
int sensor = 9;
int sensorValue = 0;
int pirState = LOW;
int Contrast = 75;

void setup() {
  pinMode(sensor, INPUT);
  //pinMode(ledGreen, OUTPUT);
  pinMode(ledRed, OUTPUT);
  analogWrite(6,Contrast);
  Serial.begin(9600);
}

void loop() {
  sensorValue = digitalRead(sensor);
  if (sensorValue == HIGH)
  {
    //digitalWrite(ledGreen, HIGH);
    digitalWrite(ledRed, HIGH);
    if (pirState == LOW)
    {
      lcd.clear();
      lcd.print("Motion Detected");
      delay(5000);
      pirState = HIGH;
    }
  }
  else
  {
    //digitalWrite(ledGreen, LOW);
    digitalWrite(ledRed, LOW);
    if (pirState == HIGH)
    {
      lcd.clear();
      lcd.print("Motion Ended");
      pirState = LOW;
    }
    
    
  }

}
