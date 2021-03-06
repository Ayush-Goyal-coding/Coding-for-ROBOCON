from nanpy import (ArduinoApi, SerialManager)
import pygame
pygame.init()
j = pygame.joystick.Joystick(0)
j.init()

connection = SerialManager()
a = ArduinoApi(connection = connection)

R1 = 5
L1 = 4
L2 = 6
R2 = 7
square = 0
cross = 1
circle = 2
triangle = 3


dirPinFR =7
dirPinFL =8
dirPinRR =4
dirPinRL =2

pwmPinFR =6
pwmPinFL =9
pwmPinRL= 3
pwmPinRR =5

IN_1 = 5
IN_2 = 4
IN_3 = 6
IN_4 = 7
#def ease_in(speedValue):
#    for i in range(0,speedValue,2):
#        a.analogWrite(pwmPinFR, i)
#        a.analogWrite(pwmPinFL, i)
#        a.analogWrite(pwmPinRL, i)
#        a.analogWrite(pwmPinRR, i)
#    

#def setDirection(FR, FL, RL, RR, speedValue):
#  a.digitalWrite(dirPinFR, FR)
#  a.digitalWrite(dirPinFL, FL)
#  a.digitalWrite(dirPinRL, RL)
#  a.digitalWrite(dirPinRR, RR)
#  #ease_in(speedValue)
  

#def Movement( speedValue):
#    a.analogWrite(pwmPinFR, speedValue)
#    a.analogWrite(pwmPinFL, speedValue)
#    a.analogWrite(pwmPinRR, speedValue)
#    a.analogWrite(pwmPinRL, speedValue)

def stop():
    i =0
    a.analogWrite(pwmPinFR, i)
    a.analogWrite(pwmPinFL, i)
    a.analogWrite(pwmPinRL, i)
    a.analogWrite(pwmPinRR, i)

    
#Setup
a.pinMode(dirPinFR, a.OUTPUT)
a.pinMode(dirPinFL, a.OUTPUT)
a.pinMode(dirPinRR, a.OUTPUT)
a.pinMode(dirPinRL, a.OUTPUT)
a.pinMode(pwmPinFR, a.OUTPUT)
a.pinMode(pwmPinFL, a.OUTPUT)
a.pinMode(pwmPinRR, a.OUTPUT)
a.pinMode(pwmPinRL, a.OUTPUT)

while True:
    events = pygame.event.get()
    for event in events:
        if event.type == pygame.JOYBUTTONDOWN:
            if j.get_button(L1):
                print('L1')
                a.analogWrite(pwmPinFL,0)
                a.analogWrite(pwmPinRR,0)
                a.digitalWrite(dirPinFR,a.LOW)
                a.digitalWrite(dirPinRL,a.LOW)
                for i in range(150,2):
                  a.analogWrite(pwmPinFR, i)
                  a.analogWrite(pwmPinRL, i)
               

            if j.get_button(L2):
                print('L2')
            if j.get_button(R1):
                print('R1')
                stop()
            if j.get_button(R2):
                print('R2')
            if j.get_button(cross):
                print('cross')
                a.digitalWrite(dirPinFR, 0)
                a.digitalWrite(dirPinFL, 0)
                a.digitalWrite(dirPinRL, 0)
                a.digitalWrite(dirPinRR, 0)
                for i in range(0,150,2):
                    a.analogWrite(pwmPinFR, i)
                    a.analogWrite(pwmPinFL, i)
                    a.analogWrite(pwmPinRL, i)
                    a.analogWrite(pwmPinRR, i)
                a.analogWrite(pwmPinFR, 150)
                a.analogWrite(pwmPinFL, 150)
                a.analogWrite(pwmPinRR, 150)
                a.analogWrite(pwmPinRL, 150)
      
            if j.get_button(square):
                print('square')
                a.digitalWrite(dirPinFR, 1)
                a.digitalWrite(dirPinFL, 0)
                a.digitalWrite(dirPinRL, 1)
                a.digitalWrite(dirPinRR, 0)
                for i in range(0,150,2):
                    a.analogWrite(pwmPinFR, i)
                    a.analogWrite(pwmPinFL, i)
                    a.analogWrite(pwmPinRL, i)
                    a.analogWrite(pwmPinRR, i)
                a.analogWrite(pwmPinFR, 150)
                a.analogWrite(pwmPinFL, 150)
                a.analogWrite(pwmPinRR, 150)
                a.analogWrite(pwmPinRL, 150)
              
            if j.get_button(triangle):
                print('triangle')
                a.digitalWrite(dirPinFR, 1)
                a.digitalWrite(dirPinFL, 1)
                a.digitalWrite(dirPinRL, 1)
                a.digitalWrite(dirPinRR, 1)
                for i in range(0,150,2):
                    a.analogWrite(pwmPinFR, i)
                    a.analogWrite(pwmPinFL, i)
                    a.analogWrite(pwmPinRL, i)
                    a.analogWrite(pwmPinRR, i)
                a.analogWrite(pwmPinFR, 150)
                a.analogWrite(pwmPinFL, 150)
                a.analogWrite(pwmPinRR, 150)
                a.analogWrite(pwmPinRL, 150)

                 

            if j.get_button(circle):
              print('circle')
              a.digitalWrite(dirPinFR, 0)
              a.digitalWrite(dirPinFL, 1)
              a.digitalWrite(dirPinRL, 0)
              a.digitalWrite(dirPinRR, 1)
              for i in range(0,150,2):
                a.analogWrite(pwmPinFR, i)
                a.analogWrite(pwmPinFL, i)
                a.analogWrite(pwmPinRL, i)
                a.analogWrite(pwmPinRR, i)
              a.analogWrite(pwmPinFR, 150)
              a.analogWrite(pwmPinFL, 150)
              a.analogWrite(pwmPinRR, 150)
              a.analogWrite(pwmPinRL, 150)
          
           
        if event.type == pygame.JOYBUTTONUP:
            a.digitalWrite(IN_1, a.LOW)
            a.digitalWrite(IN_2, a.LOW)
            a.digitalWrite(IN_3, a.LOW)
            a.digitalWrite(IN_4, a.LOW)
            j.init()
