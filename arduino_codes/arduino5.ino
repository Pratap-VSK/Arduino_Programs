1. LED ON/OFF

int led = 13;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}


2. LED Blinking

int led = 13;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
}


3. Two LED Control

int led1 = 8;
int led2 = 9;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  delay(1000);

  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(1000);
}


4. LED control through Push Button/..

int button = 7;
int led = 13;

void setup() {
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  if (digitalRead(button) == HIGH)
    digitalWrite(led, HIGH);
  else
    digitalWrite(led, LOW);
}


5. Buzzer ON/OFF Using Push Button/..

int button = 7;
int buzzer = 8;

void setup() {
  pinMode(button, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  if (digitalRead(button) == HIGH)
    digitalWrite(buzzer, HIGH);
  else
    digitalWrite(buzzer, LOW);
}


6. Traffic Light

int red = 8;
int yellow = 9;
int green = 10;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  digitalWrite(red, HIGH);
  delay(3000);
  digitalWrite(red, LOW);

  digitalWrite(yellow, HIGH);
  delay(1000);
  digitalWrite(yellow, LOW);

  digitalWrite(green, HIGH);
  delay(3000);
  digitalWrite(green, LOW);
}


7. Three LED Sequential Blinking

int a = 8, b = 9, c = 10;

void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
}

void loop() {
  digitalWrite(a, HIGH);
  delay(500);
  digitalWrite(a, LOW);

  digitalWrite(b, HIGH);
  delay(500);
  digitalWrite(b, LOW);

  digitalWrite(c, HIGH);
  delay(500);
  digitalWrite(c, LOW);
}


8. Control LED Brightness via Potentiometer/..

int pot = A0;
int led = 9;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  int value = analogRead(pot);
  int brightness = map(value, 0, 1023, 0, 255);
  analogWrite(led, brightness);
}


9. Print Message on Serial Monitor

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("Hello IoT");
  delay(1000);
}


10. LED Control Serial Monitor

int led = 13;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    char data = Serial.read();

    if (data == '1')
      digitalWrite(led, HIGH);

    if (data == '0')
      digitalWrite(led, LOW);
  }
}


🔹 Sensor Programs
11. Automatic Light via LDR

int ldr = A0;
int led = 13;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  int value = analogRead(ldr);

  if (value < 500)
    digitalWrite(led, HIGH);
  else
    digitalWrite(led, LOW);
}


12. LM35 Temperature Sensor

int sensor = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(sensor);
  float voltage = value * 5.0 / 1023.0;
  float temp = voltage * 100;

  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println(" C");

  delay(1000);
}


13. DHT11 Temperature

#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float t = dht.readTemperature();

  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.println(" C");

  delay(2000);
}


14. DHT11 Humidity

#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float h = dht.readHumidity();

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.println(" %");

  delay(2000);
}


15. DHT11 Temperature + Humidity

#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float t = dht.readTemperature();
  float h = dht.readHumidity();

  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.print(" C  Humidity: ");
  Serial.print(h);
  Serial.println(" %");

  delay(2000);
}


16. Ultrasonic Distance Sensor

int trig = 9;
int echo = 10;

void setup() {
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  long duration = pulseIn(echo, HIGH);
  float distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500);
}


17. PIR Motion Sensor

int pir = 2;
int led = 13;

void setup() {
  pinMode(pir, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  if (digitalRead(pir) == HIGH)
    digitalWrite(led, HIGH);
  else
    digitalWrite(led, LOW);
}


18. IR Object Detection

int ir = 2;
int led = 13;

void setup() {
  pinMode(ir, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  if (digitalRead(ir) == LOW)
    digitalWrite(led, HIGH);
  else
    digitalWrite(led, LOW);
}


19. Soil Moisture Sensor

int soil = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(soil);

  Serial.print("Soil Moisture: ");
  Serial.println(value);

  delay(1000);
}


20. Water Level Sensor

int water = A0;
int led = 13;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  int value = analogRead(water);

  if (value > 500)
    digitalWrite(led, HIGH);
  else
    digitalWrite(led, LOW);
}


🔹 Buzzer, Motor, Relay
21. Buzzer Alarm

int buzzer = 8;

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);
  delay(500);
}


22. Ultrasonic Distance Alarm

int trig = 9;
int echo = 10;
int buzzer = 8;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  long duration = pulseIn(echo, HIGH);
  int distance = duration * 0.034 / 2;

  if (distance < 20)
    digitalWrite(buzzer, HIGH);
  else
    digitalWrite(buzzer, LOW);
}


23. Servo Motor Control

#include <Servo.h>

Servo myservo;

