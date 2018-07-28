//Note Definitions
#define MA3 233 //Hz
#define MA4 466 //Hz
#define G3 208 //Hz
#define G4 415 //Hz
#define F3 185 //Hz
#define F4 370 //Hz
#define D3 156 //Hz
#define D4 311 //Hz

//Arbitrary pin numbers, must change later
#define switchPin 2
#define speakerPin 4

boolean tripped = false;
boolean switchState;

void setup(){
    pinMode(switchPin, INPUT_PULLUP);
    pinMode(speakerPin, OUTPUT);
    
}

void loop(){
    switchState = digitalRead(switchPin);
    
    if(switchState) {
        delay(50);
        
        if(digitalRead(switchPin)) {
            completionSong();
            tripped = true;
        }
    }

    if(tripped) {
      completionSong();
    }
}

void completionSong(){
  tone(speakerPin, MA3);
  delay(315);
  noTone(speakerPin);
  delay(945);
  tone(speakerPin, 3);
  delay(315); 
  noTone(speakerPin);
  delay(945);
  tone(speakerPin, MA4);
  delay(315);
  noTone(speakerPin);
  delay(315);
  tone(speakerPin, MA4);
  delay(315);
  noTone(speakerPin);
  delay(315);
  tone(speakerPin, MA4);
  delay(315);
  noTone(speakerPin);
  delay(315);
  tone(speakerPin, MA4);
  delay(315);
  noTone(speakerPin);
  delay(315);

  tone(speakerPin, G3);
  delay(315);
  noTone(speakerPin);
  delay(945);
  tone(speakerPin, G3);
  delay(315); 
  noTone(speakerPin);
  delay(945);
  tone(speakerPin, G4);
  delay(315);
  noTone(speakerPin);
  delay(315);
  tone(speakerPin, G4);
  delay(315);
  noTone(speakerPin);
  delay(315);
  tone(speakerPin, G4);
  delay(315);
  noTone(speakerPin);
  delay(315);
  tone(speakerPin, G4);
  delay(315);
  noTone(speakerPin);
  delay(315);

  tone(speakerPin, F3);
  delay(315);
  noTone(speakerPin);
  delay(945);
  tone(speakerPin, F3);
  delay(315); 
  noTone(speakerPin);
  delay(945);
  tone(speakerPin, F4);
  delay(315);
  noTone(speakerPin);
  delay(315);
  tone(speakerPin, F4);
  delay(315);
  noTone(speakerPin);
  delay(315);
  tone(speakerPin, F4);
  delay(315);
  noTone(speakerPin);
  delay(315);
  tone(speakerPin, F4);
  delay(315);
  noTone(speakerPin);
  delay(315);

  tone(speakerPin, D3);
  delay(315);
  noTone(speakerPin);
  delay(945);
  tone(speakerPin, D3);
  delay(315); 
  noTone(speakerPin);
  delay(945);
  tone(speakerPin, D4);
  delay(315);
  noTone(speakerPin);
  delay(315);
  tone(speakerPin, D4);
  delay(315);
  noTone(speakerPin);
  delay(315);
  tone(speakerPin, D4);
  delay(315);
  noTone(speakerPin);
  delay(315);
  tone(speakerPin, D4);
  delay(315);
  noTone(speakerPin);
  delay(315);
  noTone(speakerPin);
}
