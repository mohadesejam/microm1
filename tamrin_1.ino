int led=13;
void setup() {
  // put your setup code here, to run once:
 pinMode(led,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led,HIGH);
delay(3000);
digitalWrite(led,LOW);
delay(1000);
}
