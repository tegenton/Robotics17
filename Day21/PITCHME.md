---
# Micropython

Robotics Day 21
---
# Python

* Go to the [web interface](https://python.microbit.org/v/1)
* Click download
* Drag the .hex file onto your microbit
---
# Hello World

```python
from microbit import *

while True:
    display.scroll('Hello, World!')
    display.show(Image.HEART)
    sleep(2000)
```
@[1]
@[3]
@[4-6]
+++
# More images

[List of premade images available at the reference](http://microbit-micropython.readthedocs.io/en/latest/tutorials/images.html)

Try changing what image is displayed. Can you display a series of images?
+++
# Animations

You can display a list of images as a sequence to create an animation

```python
from microbit import *

anim = [Image.YES, Image.MEH, Image.NO]

display.show(Image.ALL_CLOCKS, loop=False, delay=400)
display.show(anim, loop=True, delay=1000)
```
@[5],
@[3, 6]
+++
# Custom images

```python
from microbit import *

gradient = Image(
    '98765:'
    '87654:'
    '76543:'
    '65432:'
    '54321'
)

display.show(gradient)
```

Try making your own custom image
---
# Buttons

The micro:bit has `button_a` and `button_b`. Each can be used with `.is_pressed()`, `.was_pressed()`, and `.get_presses()`
+++
```python
from microbit import *

while True:
    if button_a.is_pressed():
        display.show(Image.ARROW_W)
    elif button_b.is_pressed():
        display.show(Image.ARROW_E)
```
@[3]
@[4, 6]
@[5, 7]