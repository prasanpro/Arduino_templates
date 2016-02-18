/*
This program will return the number of bytes entered through serial monitor.
Written by: Prasan Dutt
Mooshic labs
Licence: GPL
*/

char buffer[32];
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()>0){
    byte in = Serial.readBytes(buffer, 60); //If more than 60 characters, then return in sequence
    Serial.println(in);
  }
  delay(100);
}
