from microbit import *
import radio

while True:
    if button_a.was_pressed():
        radio.send('a')
    elif button_b.was_pressed():
        radio.send('b')
    else:
        radio.send('x')