// direction Pins
#define dirPinFR 7
#define dirPinFL 8
#define dirPinRR 4
#define dirPinRL 2
// pwm Pins
#define pwmPinFR 6
#define pwmPinFL 9
#define pwmPinRL 3
#define pwmPinRR 5
int speed_value = 120;
void setDirection(bool FR, bool FL, bool RL, bool RR, int speedValue)
{
  digitalWrite(dirPinFR, FR);
  digitalWrite(dirPinFL, FL);
  digitalWrite(dirPinRL, RL);
  digitalWrite(dirPinRR, RR);
  int i = speedValue;
    analogWrite(pwmPinFR, 175+7);
    analogWrite(pwmPinFL, 190);
    analogWrite(pwmPinRL, 220);
    analogWrite(pwmPinRR, 220+7);
    //delay(10);
  
  
}
void Movement(int speedValue)
{
    analogWrite(pwmPinFR, speedValue);
    analogWrite(pwmPinFL, speedValue);
    analogWrite(pwmPinRR, speedValue);
    analogWrite(pwmPinRL, speedValue);
}
void ease_out(int speedValue)
{
  for(int i = speedValue; i >= 0; i--)
  {
    analogWrite(pwmPinFR, i);
    analogWrite(pwmPinFL, i);
    analogWrite(pwmPinRL, i);
    analogWrite(pwmPinRR, i);
    delay(10);
  }
  delay(2000);
}
void allstop()
{
    analogWrite(pwmPinFR, 0);
    analogWrite(pwmPinFL, 0);
    analogWrite(pwmPinRL, 0);
    analogWrite(pwmPinRR, 0);
}
void setup() {
  // put your setup code here, to run once:
  pinMode(dirPinFR, OUTPUT);
  pinMode(dirPinFL, OUTPUT);
  pinMode(dirPinRR, OUTPUT);
  pinMode(dirPinRL, OUTPUT);
  pinMode(pwmPinFR, OUTPUT);
  pinMode(pwmPinFL, OUTPUT);
  pinMode(pwmPinRR, OUTPUT);
  pinMode(pwmPinRL, OUTPUT);
  
}

void loop() {
  // Forward direction
  setDirection(0,0,0,0,speed_value);//when button pressed (do once)
  //while(millis()<4000)

   // Movement(speed_value);//keep on going till button is pressed (repeatedly)

  
  //ease_out(speed_value);//when button is released (do once)
  // Backward direction
//  setDirection(0,0,0,0,speed_value);
//  //while(millis()<11000)
//  {
//    Movement(speed_value);//keep on going till button is pressed (repeatedly)
//  }
//  delay(5000);
//  ease_out(speed_value);
//  // Left direction
//  setDirection(1,0,1,0,speed_value);
// 
//  {
//    Movement(speed_value);//keep on going till button is pressed (repeatedly)
//  }
//  delay(5000);
//  ease_out(speed_value);
//  // Right direction
//  setDirection(0,1,0,1,speed_value);
//  {
//    Movement(speed_value);//keep on going till button is pressed (repeatedly)
//  }
//  delay(5000);
//  ease_out(speed_value);
//  allstop();
//  delay(10000);
////  // clockwise turning
////  setDirection(0,1,1,0,150);
////  while(millis()<45000)
////  {
////    Movement(150);//keep on going till button is pressed (repeatedly)
////  }
////  ease_out(150);
//
//// anticlockwise turning
////  setDirection(0,1,1,0,150);
////  while(millis()<55000)
////  {
////    Movement(150);//keep on going till button is pressed (repeatedly)
////  }
////  ease_out(150);
////  //////////////////////////////////////////////////////////////////////////////////
////  /////////////////////////DIAGONAL/////////////////////////////////////////////////
////  analogWrite(pwmPinFL,0);
////  analogWrite(pwmPinRR,0);
////  digitalWrite(dirPinFR,LOW);
////  digitalWrite(dirPinRL,LOW);
////  for(int i=0; i<150; i+=2)
////  {
////    analogWrite(pwmPinFR, i);
////    analogWrite(pwmPinRL, i);
////  }
////  for(int i=150; i>150; i-=2)
////  {
////    analogWrite(pwmPinFR, i);
////    analogWrite(pwmPinRL, i);
////  }
////  delay(2000);
}
