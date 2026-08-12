// Que:Develop  a system using Arduino , a relay module, and bluetooth module to control home appliances remotely and Display the ON|OFF status on the LCD/.


#include<LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // Initialize the LCD with the appropriate pins
int relay = 8;
char data;

void setup() {
  pinMode(relay, OUTPUT); // Set the relay pin as an output
  Serial.begin(9600); // Start serial communication at 9600 baud rate
  lcg.begin(16,2); // Initialize the LCD with 16 columns and 2 rows
}

void loop() {
  if(Serial.available())
  data = Serial.read();

  if (data == '1'){
    digitalWrite(relay, HIGH);
    lcd.clear();
    lcd.print('ON')  
  }
  else if (data == '0'){
    digitalWrite(relay, LOW);
    lcd.clear();
    lcd.print('OFF');
  }