void setup() {
  myservo.attach(9);
}

void loop() {
  myservo.write(0);
  delay(1000);

  myservo.write(90);
  delay(1000);

  myservo.write(180);
  delay(1000);
}


24. Servo 0°–180°

#include <Servo.h>

Servo motor;

void setup() {
  motor.attach(9);
}

void loop() {
  for (int angle = 0; angle <= 180; angle++) {
    motor.write(angle);
    delay(15);
  }

  for (int angle = 180; angle >= 0; angle--) {
    motor.write(angle);
    delay(15);
  }
}


25. DC Motor ON/OFF

int motor = 8;

void setup() {
  pinMode(motor, OUTPUT);
}

void loop() {
  digitalWrite(motor, HIGH);
  delay(2000);

  digitalWrite(motor, LOW);
  delay(2000);
}


26. DC Motor Speed Control

int motor = 9;

void setup() {
  pinMode(motor, OUTPUT);
}

void loop() {
  analogWrite(motor, 100);
  delay(2000);

  analogWrite(motor, 200);
  delay(2000);

  analogWrite(motor, 255);
  delay(2000);
}


27. Relay ON/OFF

int relay = 8;

void setup() {
  pinMode(relay, OUTPUT);
}

void loop() {
  digitalWrite(relay, HIGH);
  delay(2000);

  digitalWrite(relay, LOW);
  delay(2000);
}


28. LDR + Relay Automatic Light

int ldr = A0;
int relay = 8;

void setup() {
  pinMode(relay, OUTPUT);
}

void loop() {
  int value = analogRead(ldr);

  if (value < 500)
    digitalWrite(relay, HIGH);
  else
    digitalWrite(relay, LOW);
}


29. Temperature + Fan


int sensor = A0;
int fan = 8;

void setup() {
  pinMode(fan, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(sensor);
  float voltage = value * 5.0 / 1023.0;
  float temp = voltage * 100;

  if (temp > 30)
    digitalWrite(fan, HIGH);
  else
    digitalWrite(fan, LOW);

  Serial.println(temp);
  delay(1000);
}


30. Soil Moisture + Water Pump

int soil = A0;
int pump = 8;

void setup() {
  pinMode(pump, OUTPUT);
}

void loop() {
  int value = analogRead(soil);

  if (value > 600)
    digitalWrite(pump, HIGH);
  else
    digitalWrite(pump, LOW);
}


🔹 IoT / NodeMCU Programs
31. ESP8266 Wi-Fi Connect

#include <ESP8266WiFi.h>

const char* ssid = "YOUR_WIFI";
const char* password = "YOUR_PASSWORD";

void setup() {
  Serial.begin(115200);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.println("WiFi Connected");
  Serial.println(WiFi.localIP());
}

void loop() {
}
32. NodeMCU LED Control
int led = D1;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  delay(1000);

  digitalWrite(led, LOW);
  delay(1000);
}


33.LED ON/OFF  via WiFi

#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

const char* ssid = "YOUR_WIFI";
const char* password = "YOUR_PASSWORD";

ESP8266WebServer server(80);

int led = D1;

void setup() {
  pinMode(led, OUTPUT);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED)
    delay(500);

  server.on("/on", []() {
    digitalWrite(led, HIGH);
    server.send(200, "text/plain", "LED ON");
  });

  server.on("/off", []() {
    digitalWrite(led, LOW);
    server.send(200, "text/plain", "LED OFF");
  });

  server.begin();
}

void loop() {
  server.handleClient();
}


34. IoT Temperature Monitoring

#include <ESP8266WiFi.h>
#include <DHT.h>

#define DHTPIN D2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  dht.begin();
}

void loop() {
  float t = dht.readTemperature();

  Serial.print("Temperature: ");
  Serial.println(t);

  delay(2000);
}


35. IoT Humidity Monitoring

#include <DHT.h>

#define DHTPIN D2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  dht.begin();
}

void loop() {
  float h = dht.readHumidity();

  Serial.print("Humidity: ");
  Serial.println(h);

  delay(2000);
}


36. IoT Temperature + Humidity

#include <DHT.h>

#define DHTPIN D2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  dht.begin();
}

void loop() {
  float t = dht.readTemperature();
  float h = dht.readHumidity();

  Serial.print("Temp: ");
  Serial.print(t);
  Serial.print(" C  Humidity: ");
  Serial.print(h);
  Serial.println(" %");

  delay(2000);
}


37. IoT Smart Home – 2 Appliances

int light = D1;
int fan = D2;

void setup() {
  pinMode(light, OUTPUT);
  pinMode(fan, OUTPUT);
}

