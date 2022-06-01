#include <Servo.h>
Servo servoku;

int trigPin = 2;

int echoPin = 3;

long waktu;

int jarak;

void setup(){
  servoku.attach(3);

  pinMode(trigPin, OUTPUT);

  pinMode(echoPin, INPUT);

  Serial.begin(9600);
}

void loop(){
  servoku.write(10);
  delay(1000);
  servoku.write(100);
  delay(1000);

  digitalWrite(trigPin, LOW);

  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  
  delayMicroseconds(10);
  
  digitalWrite(trigPin, LOW);
  
  
  
  waktu = pulseIn(echoPin, HIGH);
  
  jarak= waktu*0.034/2;
  
  Serial.print("Jarak: ");
  
  Serial.println(jarak);
  
  delay(200);
}
