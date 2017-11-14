from microbit import *
import radio

while True:
    incoming = radio.receive()
    display.scroll(incoming)