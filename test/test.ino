void setup() {
  Serial.begin(9600);
}

void loop() {
  
  char input = 'z';

  if (Serial.available() > 0)
  {
    input = Serial.read();
    delay(10);
    Serial.println(input);
  }
}
