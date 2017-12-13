from microbit import *

while True:
    if button_a.is_pressed():
        display.scroll(str(button_a.get_presses()))
    elif button_b.is_pressed():
        display.scroll(str(button_b.get_presses()))