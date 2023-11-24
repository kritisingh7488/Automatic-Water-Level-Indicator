#include<SoftwareSerial.h>
SoftwareSerial B(10,11);
int level;
const int analog_0=0;
int l1=6;
int l2=2;
int l3=4;
int l4=9;
 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(l1,OUTPUT);
  pinMode(l2,OUTPUT);
  pinMode(l3,OUTPUT);
  pinMode(l4,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  
  // put your main code here, to run repeatedly:
level=analogRead(analog_0);
Serial.println(level);
B.print(";");


if(level<360)
{ digitalWrite(l1, HIGH);
  digitalWrite(l2, LOW);
  digitalWrite(l3, LOW);
  digitalWrite(l4, LOW);
 digitalWrite(8,LOW);
  
}
else if(level>355&&level<529)
 {
  digitalWrite(l1, LOW);
  digitalWrite(l2, HIGH);
  digitalWrite(l3, LOW);
  digitalWrite(l4, LOW);
 digitalWrite(8,LOW);
  
 }

else if(level>563)
 {
  digitalWrite(l1, LOW);
  digitalWrite(l2, LOW);
  digitalWrite(l3, HIGH);
  digitalWrite(l4, HIGH);
  digitalWrite(8,HIGH);
  }
  



}
