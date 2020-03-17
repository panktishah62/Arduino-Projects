
int val=0;

void setup()
{
pinMode(5,OUTPUT);            //Front Right wheel
pinMode(6,OUTPUT);            //Front Left wheel
pinMode(9,OUTPUT);            //Back Right wheel
pinMode(10,OUTPUT);           //Back Left wheel
pinMode(4,INPUT);             //IR Sensor

}

void loop()
{
 val=digitalRead(4);          //Reading the sensor
 
 if(val==1 )                  //Moving Left
 
 {
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
 digitalWrite(9,LOW);
digitalWrite( 10,HIGH);
delay(10);
 }
 
 else                         //Moving right
 {
 digitalWrite(5,HIGH);
 digitalWrite(6,LOW);
 digitalWrite(9,HIGH);
 digitalWrite(10,LOW);
 delay(10);
 }
}
