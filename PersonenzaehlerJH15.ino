int switchState = 0;
int switchState2 = 0;
int personen = 0;
int r;
//int normalWert = 0;
boolean letzteMessung = true;
void setup(){
// put your setup code here, to run once:
pinMode(2, OUTPUT);
Serial.begin (9600);
personen = 1;
}void loop() {
r = Serial.read();
if (r == 'r')
{
  personen = 0;
   Serial.println(personen);
}
// put your main code here, to run repeatedly
switchState = analogRead(1);
if(switchState > 100)
{
 while(1)
 {
delay (20);
switchState2 = analogRead(1);
  //Serial.println(switchState);
  //Serial.println(switchState2);
  //if(switchState - 250 >= 100){
  //Serial.println(abs(switchState - switchState2));
   //if(abs(switchState - switchState2) > 200 )
   if(switchState2 < 80)
    {
      Serial.println(personen);
      personen++;
      //Serial.println(switchState + '\n');
      digitalWrite(2, LOW);
      delay(200);
      break;
      }
     
  }
 }
}

