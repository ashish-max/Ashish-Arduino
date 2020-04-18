void setup() 
{
 pinMode(2,OUTPUT);//pin declaration
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(8,OUTPUT);
 pinMode(9,OUTPUT);
 pinMode(10,OUTPUT);
 pinMode(11,OUTPUT);
 pinMode(12,OUTPUT);
 pinMode(13,OUTPUT);
 pinMode(A0,OUTPUT);
 pinMode(A1,OUTPUT);
 pinMode(A2,OUTPUT);
 pinMode(A3,OUTPUT);

}

void loop() 
{
 digitalWrite(3,LOW);
 digitalWrite(6,LOW);
 digitalWrite(9,LOW);
 digitalWrite(12,LOW);
 
 digitalWrite(4,HIGH);
 digitalWrite(8,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(11,HIGH);
 
 delay(5000);

 digitalWrite(3,LOW);
 digitalWrite(6,LOW);
 digitalWrite(9,LOW);
 digitalWrite(12,LOW);
 
 analogWrite(A0,200);
 digitalWrite(8,HIGH);
 analogWrite(A1,200);
 digitalWrite(11,HIGH);
 
 delay(5000);
 
 digitalWrite(4,LOW); 
 digitalWrite(8,LOW);
 digitalWrite(7,LOW);
 digitalWrite(11,LOW);
 analogWrite(A0,0);
 analogWrite(A1,0);
 
 digitalWrite(3,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(9,HIGH);
 digitalWrite(12,HIGH);

 delay(2000);

 digitalWrite(3,LOW);
 digitalWrite(6,LOW);
 digitalWrite(9,LOW);
 digitalWrite(12,LOW);
 
 digitalWrite(2,HIGH);
 digitalWrite(10,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(13,HIGH);

 delay(5000);

 digitalWrite(3,LOW);
 digitalWrite(6,LOW);
 digitalWrite(9,LOW);
 digitalWrite(12,LOW);
 
 digitalWrite(2,HIGH);
 analogWrite(A2,200);
 digitalWrite(5,HIGH);
 analogWrite(A3,200);

 delay(5000);

 digitalWrite(2,LOW);
 digitalWrite(10,LOW);
 digitalWrite(5,LOW);
 digitalWrite(13,LOW);
 analogWrite(A2,0);
 analogWrite(A3,0);
 
 digitalWrite(3,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(9,HIGH);
 digitalWrite(12,HIGH);

 delay(2000); 
}
