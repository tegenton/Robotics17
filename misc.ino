int sensor = A0;
int led = 9;

void setup(){
    Serial.begin(9600);
    pinMode(sensor, INPUT);
    pinMode(led, OUTPUT);
}

void loop(){
    int sensVal = analogRead(sensor);
    Serial.println(sensVal);
    if(sensVal < 600){
        digitalWrite(led, HIGH);
    }
    else{
        digitalWrite(led, LOW);
    }
}