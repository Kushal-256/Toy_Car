int enA=10;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(enA, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
// digitalWrite(3, HIGH);
//    digitalWrite (4, LOW);
//    delay(3000);
//  
////     delay(1000);
////right
//   analogWrite(5,0);
//   digitalWrite(5, HIGH);
//    digitalWrite (6, LOW);
//    delay(1000);
//
  
//     
////   analogWrite(6,255);
////     delay(1000);
////     analogWrite(6,0);
 //digitalWrite(5, LOW);
 // digitalWrite (6, HIGH);
//    delay(1000);

//delay(3000);
//
//    analogWrite(5,0);
//    analogWrite(6,0); 

//part -2  Using Analogs

//Serial.println("this is 30 analog speed ");
//   analogWrite (3, 0);
//   analogWrite (4, 30);
////    analogWrite(enA,30);
//delay(2000);
//Serial.println("this is 60 analog speed ");
////analogWrite(enA,60);
//analogWrite (3, 0);
//   analogWrite (4, 60);
//delay(2000);
//Serial.println("this is 100 analog speed ");
////analogWrite(enA,100);
//analogWrite (3, 0);
//   analogWrite (4, 100);
//delay(2000);
//Serial.println("this is 180 analog speed ");
////analogWrite(enA,180);
//analogWrite (3, 0);
//   analogWrite (4, 180);
//delay(2000);
//Serial.println("this is 255 analog speed ");
////analogWrite(enA,255);
//analogWrite (3, 0);
//   analogWrite (4, 255);
//delay(2000);

//part -3
//Serial.println("this is 100 analog speed ");
//analogWrite (4, 100);
//delay(3000);
//Serial.println("this is 180 analog speed ");
//analogWrite (4, 180);
//delay(3000);
//Serial.println("this is 255 analog speed ");

//THIS IS FRONT
digitalWrite (4, HIGH);
digitalWrite (3, LOW);
delay(3000);
//THIS IS RIGHT
digitalWrite (6, HIGH);
digitalWrite (5, LOW);
delay(3000);
//THIS IS LEFT
digitalWrite (6, LOW);
digitalWrite (5, HIGH);
delay(3000);

//THIS IS BACK
digitalWrite (3, HIGH);
digitalWrite (4, LOW);
delay(3000);
//THIS IS STRAIGHT
digitalWrite (6, LOW);
digitalWrite (5, LOW);
delay(3000);

}
