const int motorOutput1 = 7;
const int motorOutput2 =  8;
const int motorOutput3 = 12;
const int motorOutput4 = 11;
void setup() {
  // put your setup code here, to run once:
pinMode(motorOutput1,OUTPUT);
pinMode(motorOutput2,OUTPUT);
pinMode(motorOutput3,OUTPUT);
pinMode(motorOutput4,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(motorOutput1,HIGH);
digitalWrite(motorOutput2,LOW);
delay(3000);
digitalWrite(motorOutput1,HIGH
);
digitalWrite(motorOutput2,LOW);
delay(500);

}
