// C++ code
int Led1=2;
int Led2=3;
int Led3=1 ;

void setup()
{

pinMode (Led2 ,OUTPUT);
pinMode (Led3,OUTPUT);
pinMode (Led1,OUTPUT);
}

void loop()
{
 digitalWrite(Led2,HIGH);
  delay(1000);
  digitalWrite(Led2,LOW);
      delay(1000);
  digitalWrite(Led3,HIGH);
  delay(1000);
   digitalWrite(Led3,LOW);
      delay(1000);
   digitalWrite(Led1,HIGH);
  delay(1000);
   digitalWrite(Led1,LOW);
      delay(1000);
   // Delay a little bit to improve simulation performance
}