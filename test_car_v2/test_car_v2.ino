#include <SoftwareSerial.h>
SoftwareSerial BT(0, 1); //TX, RX respetively
String readvoice;
int k;
void setup() {
  // put your setup code here, to run once:
  BT.begin(9600);
  Serial.begin(9600);
pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (BT.available()){  //Check if there is an available byte to read
  delay(10); //Delay added to make thing stable
  char c = BT.read(); //Conduct a serial read
  readvoice += c; //build the string- "forward", "reverse", "left" and "right"
  } 
  if (readvoice.length() > 0) {
    Serial.println(readvoice);

//THIS IS FRONT

  if(readvoice == "forward")
  {

digitalWrite (4, HIGH);
digitalWrite (3, LOW);
delay(100);
k=1;
  }
  
//THIS IS RIGHT
   else if ( readvoice == "right")// or use this if doesnt work  "*right#"
 {

digitalWrite (6, HIGH);
digitalWrite (5, LOW);
delay(100);
  }

  
//THIS IS LEFT
else if (readvoice == "left")// or use this if doesnt work  "*left#"
  {
digitalWrite (6, LOW);
digitalWrite (5, HIGH);
delay(100);
  }

//THIS IS BACK
  else if(readvoice == "backward")// or use this if doesnt work  "*back#"
  {
digitalWrite (3, HIGH);
digitalWrite (4, LOW);
delay(100);
k=2;
  }

 //THIS IS STRAIGHT
   else if(readvoice == "straight")// or use this if doesnt work  "*straight#"
  {
digitalWrite (6, LOW);
digitalWrite (5, LOW);
delay(100);

  if(k == 1 ){
    digitalWrite (4, HIGH);
digitalWrite (3, LOW);
delay(100);
    }
    if(k == 2){
      digitalWrite (3, HIGH);
digitalWrite (4, LOW);
delay(100);
      }
  }

   else if (readvoice == "stop")// or use this if doesnt work  "*stop#"
 {
   digitalWrite (3, LOW);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (100);
 }

  //random movement
else if (readvoice == "show")// or use this if doesnt work  "*show#"
 {
 digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (400);
      digitalWrite(3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, HIGH);
   delay (500);

digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (400);
      digitalWrite(3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, HIGH);
   delay (500);digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (400);
      digitalWrite(3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, HIGH);
   delay (500);digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (400);
      digitalWrite(3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, HIGH);
   delay (500);digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (400);
      digitalWrite(3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, HIGH);
   delay (500);digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (400);
      digitalWrite(3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, HIGH);
   delay (500);digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (400);
      digitalWrite(3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, HIGH);
   delay (500);digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (400);
      digitalWrite(3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, HIGH);
   delay (500);
 }
  readvoice="";}}
