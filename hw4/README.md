# **THE POTENTIOMETER STRENGTH**

This Arduino project demonstrates how to control four LEDs based on the input from a potentiometer. The LEDs light up progressively as the potentiometer value increases.

## Variable Declarations:


+ **Led1**, **Led2**, **Led3**, and **Led4** store the pin numbers for the four LEDs.

+ **Poten** stores the pin number for the potentiometer.

## Setup Function:


+ **setup()** is called once when the Arduino starts.

+ **pinMode()** is used to set the LED pins as OUTPUT and the potentiometer pin as INPUT.

+ **Serial.begin(9600)** initializes serial communication for debugging purposes.

## Loop Function:


+ **loop()** is the main execution loop that runs continuously.

+ **analogRead(A5)** reads the analog value from the potentiometer and stores it in valorPotenciometro.

+ **Serial.println(valorPotenciometro)** prints the potentiometer value to the Serial Monitor.

## LED Control:


+ The code uses a series of **if** and **else if** statements to control the LEDs based on the potentiometer value.

+ The LEDs are turned on or off in a progressive manner depending on the potentiometer value ranges.

Make sure to connect the LEDs and potentiometer to the correct pins on your Arduino board. The potentiometer will provide analog input values in the range of 0 to 1023, and the code maps different ranges to control the LEDs accordingly.



# THE PRACTICE

## Components Used

- Arduino board
- Four LEDs
- Potentiometer
- Resistors (as needed for the LEDs)
- Breadboard and jumper wires

## Circuit Diagram

Take a look to the circuit [Potenciometer with leds.pdf](https://github.com/IbaiMontero/Robotics/files/13703610/Potenciometer.with.leds.pdf)
 

## Installation

1. Connect the LEDs and potentiometer to the specified pins on your Arduino board.
2. Upload the provided C++ code to your Arduino using the Arduino IDE.

## Code Explanation

```cpp
int Led1 = 12;
int Led2 = 11;
int Led3 = 10;
int Led4 = 9;
int Poten = A5;

void setup() {
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Led3, OUTPUT);
  pinMode(Led4, OUTPUT);
  pinMode(Poten, INPUT);
  Serial.begin(9600);
}

void loop() {
  int valorPotenciometro = analogRead(A5);
  Serial.println(valorPotenciometro);

  if (valorPotenciometro < 128) {
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);

  } else if (valorPotenciometro < 256) {
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

