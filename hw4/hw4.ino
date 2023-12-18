// C++ code
//
int Led1 = 12;
int Led2 = 11;
int Led3 = 10;
int Led4 = 9;
int Poten = A5;
void setup()
{
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Led3, OUTPUT);
  pinMode(Led4, OUTPUT);
  pinMode(Poten, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int valorPotenciometro = analogRead(A5);
  Serial.println(valorPotenciometro);



   if(valorPotenciometro < 128)
  {  
  	digitalWrite(12, LOW);
  	digitalWrite(11, LOW);
  	digitalWrite(10, LOW);
  	digitalWrite(9, LOW);
  }
  else if(valorPotenciometro < 256)
  {  
  	digitalWrite(12, HIGH);
  	digitalWrite(11, LOW);
  	digitalWrite(10, LOW);
  	digitalWrite(9, LOW);
  }
  else if(valorPotenciometro < 512)
  {  
  	digitalWrite(12, HIGH);
  	digitalWrite(11, HIGH);
  	digitalWrite(10, LOW);
  	digitalWrite(9, LOW);
  }
  else if(valorPotenciometro < 768)
  {  
  	digitalWrite(12, HIGH);
  	digitalWrite(11, HIGH);
  	digitalWrite(10, HIGH);
  	digitalWrite(9, LOW);
  }
  else if(valorPotenciometro < 1024)
  {  
  	digitalWrite(12, HIGH);
  	digitalWrite(11, HIGH);
  	digitalWrite(10, HIGH);
  	digitalWrite(9, HIGH);
  }
}