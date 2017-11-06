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
# List of images

[List of premade images available at the reference](http://microbit-micropython.readthedocs.io/en/latest/tutorials/images.html)

Try changing what image is displayed. Can you display a series of images?