void loop() {

  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);

  if (buttonState1 == LOW && lastButtonState1 == HIGH && selections < 9) {
    delay(50);
    adu = true;
    mech = true;
    comp = true;
    ele = true;
    op = true;
    off = true;
    rece = true;
    store = true;
    ex = true;
    selections++;
  }

  if (buttonState1 == HIGH && lastButtonState1 == LOW) {
    delay(50);
  }

  if (buttonState2 == LOW && lastButtonState2 == HIGH && selections > 1) {
    delay(50);
    adu = true;
    mech = true;
    comp = true;
    ele = true;
    op = true;
    off = true;
    rece = true;
    store = true;
    ex = true;
    selections--;
  }

  if (buttonState2 == HIGH && lastButtonState2 == LOW) {
    delay(50);
  }

  if (buttonState3 == LOW && lastButtonState3 == HIGH) {
    delay(50);
    sel
    ect = selections;
    Serial.print(select);
  }
  if (buttonState3 == HIGH && lastButtonState3 == LOW) {
    delay(50);
  }
  lastButtonState1 = buttonState1;
  l astButtonState2 = buttonState2;
  lastButtonState3 = buttonState3;

  if (start.equals("bd517782")) {
    tmrpcm.play("daudia.wav");
    delay(2500);
    tmrpcm.play("wherea.wav");
    start = "";
    amech = true;
    aele = true;
    acomp = true;
    aop = true;
    aoff = true;
    arece = true;
    astore = true;
  }
  // --------------------------------------------------selection
  if (selections == 1 && adu) {
    tmrpcm.play("saudia.wav");
    adu = false;
  }
  if (selections == 2 && ele) {
    tmrpcm.play("sela.wav");
    ele = false;
  }
  if (selections == 3 && mech) {
    tmrpcm.play("smecha.wav");
    mech = false;
  }
  if (selections == 4 && comp) {
    tmrpcm.play("scompa.wav");
    comp = false;
  }
  if (selections == 5 && op) {
    tmrpcm.play("sopa.wav");
    op = false;
  }
  if (selections == 6 && off) {
    tmrpcm.play("soffa.wav");
    off = false;
  }
  if (selections == 7 && rece) {
    tmrpcm.play("srecea.wav");
    rece = false;
  }
  if (selections == 8 && store) {
    tmrpcm.play("sstorea.wav");
    store = false;
  }
  //-------------------------------------to mech
  if (amech && select == 3) {
    tmrpcm.play("selecta.wav");
    delay(2500);
    tmrpcm.play("starta.wav");
    delay(2200);
    tmrpcm.play("goa.wav");
    delay(1700);
    tmrpcm.play("13a.wav");
    delay(9560);
    tmrpcm.play("righta.wav");
    delay(1500);
    tmrpcm.play("1a.wav");
    delay(2000);
    tmrpcm.play("scana.wav");
    amech = false;
    camech = true;
  }
  if (camech && data.equals("d2719920")) {
    tmrpcm.play("desta.wav");
    delay(2000);
    tmrpcm.play("dmecha.wav");
    camech = false;
    reset ();
  }
  //-------------------------------to ele
  if (aele && select == 2) {
    tmrpcm.play("selecta.wav");
    delay(2500);
    tmrpcm.play("starta.wav");
    delay(2200);
    tmrpcm.play("goa.wav");
    delay(1700);
    tmrpcm.play("13a.wav");
    delay(9560);
    tmrpcm.play("lefta.wav");
    delay(1500);
    tmrpcm.play("1a.wav");
    delay(2000);
    tmrpcm.play("scana.wav");
    aele = false;
    caele = true;
    }
  if (caele && data.equals("936deac7")) {
    tmrpcm.play("desta.wav");
    delay(2000);
    tmrpcm.play("dela.wav");
    caele = false;
    reset ();
  }
  //-------------------------------------to comp
  if (acomp && select == 4) {
    tmrpcm.play("selecta.wav");
    delay(2500);
    tmrpcm.play("starta.wav");
    delay(2200);
    tmrpcm.play("goa.wav");
    delay(1700);
    tmrpcm.play("3a.wav");
    delay(2221);
    tmrpcm.play("righta.wav");
    delay(1500);
    tmrpcm.play("1a.wav");
    delay(2000);
    tmrpcm.play("scana.wav");
    acomp = false;
    cacomp = true;
  }
  if (cacomp && data.equals("5d33c882")) {
    tmrpcm.play("desta.wav");
    delay(2000);
    tmrpcm.play("dela.wav");
    cacomp = false;
    reset ();
  }
  //-------------------------------------to op
  if (aop && select == 5) {
    tmrpcm.play("selecta.wav");
    delay(2500);
    tmrpcm.play("starta.wav");
    delay(2200);
    tmrpcm.play("goa.wav");
    delay(1700);
    tmrpcm.play("3a.wav");
    delay(2221);
    tmrpcm.play("lefta.wav");
    delay(1500);
    tmrpcm.play("1a.wav");
    delay(2000);
    tmrpcm.play("scan.wav");
    aop = false;
    caop = true;
  }
  if (caop && data.equals("e3293b39")) {
    tmrpcm.play("desta.wav");
    delay(2000);
    tmrpcm.play("dopa.wav");
    caop = false;
    reset ();
  }
  //-------------------------------------to off
  if (aoff && select == 6) {
    tmrpcm.play("selecta.wav");
    delay(2500);
    tmrpcm.play("starta.wav");
    delay(2200);
    tmrpcm.play("goa.wav");
    delay(1700);
    tmrpcm.play("23a.wav");
    delay(16000);
    tmrpcm.play("lefta.wav");
    delay(1500);
    tmrpcm.play("goa.wav");
    delay(1700);
    tmrpcm.play("3a.wav");
    delay(3000);
    tmrpcm.play("scana.wav");
    aoff = false;
    caoff = true;
  }
  if (caoff && data.equals("7d18a182")) {
    tmrpcm.play("desta.wav");
    delay(2000);
    tmrpcm.play("doffa.wav");
    caoff = false;
    reset ();
  }
  //-------------------------------------to rece
  if (arece && select == 7) {
    tmrpcm.play("selecta.wav");
    delay(2500);
    tmrpcm.play("starta.wav");
    delay(2200);
    tmrpcm.play("goa.wav");
    delay(1700);
    tmrpcm.play("23a.wav");
    delay(16000);
    tmrpcm.play("lefta.wav");
    delay(1500);
    tmrpcm.play("scana.wav");
    arece = false;
    carece = true;
  }
  if (carece && data.equals("83e7962d")) {
    tmrpcm.play("desta.wav");
    delay(2000);
    tmrpcm.play("daudia.wav");
    carece = false;
    reset ();
  }
  //-------------------------------------to store
  if (astore && select == 8) {
    tmrpcm.play("selecta.wav");
    delay(2500);
    tmrpcm.play("starta.wav");
    delay(2200);
    tmrpcm.play("goa.wav");
    delay(1700);
    tmrpcm.play("23a.wav");
    delay(16000);
    tmrpcm.play("righta.wav");
    delay(1500);
    tmrpcm.play("scana.wav");
    astore = false;
    castore = true;
  }
  if (castore && data.equals("4defd082")) {
    tmrpcm.play("desta.wav");
    delay(2000);
    tmrpcm.play("daudia.wav");
    castore = false;
    reset ();
  }
}
