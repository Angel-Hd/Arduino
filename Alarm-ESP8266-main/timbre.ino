const byte pinBuzzer = 5;
void setup() {

  for(int i=0;i<6;i++){
    tone(pinBuzzer, 4000);
  delay(1000);
  tone(pinBuzzer, 0);
  delay(500);
  tone(pinBuzzer, 4000);
  delay(1000);
  tone(pinBuzzer, 0);
  delay(2000);
    }

}

void loop() {
  
}
