void setup() {
  tmrpcm.speakerPin = 9;
  Serial.begin(9600);
  gRead = getStringFromEEPROM(guidelineAddress);
  if (!SD.begin(SD_ChipSelectPin)) {
    Serial.println("SD fail");
    return;
  }

  tmrpcm.setVolume(6);

  Wire.begin (9);
  Wire.onReceive (receiveEvent);

  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(buttonPin3, INPUT_PULLUP);
  tmrpcm.play("welcomea.wav");
 while (tmrpcm.isPlaying ());
 if (!gRead.equals("0" )) {
    tmrpcm.play("guidea.wav");
    while(tmrpcm.isPlaying());
    tmrpcm.play("guideaa.wav");
   while(tmrpcm.isPlaying());
  }
  tmrpcm.play("scana.wav");
  while (tmrpcm.isPlaying ());
  
}
