  
#include <Servo.h>
Servo myservo;
  int k=0;
void setup()
{ 
  Serial.begin(9600);
  pinMode(13,OUTPUT);
    myservo.attach(7 );
}

void loop()
{

  k=analogRead(A0);
if(k<20){
      digitalWrite(13,HIGH);
      myservo.write(30);
      delay(2      00);
      myservo.write( 0);   
    delay(100);            
  }
    Serial.println(k);


  digitalWrite(13,LOW);
}
