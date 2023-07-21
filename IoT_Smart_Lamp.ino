#include <CayenneMQTTESP8266.h>
#include <ESP8266WiFi.h>
#include <DHT.h>
#include <Adafruit_NeoPixel.h>

#ifdef __AVR__
#include <avr/power.h>
#endif

#define DHTPIN D4
#define DHTTYPE DHT11
#define PIN D3
#define NUMPIXELS 12
#define BUZZER D7

DHT dht(DHTPIN, DHTTYPE);
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

char ssid[] = "Stratford Guest";
char password[] = "";
char username[] = "38fe4c00-1446-11ee-9ab8-d511caccfe8c";
char mqtt_password[] = "f4515ae60ab00cf82fda2b96f4744f3112261029";
char client_id[] = "56f30f20-1446-11ee-8485-5b7d3ef089d0";

const int LDRpin = A0;
const int PIRpin = D0;
int LDRval = 0;
int PIRval = 0;
float temp;
float hum;
int r, g, b;
int Cmode;
int TURN;
int SAFE_MODE;



void setup(){
  pinMode(LDRpin, INPUT);
  pinMode(PIRpin, INPUT);
  pinMode(BUZZER, OUTPUT);

  Serial.begin(9600);

  dht.begin();
  Cayenne.begin(username, mqtt_password, client_id, ssid, password);
  pixels.begin();
  Serial.println("FIRE FLY BOOTED");
}

void loop(){
  Cayenne.loop();
  if (Cmode == 1){
    burglarMode();
  }
  else if (Cmode == 0) {
    setLight();
  }

  hum = dht.readHumidity();
  temp = dht.readTemperature();

  Serial.print("humidity = ");
  Serial.println(hum);
  Serial.print("temp = ");
  Serial.println(temp); 

  LDRval = analogRead(LDRpin);
  PIRval = digitalRead(PIRpin);
 
  Cayenne.virtualWrite(0, temp);
  Cayenne.virtualWrite(1, hum);
  Cayenne.virtualWrite(2, LDRval);
  Cayenne.virtualWrite(3, PIRval);

  if (hum > 62 || hum < 40){
    digitalWrite(BUZZER, HIGH);
  }

  if (temp > 29 || temp < 18){
    digitalWrite(BUZZER, HIGH);
  }

  if (SAFE_MODE == 1){
    digitalWrite(BUZZER, LOW);
  }

}

void setColor(int red, int green, int blue){
  for (int i = 0; i < NUMPIXELS; i++){
    if (red == 0 && green == 0 && b == 0){
      red = 100;
      green = 100;
      blue = 100; 
    }
    pixels.setPixelColor(i, pixels.Color(red, green, blue));
    pixels.show();
  }
}

void setLight(){
  if (TURN == 1){
    manual();
  }
  else{
    Serial.println("PIR and LDR");
    Serial.println(PIRval);
    Serial.println(LDRval);

    if (PIRval > 0){
      setColor(r, g, b);
    }
    else if (LDRval < 320){
      setColor(r, g, b);
    }
    else if (PIRval < 1 && LDRval > 320){ 
      for (int i = 0; i < NUMPIXELS; i++){
        pixels.setPixelColor(i, pixels.Color(0, 0, 0));
        pixels.show();
      }
    } 
  }
}

void burglarMode(){
  if (SAFE_MODE == 1){
    digitalWrite(BUZZER, LOW);
  }

  if (PIRval > 0){
    digitalWrite(BUZZER, HIGH);
    Serial.println("burglar on");
  }
}

void manual(){
  setColor(r, g, b);
}

CAYENNE_IN(4){
  r = getValue.asInt();
}

CAYENNE_IN(5){
  g = getValue.asInt();
}

CAYENNE_IN(6){
  b = getValue.asInt();
}

CAYENNE_IN(7){
  Cmode = getValue.asInt(); //Security mode
}

CAYENNE_IN(8){
  TURN = getValue.asInt();
  Serial.print("turn : ");
  Serial.println(TURN);
}

CAYENNE_IN(9){
  SAFE_MODE = getValue.asInt();
}