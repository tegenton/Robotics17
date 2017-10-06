---
# Input and Conditionals

Robotics - Fall 2017

Day 11
---
# Vocab

* input
* read
* serial monitor
* conditional statement
---
# Functions

* analogRead(pin)
* Serial.begin(freq)
* Serial.print()
* Serial.println()
---
# analogRead()

* reads a value from an analog input pin
* takes one integer as an argument to specify the pin to read from
+++
```java
int led = 9;
int sensor = A0;
void setup(){
    // runs one time
    // set pin modes
    pinMode(led, OUTPUT);
    pinMode(sensor, INPUT);
    // start Serial communications
    Serial.begin(9600);
}
void loop(){
    int sensVal = analogRead(sensor);
    Serial.println(sensVal);
}
```
---
# If and Else

*if* the condition is true, *then* do something
*else* do something else

```java
void setup(){
    // runs one time
    // set pin modes
    pinMode(led, OUTPUT);
    pinMode(sensor, INPUT);
    // start Serial communications
    Serial.begin(9600);
}
void loop(){
    int sensVal = analogRead(sensor);
    Serial.println(sensVal);
    if (sensVal < 600){
        t = 50;
    }
    else{
        t = 300;
    }
    digitalWrite(led, HIGH);
    delay(t);
    digitalWrite(led, LOW);
    delay(t);
}
```
---
# Classwork

Demonstrate some alteration in behavior of your LED(s) based on sensor values. Submit as a shared link

### Grading

* 15 points
* 5 points for correct (and clear) circuit
* 5 points for correct (and clear) code
* 5 points for challenge level of your code and circuit