void loop() {
  digitalWrite(light, HIGH);
  digitalWrite(fan, HIGH);
  delay(3000);

  digitalWrite(light, LOW);
  digitalWrite(fan, LOW);
  delay(3000);
}


38. Automatic Street Light

int ldr = A0;
int light = D1;

void setup() {
  pinMode(light, OUTPUT);
}

void loop() {
  int value = analogRead(ldr);

  if (value < 500)
    digitalWrite(light, HIGH);
  else
    digitalWrite(light, LOW);
}


39. Smart Irrigation

int soil = A0;
int pump = D1;

void setup() {
  pinMode(pump, OUTPUT);
}

void loop() {
  int value = analogRead(soil);

  if (value > 600)
    digitalWrite(pump, HIGH);
  else
    digitalWrite(pump, LOW);
}


40. IoT Security Alarm

int pir = D2;
int buzzer = D1;

void setup() {
  pinMode(pir, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  if (digitalRead(pir) == HIGH)
    digitalWrite(buzzer, HIGH);
  else
    digitalWrite(buzzer, LOW);
}


41. Gas Leakage Alert

int gas = A0;
int buzzer = D1;

void setup() {
  pinMode(buzzer, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  int value = analogRead(gas);

  if (value > 500) {
    digitalWrite(buzzer, HIGH);
    Serial.println("Gas Detected!");
  } else {
    digitalWrite(buzzer, LOW);
    Serial.println("Normal");
  }

  delay(500);
}


42. Fire Detection


int flame = D2;
int buzzer = D1;

void setup() {
  pinMode(flame, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  if (digitalRead(flame) == LOW)
    digitalWrite(buzzer, HIGH);
  else
    digitalWrite(buzzer, LOW);
}

43. Water Level Monitoring

int sensor = A0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  int level = analogRead(sensor);

  Serial.print("Water Level: ");
  Serial.println(level);

  delay(1000);
}


44. Soil Moisture Monitoring


int soil = A0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  int value = analogRead(soil);

  Serial.print("Soil Moisture: ");
  Serial.println(value);

  delay(1000);
}


45. IoT Weather Monitoring


#include <DHT.h>

#define DHTPIN D2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  dht.begin();
}

void loop() {
  float t = dht.readTemperature();
  float h = dht.readHumidity();

  Serial.println("Weather Data");
  Serial.print("Temperature: ");
  Serial.println(t);
  Serial.print("Humidity: ");
  Serial.println(h);

  delay(2000);
}

46. RFID Door Lock 🔹 RFID / Bluetooth

#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10
#define RST_PIN 9

MFRC522 rfid(SS_PIN, RST_PIN);

int lockPin = 7;

void setup() {
  Serial.begin(9600);
  SPI.begin();
  rfid.PCD_Init();

  pinMode(lockPin, OUTPUT);
}

void loop() {
  if (!rfid.PICC_IsNewCardPresent())
    return;

  if (!rfid.PICC_ReadCardSerial())
    return;

  digitalWrite(lockPin, HIGH);
  delay(3000);
  digitalWrite(lockPin, LOW);

  rfid.PICC_HaltA();
}


47. RFID Access Control

#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10
#define RST_PIN 9

MFRC522 rfid(SS_PIN, RST_PIN);

void setup() {
  Serial.begin(9600);
  SPI.begin();
  rfid.PCD_Init();
}

void loop() {
  if (!rfid.PICC_IsNewCardPresent())
    return;

  if (!rfid.PICC_ReadCardSerial())
    return;

  Serial.println("Access Granted");

  rfid.PICC_HaltA();
}


48.LED Control via Bluetooth/..

int led = 13;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    char data = Serial.read();

    if (data == '1')
      digitalWrite(led, HIGH);

    if (data == '0')
      digitalWrite(led, LOW);
  }
}

49.Motor Control using Bluetooth


int motor = 8;

void setup() {
  pinMode(motor, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    char data = Serial.read();

    if (data == '1')
      digitalWrite(motor, HIGH);

    if (data == '0')
      digitalWrite(motor, LOW);
  }
}


50. Smart Home Automation


int light = D1;
int fan = D2;
int buzzer = D3;

void setup() {
  pinMode(light, OUTPUT);
  pinMode(fan, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  digitalWrite(light, HIGH);
  delay(2000);

  digitalWrite(fan, HIGH);
  delay(2000);

  digitalWrite(buzzer, HIGH);
  delay(1000);

  digitalWrite(buzzer, LOW);
  digitalWrite(fan, LOW);
  digitalWrite(light, LOW);

  delay(2000);
}