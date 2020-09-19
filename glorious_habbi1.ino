#include <Servo.h>
  
Servo Servo1;  
Servo Servo2;
Servo Servo3;
Servo Servo4;
  
void setup()
{
 Serial.begin(115200);
 Servo1.attach(3); 
 Servo2.attach(5); 
 Servo3.attach(6); 
 Servo4.attach(9);
}
  
void loop()
{
 int valcomfrom1pot = analogRead(A0);           
 int degree1 = map(valcomfrom1pot, 0, 1023, 0, 180);     
 Servo1.write(degree1);              
 Serial.println("Angle (Servo 1) : ");
 Serial.println(degree1);
 int valcomfrom2pot = analogRead(A1);           
 int degree2 = map(valcomfrom2pot, 0, 1023, 20, 70);     
 Servo2.write(degree2);                          
 Serial.println("Angle (Servo 2) : ");
 Serial.println(degree2);
 Serial.println("");
 Serial.println("");
 Serial.println("");
 Serial.println("");
 Serial.println("");
 Serial.println("");
 Serial.println("");
 delay(40);
}