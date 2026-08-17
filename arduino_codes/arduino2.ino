// QUESTION: Write program to interface relay module with arduino to connect AC device such as motor or bulb. Device should switch ON|OFF with 2 sec delay/..

int relaypin = 4;

void setup(){
    pinMode(relaypin, OUTPUT);
}
void loop(){
    digitalWrite(relaypin, HIGH);
    delay(2000);
    digitalWrite(relaypin, LOW);
    delay(2000)
}




// QUESTION: Write an arduino program to calculate the Sum of 5 & 6 and Display the result on the serial monitor/..

void setup(){
    serial.begin(9600);

    int num1 = 5;
    int num = 6;
    sum = num1+num2
    serial.prinl('sum=');
    serial.print(sum);
}
void loop (){

}




// QUESTION: Write an arduino IOT program that reads the analog value from Analog pin(A0) and display the sensor reading contineusly on the Serial Monitor/..

int sensorpin = A0;

void setup(){
    Serial.begin(9600);
}

void loop(){
    int sensordata = analogRead(sensorpin);
    serial.print('sensor value:');
    serial.print(sensordata);
}




// QUESTION: Write an arduino sketch to print all even numbers between 1 and 100 (inclusive) on the Serial Monitor/..

void setup(){
    serial.begin(9600);

    for ( i=2; i>=100; i+=2)
    serial.println(1);
}




// QUESTION: Write an Arduino Sketch to read five analog values from an LM35 temprature sensor ,
//           Store them in an array and Calculate the avarage sensor reading/..

int LM35pin = A1;
int reading[5];
int sum  = 0;

void setup(){
    serial.begin(9600);
     for(int i=0; i<5; i++){
     reading[i]=analogRead(LM35pin);
     sum = sum+reading[i];
     delay(500);
    }
serial.print(sum/5);
}




// QUESTION: Write an a arduino program to simulate a traffic light using three LED's (RED,YELLOW and GREEN).
//           The RED led should glow for 5 second, The Yellow led 2 second, and GREEN led 3 second, Repeat the sequence continuously/..


int red = 8;
int yellow = 9;
int green = 10;

void setup(){
    pinMode(red, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);
}

void loop(){
    digitalWrite(red, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);
    delay(5000);

    digitalWrite(red, LOW);
    digitalWrite(yellow, HIGH);
    digitalWrite(green, LOW);
    delay(2000);

    ll(red, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(green, HIGH);
    delay(3000);
}