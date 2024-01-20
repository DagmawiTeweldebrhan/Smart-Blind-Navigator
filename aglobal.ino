void (*reset)(void)=0;
#include "SD.h"
#define SD_ChipSelectPin 10
#include "TMRpcm.h"
#include "SPI.h"
#include <EEPROM.h>
TMRpcm tmrpcm;
File hund;
#include <Wire.h>

String data = "";
String start = "";

int select;

int guidelineAddress = 0;
String gRead = "";

const int buttonPin1 = 4;
const int buttonPin2 = 5;
const int buttonPin3 = 6;

bool adu = false;
bool mech = false;
bool comp = false;
bool ele = false;
bool op = false;
bool off = false;
bool rece = false;
bool store = false;
bool ex = false;
bool start1 = true;

bool amech = false;
bool camech = false;

bool aele = false;
bool caele = false;

bool acomp = false;
bool cacomp = false;

bool aop = false;
bool caop = false;

bool aoff = false;
bool caoff = false;

bool arece = false;
bool carece = false;

bool astore = false;
bool castore = false;

int lang = 1;

int selections = 0;

bool buttonState1 = HIGH;
bool lastButtonState1 = HIGH;
bool buttonState2 = HIGH;
bool lastButtonState2 = HIGH;
bool buttonState3 = HIGH;
bool lastButtonState3 = HIGH;
