// Garduino IR Control
// IF YOU USE IR RECEIVER & TRANSMITTER IN THE PROJECT, INCLUDE THESE CODES TO THE PROJECT
// PROJENİZDE IR ALICI VE VERİCİ KULLANACAKSANIZ, BU KODLARI PROJENİZE EKLEYİN
// PLEASE CHECK THE REPO "Arduino-IRremote" on Github (https://github.com/z3t0/Arduino-IRremote)
// LÜTFEN GITHUB'TA "Arduino-IRremote" REPOSUNU KONTROL EDİNİZ (https://github.com/z3t0/Arduino-IRremote)

#include <boarddefs.h> // IR library
#include <ir_Lego_PF_BitStreamEncoder.h> // IR library
#include <IRremote.h> // IR library
#include <IRremoteInt.h> // IR library

int RECV_PIN = 13;
IRrecv irrecv(RECV_PIN);
decode_results results;

// BUTTONS' HEX CODES
#define BUTON1 0xFF30CF
#define BUTON2 0xFF18E7
#define BUTON3 0xFF7A85

void setup() {

 irrecv.enableIRIn();

}

void loop() {

if (irrecv.decode(&results))
  {
    if (results.value == BUTON1)
    {
      Serial.println("1. Kademe Sulama Yapiliyor... / Step 1 Watering...");
      /* motor.write(60);
      delay(1000);
      motor.write(0);
      */
    }
    if (results.value == BUTON2)
    {
      Serial.println("2. Kademe Sulama Yapiliyor... / Step 2 Watering...");
      /* motor.write(180);
      delay(1500);
      motor.write(0);
      */
    }
    if (results.value == BUTON3)
    {
      Serial.println("3. Kademe Sulama Yapiliyor... / Step 3 Watering...");
      /* motor.write(270);
      delay(2000);
      motor.write(0);
      */
    }
    irrecv.resume();
  }
  }
