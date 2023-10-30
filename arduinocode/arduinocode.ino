int IrSensor = 12;
int Buzzer = 7;

void setup() {
  Serial.begin(9600);
  pinMode(IrSensor, INPUT);
  pinMode(Buzzer, OUTPUT);
}

void loop() {
  int value = digitalRead(IrSensor);
  Serial.println("");
  Serial.print("Sensor Value = ");
  Serial.print(value);
  delay(1000);
}


