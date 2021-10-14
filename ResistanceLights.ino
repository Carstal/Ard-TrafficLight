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

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/
int potPin = 0;
int val = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  
  pinMode(7, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  val = analogRead(potPin);
  Serial.println(val);

  digitalWrite(2, LOW);
  digitalWrite(3, LOW); 
  digitalWrite(4, LOW); 
  digitalWrite(5, LOW);
  digitalWrite(7, LOW);

  if(val > 200){
  digitalWrite(2, HIGH);
  }
  
  if(val > 400){
  digitalWrite(3, HIGH);
  }
  
  if(val > 600){
  digitalWrite(4, HIGH);
  }

  if(val > 800){
  digitalWrite(5, HIGH);
  }
  
  if(val > 1000){
  digitalWrite(7, HIGH);
  }
  
  delay(200);
}
