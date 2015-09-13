int sender = 7;
int empfaenger = 12;
int time = 0;
double distance = 0;
String sDistance;
int x, y, z;
double speed = 0;
int wert = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(sender, OUTPUT);
  pinMode(empfaenger, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  //Grüne Lampe
pinMode(4, OUTPUT);
//Gelbe Lampe
pinMode(3, OUTPUT);
//Rote Lampe
pinMode(2, OUTPUT);

  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  digitalWrite(sender, HIGH);
  delay(10);
  digitalWrite(sender, LOW);
  digitalWrite(13, LOW);
  time = pulseIn(empfaenger, HIGH, 9000);
  StreamToPc();
  CalcSpeed();
  CalcDistance();
  EntfernungsAmpel();
//  CalcDistance();
 // StreamDistanceToPc();
  digitalWrite(13, HIGH);
  delay(100);
  }

void StreamToPc(){
    Serial.println(" m/s");
    CalcDistance();
    Serial.print(speed / 100);    
    }

void StreamDistanceToPc(){
     Serial.println("die Entfernung in cm beträgt:");
     Serial.println(distance);
    }

void CalcDistance(){
     distance = time / 58;
    }
void CalcSpeed(){
  x = distance;
  if(x & y != 0){
    if (x & y != NULL){
      z = x - y; // gibt gescwindigkeit in cm pro zehntel sekunde aus
    
     }else if(y = NULL & x != NULL){
        y = x;
       }
    }else if (x != 0){
     y = x;
      }
   speed = z * 10; //geschwindigkeit in cm/sekunde
  }

  void EntfernungsAmpel(){
      wert = distance;
 // put your main code here, to run repeatedly:if (wert < 40) {
  
   
   if (wert <40 && wert != 0 ){
   digitalWrite(4, LOW);
  digitalWrite(3 , LOW);
  digitalWrite(2 , LOW);

  digitalWrite(2, HIGH);
 
 }
  else if (wert > 40 && wert <= 80){
      digitalWrite(4, LOW);
  digitalWrite(3 , LOW);
  digitalWrite(2 , LOW);

    digitalWrite(3 , HIGH);
    
  }
  else if (wert > 80 || wert == 0){
         digitalWrite(4, LOW);
  digitalWrite(3 , LOW);
  digitalWrite(2 , LOW);

    digitalWrite(4, HIGH);
 }

    
    }  
