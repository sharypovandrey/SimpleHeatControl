int Relay = 2;
int stateRelay = HIGH;

void setup() {
  pinMode(Relay, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  while (1) {
    if (stateRelay == HIGH) {
      stateRelay = LOW;
    } else {
      stateRelay = HIGH;
    }
    digitalWrite(Relay, stateRelay);
    Serial.print("State = ");
    Serial.println(stateRelay);
    Serial.println("-----------");
    delay(1000);
  }
}
