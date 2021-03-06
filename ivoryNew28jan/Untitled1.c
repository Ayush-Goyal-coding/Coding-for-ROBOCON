// Forward direction
setDirection(1,1,1,1,150);//when button pressed (do once)
while(millis()<5000)
{
    Movement(150);//keep on going till button is pressed (repeatedly)
}

ease_out(150);//when button is released (do once)


void setDirection(bool FR, bool FL, bool RL, bool RR, int speedValue)
{
    digitalWrite(dirPinFR, FR);
    digitalWrite(dirPinFL, FL);
    digitalWrite(dirPinRL, RL);
    digitalWrite(dirPinRR, RR);
    for(int i = 0; i < speedValue; i+=2)
    {
        analogWrite(pwmPinFR, i);
        analogWrite(pwmPinFL, i);
        analogWrite(pwmPinRL, i);
        analogWrite(pwmPinRR, i);
    }

}
void Movement(int speedValue)
{
    analogWrite(pwmPinFR, speedValue);
    analogWrite(pwmPinFL, speedValue);
    analogWrite(pwmPinRR, speedValue);
    analogWrite(pwmPinRL, speedValue);
}
void ease_out(speedValue)
{
    for(int i = speedValue; i >= 0; i-=2)
    {
        analogWrite(pwmPinFR, i);
        analogWrite(pwmPinFL, i);
        analogWrite(pwmPinRL, i);
        analogWrite(pwmPinRR, i);
    }
}
void allStop()
{
    int i = 0;

    analogWrite(pwmPinFR, i);
    analogWrite(pwmPinFL, i);
    analogWrite(pwmPinRL, i);
    analogWrite(pwmPinRR, i);

}
void forwardMovement()
{
    setDirection(1,1,1,1,150);//when button pressed (do once)
    Movement(150);//keep on going till button is pressed (repeatedly)
}
void backwardMovement()
{
    setDirection(0,0,0,0,150);
    Movement(150);//keep on going till button is pressed (repeatedly)
}
void leftMovement()
{
    setDirection(1,0,1,0,150);
    Movement(150);//keep on going till button is pressed (repeatedly)
}
void rightMovement()
{
    setDirection(0,1,0,1,150);
    Movement(150);//keep on going till button is pressed (repeatedly)
}
void diagonalMovement()
{

    digitalWrite(dirPinFR,LOW);
    digitalWrite(dirPinRL,LOW);
    analogWrite(pwmPinFL,0);
    analogWrite(pwmPinRR,0);
    for(int i=0; i<150; i+=2)
    {
        analogWrite(pwmPinFR, i);
        analogWrite(pwmPinRL, i);
    }
}
