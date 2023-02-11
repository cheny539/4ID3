//Libraries
#include "EBYTE.h"
#include <WiFi.h>
#include <HTTPClient.h>
#include <HardwareSerial.h>

//Pin definitions
#define PIN_RX 16  
#define PIN_TX 17 
#define PIN_M0 27  
#define PIN_M1 26 
#define PIN_AX 25   

//Transceiver setup
#define TRANSCEIVER_CHANNEL 11
EBYTE Transceiver(&Serial2, PIN_M0, PIN_M1, PIN_AX);

//WiFi login credentials
const char* ssid = "GroupRB";
const char* password = "12345678";

//HTTP server URL
const char* serverName = "http://192.168.137.38:3000/mqtt";
//const char* serverName = "http://192.168.137.38:3000/database";
