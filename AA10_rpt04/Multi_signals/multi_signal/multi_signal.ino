/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/
int humi = 0;
int temp = 0;
int lux = 0;

int ledR =3;
int ledG =5;
int ledB =6;


void setup() {
  Serial.begin(9600);
  
}

// the loop function runs over and over again forever
void loop() {
  humi=random(40,90);
  temp=random(-10,30);
  lux=random(150,250);
 
  pwmLed(ledR,humi);
  pwmLed(ledG,temp);
  pwmLed(ledB,lux);
  

  Serial.print("AA10, Ambient lux: ");
  Serial.print(lux);
  Serial.print(" , Humidity: ");
  Serial.print(humi);
  Serial.print(" , Temperature: ");
  Serial.println(temp);
  delay(500);
}

void pwmLed(int led, int pwmValue){
  analogWrite(led,pwmValue);
  delay(10);
}

