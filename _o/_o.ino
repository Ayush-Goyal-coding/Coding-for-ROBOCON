//// down sensors
#define O1 A0
#define O2 A1
#define O3 A2
#define O4 A3
#define O5 A4
// side sensors
//#define L1 A5
//#define L2 10
//#define L3 11
//#define L4 12
//#define L5 13
//dir pins
#define dirPinFR 7
#define dirPinFL 8
#define dirPinRR 4
#define dirPinRL 2
// pwm Pins
#define pwmPinFR 6
#define pwmPinFL 9
#define pwmPinRL 3
#define pwmPinRR 5
volatile int task_no;

void setup()
{
  pinMode(O1, INPUT);
  pinMode(O2, INPUT);
  pinMode(O3, INPUT);
  pinMode(O4, INPUT);
  pinMode(O5, INPUT);
  //  pinMode(L1, INPUT);
  //  pinMode(L2, INPUT);
  //  pinMode(L3, INPUT);
  //  pinMode(L4, INPUT);
  //  pinMode(L5, INPUT);
  //  Serial.begin(9600);
  pinMode(pwmPinFR, OUTPUT);
  pinMode(pwmPinRR, OUTPUT);
  pinMode(pwmPinFL, OUTPUT);
  pinMode(pwmPinRL, OUTPUT);
  pinMode(dirPinFR, OUTPUT);
  pinMode(dirPinFL, OUTPUT);
  pinMode(dirPinRR, OUTPUT);
  pinMode(dirPinRL, OUTPUT);

}
void loop()
{
  int a = digitalRead(O1);
  int b = digitalRead(O2);
  int c = digitalRead(O3);
  int d = digitalRead(O4);
  int e = digitalRead(O5);
  //  int f = digitalRead(L1);
  //  int g = digitalRead(L2);
  //  int h = digitalRead(L3);
  //  int i = digitalRead(L4);
  //  int j = digitalRead(L5);
  //  Serial.print(a);
  //  Serial.print(b);
  //  Serial.print(c);
  //  Serial.print(d);
  //  Serial.print(e);
  //  Serial.print(f);
  //  Serial.print(g);
  //  Serial.print(h);
  //  Serial.print(i);
  //  Serial.print(j);
  //  Serial.print("\n");
/*
  if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0)
  {
    if (task_no == 2)
    {
      //last task was left or (left and forward) that caused it to stop
      //now go back south-east
      while (digitalRead(O5 != 1))
      {
        analogWrite(pwmPinFR, 70);
        analogWrite(pwmPinRR, 0);
        analogWrite(pwmPinFL, 0);
        analogWrite(pwmPinRL, 70);
        digitalWrite(dirPinFR, LOW);
        digitalWrite(dirPinFL, LOW);
        digitalWrite(dirPinRR, LOW);
        digitalWrite(dirPinRL, LOW);
      }
    }
    if (task_no == 3)
    {
      //last task was right or (right and forward) that caused it to stop
      //now go back south-west
      while (digitalRead(O1 != 1))
      {
        analogWrite(pwmPinFR, 0);
        analogWrite(pwmPinRR, 70);
        analogWrite(pwmPinFL, 70);
        analogWrite(pwmPinRL, 0);
        digitalWrite(dirPinFR, LOW);
        digitalWrite(dirPinFL, LOW);
        digitalWrite(dirPinRR, LOW);
        digitalWrite(dirPinRL, LOW);
      }
    }
    while (digitalRead(O1) == 0 && digitalRead(O2) == 0 && digitalRead(O3) == 0 && digitalRead(O4) == 0 && digitalRead(O5) == 0)
    {
      analogWrite(pwmPinFR, 0);
      analogWrite(pwmPinRR, 0);
      analogWrite(pwmPinFL, 0);
      analogWrite(pwmPinRL, 0);
      digitalWrite(dirPinFR, HIGH);
      digitalWrite(dirPinFL, LOW);
      digitalWrite(dirPinRR, LOW);
      digitalWrite(dirPinRL, HIGH);
    }
  }*/

  if ((a == 0 && b == 1 && c == 1 && d == 1 && e == 0) || (a == 0 && b == 1 && c == 1 && d == 0 && e == 0) || (a == 0 && b == 0 && c == 1 && d == 1 && e == 0))
  {
    //task_no=1;
    analogWrite(pwmPinFR, 102);
    analogWrite(pwmPinRR, 102);
    analogWrite(pwmPinFL, 102);
    analogWrite(pwmPinRL, 102);
    digitalWrite(dirPinFR, HIGH);
    digitalWrite(dirPinFL, HIGH);
    digitalWrite(dirPinRR, HIGH);
    digitalWrite(dirPinRL, HIGH);
    while ((digitalRead(O1) == 0 && digitalRead(O2) == 1 && digitalRead(O3) == 1 && digitalRead(O4) == 1 && digitalRead(O5) == 0) || (digitalRead(O1) == 0 && digitalRead(O2) == 1 && digitalRead(O3) == 1 && digitalRead(O4) == 0 && digitalRead(O5) == 0)
           || (digitalRead(O1) == 0 && digitalRead(O2) == 0 && digitalRead(O3) == 1 && digitalRead(O4) == 1 && digitalRead(O5) == 0))
    {
      analogWrite(pwmPinFR, 102);
      analogWrite(pwmPinRR, 102);
      analogWrite(pwmPinFL, 102);
      analogWrite(pwmPinRL, 102);
      digitalWrite(dirPinFR, HIGH);
      digitalWrite(dirPinFL, HIGH);
      digitalWrite(dirPinRR, HIGH);
      digitalWrite(dirPinRL, HIGH);
    }
  }
  //  if (a == 0 && b == 1 && c == 1 && d == 1 && e == 0)
  //  {
  //
  //    analogWrite(pwmPinFR, 127);
  //    analogWrite(pwmPinRR, 127);
  //    analogWrite(pwmPinFL, 127);
  //    analogWrite(pwmPinRL, 127);
  //    digitalWrite(dirPinFR, HIGH);
  //    digitalWrite(dirPinFL, HIGH);
  //    digitalWrite(dirPinRR, HIGH);
  //    digitalWrite(dirPinRL, HIGH);
  //    while (digitalRead(O1) == 0 && digitalRead(O2) == 1 && digitalRead(O3) == 1 && digitalRead(O4) == 1 && digitalRead(O5) == 0)
  //    {
  //      analogWrite(pwmPinFR, 127);
  //    analogWrite(pwmPinRR, 127);
  //    analogWrite(pwmPinFL, 127);
  //    analogWrite(pwmPinRL, 127);
  //    digitalWrite(dirPinFR, HIGH);
  //    digitalWrite(dirPinFL, HIGH);
  //    digitalWrite(dirPinRR, HIGH);
  //    digitalWrite(dirPinRL, HIGH);
  //    }
  //  }

  //  if (f == 0 && g == 1 && h == 1 && i == 1 && j == 0)
  //  { //right
  //    analogWrite(pwmPinFR, 127);
  //    analogWrite(pwmPinRR, 127);
  //    analogWrite(pwmPinFL, 127);
  //    analogWrite(pwmPinRL, 127);
  //    digitalWrite(dirPinFR, LOW);
  //    digitalWrite(dirPinFL, HIGH);
  //    digitalWrite(dirPinRR, HIGH);
  //    digitalWrite(dirPinRL, LOW);
  //    while (digitalRead(L1) == 0 && digitalRead(L2) == 1 && digitalRead(L3) == 1 && digitalRead(L4) == 1 && digitalRead(L5) == 0)
  //    {
  //      analogWrite(pwmPinFR, 127);
  //      analogWrite(pwmPinRR, 127);
  //      analogWrite(pwmPinFL, 127);
  //      analogWrite(pwmPinRL, 127);
  //      digitalWrite(dirPinFR, LOW);
  //      digitalWrite(dirPinFL, HIGH);
  //      digitalWrite(dirPinRR, HIGH);
  //      digitalWrite(dirPinRL, LOW);
  //    }
  //  }
  if ((a == 1 && b == 1 && c == 1 && d == 1 && e == 0) || (a == 1 && b == 1 && c == 1 && d == 0 && e == 0) || (a == 1 && b == 1 && c == 0 && d == 0 && e == 0) || (a == 1 && b == 0 && c == 0 && d == 0 && e == 0))
  { //left or (diagonal left)
    task_no = 2;
    while ((digitalRead(O1) == 1 && digitalRead(O2) == 1 && digitalRead(O3) == 1
            && digitalRead(O4) == 1 && digitalRead(O5) == 0) || (digitalRead(O1) == 1 && digitalRead(O2) == 1 && digitalRead(O3) == 1 && digitalRead(O4) == 0 && digitalRead(O5) == 0) ||
           (digitalRead(O1) == 1 && digitalRead(O2) == 1 && digitalRead(O3) == 0 && digitalRead(O4) == 0 && digitalRead(O5) == 0) || (digitalRead(O1) == 1 && digitalRead(O2) == 0 && digitalRead(O3) == 0 && digitalRead(O4) == 0 && digitalRead(O5) == 0))
    {
      //      analogWrite(pwmPinFR, 70);
      //      analogWrite(pwmPinRR, 70);
      //      analogWrite(pwmPinFL, 51);
      //      analogWrite(pwmPinRL, 51);
      //      digitalWrite(dirPinFR, HIGH);
      //      digitalWrite(dirPinFL, HIGH);
      //      digitalWrite(dirPinRR, HIGH);
      //      digitalWrite(dirPinRL, HIGH);
      analogWrite(pwmPinFR, 102);
      analogWrite(pwmPinRR, 0);
      analogWrite(pwmPinFL, 0);
      analogWrite(pwmPinRL, 102);
      digitalWrite(dirPinFR, HIGH);
      digitalWrite(dirPinFL, HIGH);
      digitalWrite(dirPinRR, HIGH);
      digitalWrite(dirPinRL, HIGH);
    }
  }
  if ((a == 0 && b == 1 && c == 1 && d == 1 && e == 1) || (a == 0 && b == 0 && c == 1 && d == 1 && e == 1) || (a == 0 && b == 0 && c == 0 && d == 1 && e == 1) || (a == 0 && b == 0 && c == 0 && d == 1 && e == 1) || (a == 0 && b == 0 && c == 0 && d == 0 && e == 1))
  { //right or (diagonal right)
    task_no = 3;
    while ((digitalRead(O1) == 0 && digitalRead(O2) == 1 && digitalRead(O3) == 1
            && digitalRead(O4) == 1 && digitalRead(O5) == 1) || (digitalRead(O1) == 0 && digitalRead(O2) == 0 && digitalRead(O3) == 1 && digitalRead(O4) == 1 && digitalRead(O5) == 1) ||
           (digitalRead(O1) == 0 && digitalRead(O2) == 0 && digitalRead(O3) == 0 && digitalRead(O4) == 1 && digitalRead(O5) == 1) || (digitalRead(O1) == 0 && digitalRead(O2) == 0 && digitalRead(O3) == 0 && digitalRead(O4) == 0 && digitalRead(O5) == 1))
    {
      //      analogWrite(pwmPinFR, 51);
      //      analogWrite(pwmPinRR, 51);
      //      analogWrite(pwmPinFL, 70);
      //      analogWrite(pwmPinRL, 70);
      //      digitalWrite(dirPinFR, HIGH);
      //      digitalWrite(dirPinFL, HIGH);
      //      digitalWrite(dirPinRR, HIGH);
      //      digitalWrite(dirPinRL, HIGH);
      analogWrite(pwmPinFR, 0);
      analogWrite(pwmPinRR, 102);
      analogWrite(pwmPinFL, 102);
      analogWrite(pwmPinRL, 0);
      digitalWrite(dirPinFR, HIGH);
      digitalWrite(dirPinFL, HIGH);
      digitalWrite(dirPinRR, HIGH);
      digitalWrite(dirPinRL, HIGH);
    }
  }
  //  if (f == 1 && g == 1 && h == 1 && i == 1 && j == 0)
  //  {//forward
  //    while (digitalRead(L1) == 1 && digitalRead(L2) == 1 && digitalRead(L3) == 1 && digitalRead(L4) == 1 && digitalRead(L5) == 0)
  //    {
  //      analogWrite(pwmPinFR, 60);
  //      analogWrite(pwmPinRR, 60);
  //      analogWrite(pwmPinFL, 60);
  //      analogWrite(pwmPinRL, 60);
  //      digitalWrite(dirPinFR, HIGH);
  //      digitalWrite(dirPinFL, HIGH);
  //      digitalWrite(dirPinRR, HIGH);
  //      digitalWrite(dirPinRL, HIGH);
  //    }
  //  }
  //  if (f == 0 && g == 1 && h == 1 && i == 1 && j == 1)
  //  {//forward
  //    while (digitalRead(L1) == 0 && digitalRead(L2) == 1 && digitalRead(L3) == 1 && digitalRead(L4) == 1 && digitalRead(L5) == 1)
  //    {
  //      analogWrite(pwmPinFR, 60);
  //      analogWrite(pwmPinRR, 60);
  //      analogWrite(pwmPinFL, 60);
  //      analogWrite(pwmPinRL, 60);
  //      digitalWrite(dirPinFR, LOW);
  //      digitalWrite(dirPinFL, LOW);
  //      digitalWrite(dirPinRR, LOW);
  //      digitalWrite(dirPinRL, LOW);
  //    }
  //  }
  else
  {
    //task_no=1;
    analogWrite(pwmPinFR, 102);
    analogWrite(pwmPinRR, 102);
    analogWrite(pwmPinFL, 102);
    analogWrite(pwmPinRL, 102);
    digitalWrite(dirPinFR, HIGH);
    digitalWrite(dirPinFL, HIGH);
    digitalWrite(dirPinRR, HIGH);
    digitalWrite(dirPinRL, HIGH);
  }
  // delay(1000);

}
