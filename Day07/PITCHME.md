---
# Analog Write and PWM

Robotics - Fall 2017

Day 07
---
## Do Now

Open your circuit so I can come around and see it working.
---
## Review of sub assignment

* ```pinMode(pin, MODE)```
* ```digitalWrite(pin, STATE)```
* ```delay(milliseconds)```
* ```void setup(){}```
* ```void loop(){}```
* variables
---
## Analog vs Digital

* Digital is on/off, high/low, or true/false
* Analog signals can be any value between on and off
---
## PWM

* Pulse-width modulation
* Switch on and off **really** fast
* Used to simulate changing voltage
* Available only on certain pins, marked by **~**
---
# Analog Write

```analogWrite(pin, level)```
The level is a value from 0 (off) to 255 (full on)
+++
## Example

```java
int led = 3;

void setup(){
    pinMode(led, OUTPUT);
}

void loop(){
    analogWrite(led, 0);
    delay(100);
    analogWrite(led, 50);
    delay(100);
    analogWrite(led, 100);
    delay(100);
    analogWrite(led, 150);
    delay(100);
    analogWrite(led, 200);
    delay(100);
    analogWrite(led,255);
    delay(100);
}
```
---
# Exercise

Create a circuit with an LED connected to one of the PWM pins. Use ```analogWrite()``` to make the light fade on and off
---
# Classwork

Wire up an RGB LED on pins 9, 10, and 11. Use ```analogWrite()``` to make the LED go through the rainbow.