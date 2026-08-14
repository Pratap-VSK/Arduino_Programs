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



// QUESTION: Write a program using any one development board (Arduino/Rapberry pi) to read data from sensor .
//           Do this with both Ananlog and Digital sensor/..

int ledpin = A1;
int irpin = 5;

void setup(){
    pinMode(irpin, INPUT);
    Serial.begin(9600);
}

void loop(){
    int ldrreading=analogRead(ldrpin);
    int irreadin = digitalRead(irpin);
    serial.print("ananlog value:");
    serial.print(ldrreading);

    serial.print("Digital Value: ")
    Serial.print(irreading);
}





// QUESTION: Write a program in to interface an LED, Buzzer and button with arduino . Modify the program to make the buzzer to go on for 1min 
         //  and LED Glow for 45sec Whenever the button is pressed/..

int ledpin = 4;
int button = 1;
int buzzerpin = 3;

void setup(){
    pinMode(ledpin, OUTPUT);
    pinMode(buttonpin, INPUT);
    pinMode(buzzerpin, OUTPUT);
}
void loop(){
    if(digitalRead(buttonpin, HIGH));
        digitalWrite(buzzerpin, HIGH);
        delay(2000);
        digitalWrite(ledpin, HIGH);

    else
        digitalWrite(buzzerpin, LOW);
        delay(2000);
}




//QUESTION: Write a program to interface LCD with arduino board on display "hello World" on it /..

#include<LiquidCrystal.h>
LiquidCrystal lca(11,10, 6, 5, 4, 3);

void setup(){
    lcd.begin(16,2);
    lcd.print("Hello World");
}

void loop(){

}



// QUESTION:Write a program to buzzer when water is detected by a water sensor/..

int buzzpin = 5;
int waterpin = A2;
int value = 400;

void setup(){
    pinMode(buzzpin, OUTPUT);
}

void loop(){
    int reading=analogRead(waterpin);
    if(reading>400){
        digitalWrite(buzzpin, HIGH);
        delay(2000);
    }
    else{
        digitalWrite(buzzpin, LOW);
    }
}




// QUESTION: Write a program in arduino to interface a temprature sensor(LM35) to detect the temprature of a room/..

