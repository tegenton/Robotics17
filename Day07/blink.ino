// declare and initialize a variable
int led = 5;


void setup(){
    // Whatever is in here will run once
    // when the Arduino starts
    
    // set input or output
    // first argument is which pin I'm setting
    pinMode(led, OUTPUT);
}

void loop(){
    // Whatever is in here will repeat forever
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
}