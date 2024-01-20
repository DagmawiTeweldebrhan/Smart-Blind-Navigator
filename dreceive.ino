void receiveEvent(String c) {
  char val = Wire.read ();

  if (val != '\n') {
    data += val;
  } else {
    if (start1) {
      start = data;
      Serial.println (start);
      start1 = false;
    }
    Serial.println (data);
    data = "";
  }
}
String getStringFromEEPROM(int address) {
  String data;
  char character;
  int i = 0;

  while ((character = EEPROM.read(address + i)) != '\0') {
    data += character;
    i++;
  }

  return data;
}

void putStringToEEPROM(int address, const String& data) {
  int length = data.length();

  for (int i = 0; i < length; i++) {
    EEPROM.write(address + i, data[i]);
  }

  EEPROM.write(address + length, '\0'); 
}
