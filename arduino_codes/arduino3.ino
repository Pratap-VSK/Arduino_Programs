// QUESTION: Write a program to interface a light (LED) and display it's values on the serial monitor with a delay of 2 sec between reading/..

#include<LiquidCrytal.h>
int ledpin = 10;
bool ledsate;

void setup(){
    Serial.begin(9600);
    pinMode(ledpin, OUTPUT);
}

void loop() {
    ledstate=digitalRead(ledpin);
    serial.print(ledstate ? "ON" ; "OFF");
    delay(2000);
}



// QUESTION:To read value from a soil sensor/..

int sensorpin = A0;

void setup(){
    Serial.begin(9600);
}

void loop(){
    int reading=analogRead(sensorpin);
    serial.println(reading);
    delay(2000);
}


