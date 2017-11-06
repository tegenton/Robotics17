from microbit import *

while True:
    if button_a.is_pressed():
        display.show(Image.ARROW_E)
    elif button_b.is_pressed():
        display.show(Image.ARROW_W)