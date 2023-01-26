

int IrSenor = 12;
int Buzzer = 7;
void setup() {
 Serial.begin(9600);
 pinMode{irSensor, INPUT};
 pinMode{buzzer, OUTPUT};
}
void loop() {
 int value = digitalRead(irSensor):
 Serial.println("");
 Serial.print("Sensor Value =");
 Serial.print(value);
 delay(1000);
}