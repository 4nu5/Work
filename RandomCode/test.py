from turtle import *
from colorsys import *

speed(0)
bgcolor("black")
h = 0
for i in range (100):
    color(hsv_to_rgb (h,1,1))
    h+= 0.014
    left(100)
    forward(1)
    for j in range(2):
        left(5) #the gap between circles
        circle(200) #size of circle
    hideturtle()
done()
        
    
