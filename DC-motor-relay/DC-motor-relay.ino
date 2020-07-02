void setup() {
pinMode(8, OUTPUT);
pinMode(7, OUTPUT);

}

void loop() {

 digitalWrite(8, HIGH); // clockwise
  delay (1000);         // wait for 1 sec
digitalWrite(8, LOW);
  
digitalWrite(7, HIGH);  // counter clockwise
 delay (1000);
digitalWrite(7, LOW);

}
