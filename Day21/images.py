from microbit import *

anim = [Image.YES, Image.MEH, Image.NO]

display.show(Image.ALL_CLOCKS, loop=False, delay=400)
display.show(anim, loop=True, delay=1000)