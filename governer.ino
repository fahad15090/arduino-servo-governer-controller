int button = 2;   //pin of the first button
#include<Servo.h> //include the servo library
Servo servo; //create a servo object
void setup() {
  // put your setup code here, to run once:
  servo.attach(9);  //pin used by the servo
  pinMode(button, INPUT_PULLUP);  //define first button as input pullup
  /*
  INPUT_PULLUP send to arduino LOW signal, so, when you press the button, you send a LOW signal to arduino
  */
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(button) == LOW) { //if Value read of the button ==LOW:
    servo.write(90); //servo goes to angle 90
  }
  if (digitalRead(button) == HIGH) { //if Value read of the button ==LOW:
    servo.write(0); //servo goes to angle 0
  }
}
