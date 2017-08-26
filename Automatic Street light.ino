void setup() {
   Serial.begin(9600);

}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  delay(100);
  if (analogRead(A0)>300){
    digitalWrite(13,LOW);
  }
  else(analogRead(A0)<100);{
    digitalWrite(13,HIGH);
  }
    
  }
