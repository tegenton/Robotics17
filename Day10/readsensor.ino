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