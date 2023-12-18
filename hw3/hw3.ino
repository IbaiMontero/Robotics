#include<Servo.h>
#define pulsador 4
#define boton 6
Servo motorcin;
#include <Servo.h>
#include <Arduino.h>

int a = 1;
int b = 2;
int c = 13;
int d = 12;
int e = 11;
int f = 8;
int g = 7;

void setup()
{
  Serial.begin(9600);
  motorcin.attach(3);
  pinMode(pulsador,INPUT); // pulsador 4
  pinMode(boton,INPUT); // pulsador 6

  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);

}

void loop()
{
  int pulsador1=digitalRead(pulsador);
  int boton1=digitalRead(boton);
    
if  (pulsador1==1)
  {
    motorcin.write(130);
    delay(1000);
  }
  else
    {
      motorcin.write(0);
       digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,LOW);
      delay(2000);
      delay(1000);
    }
Serial.print("pulsador value: ");
Serial.println(pulsador1);

if (boton1==0)   
  { 
    motorcin.write(30);
    delay(1000);
  }
   else
  {
    motorcin.write (0);
    delay(1000);
  }
Serial.print("boton value: ");
Serial.println(boton1); 

} 