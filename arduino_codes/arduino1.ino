// QUESTION: Write a program to interface air quality sensor MQ135, Display data on LCD switch on Led when data sensed higher than specific value/..

#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3);
int ledpin = 6;

void setup(){
    pinMode(ledpin, OUTPUT);
    led.begin(16,2);
}

void loop(){
    int reading = analogRead(A0);
    lcd.print(reading);

    if(reading>500){
        digitalWrite(ledpin,HIGH);
    }
    else{
        digitalWrite(ledpin,LOW);
    }
    delay(2000);   
}