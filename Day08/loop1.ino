int r = 9;
int g = 10;

void setup(){
    pinMode(r, OUTPUT);
    pinMode(g, OUTPUT);
}

void loop(){
    int brightness = 255;
    
    // repeat these three lines until brightness is 0
    while(brightness > 0){
        analogWrite(r, brightness);
        analogWrite(g, 255-brightness)
        delay(10)
        brightness = brightness - 1;
    }

    brightness = 255;
    
    // repeat these three lines until brightness is 0
    while(brightness > 0){
        analogWrite(g, brightness);
        analogWrite(b, 255-brightness)
        delay(10)
        brightness = brightness - 1;
    }
}