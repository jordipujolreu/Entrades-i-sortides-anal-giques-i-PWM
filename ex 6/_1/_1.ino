/******************************************************************************
**                                                                           **
**                              Music player                                 **
**                                                                           **
**           c=DO, d=RE, e=MI, f=FA, g=SOL, a=LA, b=SI, C=DO' D=RE'          **
**                                                                           **
*******************************************************************************/
//******* Includes ************************************************************

//******* Variables ***********************************************************
// pin for speaker
const int speakerPin = 9;
int tempo = 300;

//Melody 1
//int length = 15; // the number of notes
//char notes[] = "ccggaagffeeddc "; // a space represents a rest
//int beats[] = { 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 4 }; // time notes

//Melody 2 himne del Barça
//int length = 21; 
//char notes[] = "egC egC egCDCb abCabg";
//int beats[]={3, 2, 2, 1, 3, 2, 2, 1, 2, 1, 2, 2, 1, 3, 1, 2, 1, 1, 1, 1, 3, 1};

//La comunidad
int length = 32;
char notes[] = "cdegdecegaCbgefedcdegdecegagdedc";
int beats[] = {1, 1, 1, 2, 1, 1, 3, 1, 1, 2, 1, 2, 1, 2, 1, 1, 2, 1, 1, 1, 2, 1, 1, 3, 1 ,1 ,2 ,1 ,2 ,1 ,3 ,3 };

//OH
//int length = 46 ;
//char notes[] = "ecdecfeeddCbCgfCbCgfCbbCgcb CbCgfCbCgfCbbCgcCb";
//int beats[] = { 1 , 1 , 3 ,1 , 1 , 3 , 1 , 3 , 1 , 3 ,   1  , 1 , 2  , 2 , 2 , 1 , 1 , 2 , 2 , 2 , 1 , 1 , 1 , 2 , 2 , 2 , 4 ,1  ,1  , 1 , 2  , 2 , 2 , 1 , 1 , 2 , 2 , 2 , 1 , 1 , 1 , 2 , 2 , 2 , 3 , 3  };

//Melody 3 jingle bells
//int length = 51;
//char notes[] = "eeeeeeegcdefffffeeeeeddedgeeeeeeegcdefffffeeeeggfdc";
//int beats[] = { 2, 2, 4, 2, 2, 4, 2, 2, 3, 1, 8, 2, 2, 3, 1, 2, 2, 2, 1, 1, 2, 2, 2, 2, 4, 4, 2, 2, 4, 2, 2, 4, 2, 2, 3, 1, 8, 2, 2, 2, 2, 2, 2, 2, 1, 1, 2, 2, 2, 2, 8 };

//Melody 4 oh! sussana
//int length = 56;
//char notes[] = "cdeggagecdeedcdcdeggagecdeeddc ffaaaggecdcdeggagecdeeddc";
//int beats [] = {1, 1, 2, 2, 3, 1, 2, 2, 3, 1, 2, 2, 2, 2, 6, 1, 1, 2, 2, 3, 1, 2, 2, 3, 1, 2, 2, 2, 2, 6, 2, 4, 4, 2, 4, 2, 2, 2, 2, 2, 6, 1, 1, 2, 2, 3, 1, 2, 2, 3, 1, 2, 2, 2, 6 };

//****** Setup ****************************************************************
void setup() {
  // make the pin output
  pinMode(speakerPin, OUTPUT);
}

//***** Loop *****************************************************************
void loop() {
    for (int i = 0; i < length; i++) {
    if (notes[i] == ' ') {
      delay(beats[i] * tempo);
    } else {
      playNote(notes[i], beats[i] * tempo);
    }
    // pause between notes
    delay(tempo / 2); 
  }
}
//****** Funcions *************************************************************
void playTone(int tone, int duration) {
  for (long i = 0; i < duration * 1000L; i += tone * 2) {
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(tone);
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(tone);
  }
}

void playNote(char note, int duration) {
  char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' , 'D'};
  int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014, 956, 840};

  // play the tone corresponding to the note name
  for (int i = 0; i < 9; i++) {
    if (names[i] == note) {
      playTone(tones[i], duration);
    }
  }
}

