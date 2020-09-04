#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(LED_BUILTIN, OUTPUT);
 pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(A0);
  float voltage = 5.0 * value / 1024;
  if (voltage > 1.5) {
    digitalWrite(13, LOW);
    digitalWrite(8, HIGH);
  }
  else if (voltage < 1.5){
  digitalWrite(8, LOW); 
  digitalWrite(13, HIGH);  
  }


  Serial.println(voltage);
  delay(1000);

  }