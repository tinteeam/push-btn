//setup global variables
const int btnPin = 2;
int  btnState = 0;

void setup() {
  pinMode(btnPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  btnState = digitalRead(btnPin);

  if(btnState == HIGH) {
    Serial.println("Button is pressed. The state is HIGH.");
    
  }
  else {
    Serial.println("Button is not pressed. the state is LOW.");
  }
  delay(1000);
}
