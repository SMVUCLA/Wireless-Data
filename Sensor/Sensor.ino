int pin = A0; // Rinse and repeat for every sensor in the Teensy
int val;

void setup() {
  Serial.begin(9600);
}

void loop() {
  val = analogRead(pin);
  Serial.println(val);
  
}
