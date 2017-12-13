from microbit import *
import radio

radio.on()  

while True:
    if button_a.was_pressed():
        radio.send('a')
    elif button_b.was_pressed():
        radio.send('b')
    else:
        radio.send('x')