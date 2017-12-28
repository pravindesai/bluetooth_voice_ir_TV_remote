#include <IRremote.h>     // Download & include library from https://github.com/pravindesai/Arduino-IRremote
#include <SoftwareSerial.h>

//  * An IR LED must be connected to Arduino PWM pin 3.
  int khz = 38; // 38kHz carrier frequency for the NEC protocol

IRsend irsend;
SoftwareSerial BT(11, 10); //TX, RX respetively
String voice;

unsigned int x = 8950;    // x is used in array instead of 8950 to save memory /*/*/*/*/

            /*
             * Decode your TV remotes signals using code example ' IRrecvDumpV2 ' in library https://github.com/pravindesai/Arduino-IRremote
             * And replace following Arrays with your Signals_Array 
             */

  int zero(){
    unsigned int irSignal0[] = {x,4400, 600,550, 600,550, 550,550, 550,1700, 550,600, 550,1700, 550,550,
    550,600, 550,1700, 550,1700, 500,1750, 500,600, 550,1700, 550,600, 500,1700, 550,1700, 550,600, 500,600,
    550,1700, 550,600, 500,1750, 500,600, 550,600, 500,600, 550,1700, 550,1700, 550,600, 500,1700, 550,600, 
    550,1700, 550,1700, 500,1700, 550}; //AnalysIR Batch Export (IRremote) - RAW
  
  irsend.sendRaw(irSignal0, sizeof(irSignal0) / sizeof(irSignal0[0]), khz);
    }

  int one(){
    unsigned int irSignal1[] = {x,4400, 550,550, 600,550, 550,550, 600,1650, 600,550, 550,1700, 550,550, 600,550, 550,1700, 550,1700,
    550,1700, 550,550, 550,1700, 550,600, 550,1700, 500,1750, 500,600, 550,1700, 550,600, 500,1700, 550,
    1700, 550,600, 550,550, 550,600, 550,1700, 550,550, 550,1700, 550,600, 550,550, 550,
    1700, 550,1700, 550,1700, 550}; //AnalysIR Batch Export (IRremote) - RAW
  
  irsend.sendRaw(irSignal1, sizeof(irSignal1) / sizeof(irSignal1[0]), khz);
    }

  int two(){
    unsigned int irSignal2[] = {x,4400, 600,550, 550,550, 600,550, 600,1650, 550,550, 600,1650, 550,600, 550,600, 500,1750, 500,1700, 550,1700,
    550,600, 550,1700, 500,600, 550,1700, 550,1700, 550,1700, 500,600, 550,600, 550,600, 500,1700, 550,600, 550,600, 500,600, 550,600, 500,1750,
    500,1700, 550,1700, 550,600, 500,1750, 500,1700, 550,1700, 550}; //AnalysIR Batch Export (IRremote) - RAW
  
  irsend.sendRaw(irSignal2, sizeof(irSignal2) / sizeof(irSignal2[0]), khz);
    }

  int three(){
    unsigned int irSignal3[] = {x,4400, 550,600, 550,550, 550,600, 550,1700, 550,550, 550,1700, 550,600, 550,600, 500,1700, 550,1700, 550,
    1700, 550,600, 500,1700, 550,600, 550,1700, 550,1700, 500,1750, 500,600, 550,600, 500,1750, 500,600, 550,600, 500,600, 550,600, 550,600, 
    500,1700, 550,1700, 550,600, 500,1750, 500,1700, 550,1700, 550,1700, 550}; //AnalysIR Batch Export (IRremote) - RAW
  
  irsend.sendRaw(irSignal3, sizeof(irSignal3) / sizeof(irSignal3[0]), khz);
    }

  int four(){
    unsigned int irSignal4[] = {x,4400, 600,550, 550,600, 550,550, 600,1650, 600,550, 550,1650, 600,550, 550,600, 550,1700, 550,1700, 500,
    1750, 500,600, 550,1700, 550,600, 500,1700, 550,1700, 550,1700, 550,1700, 550,550, 550,1700, 550,1700, 550,600, 500,600, 550,600, 550,550,
    550,600, 550,1700, 550,550, 550,600, 550,1700, 550,1700, 500,1700, 550}; //AnalysIR Batch Export (IRremote) - RAW
  
  irsend.sendRaw(irSignal4, sizeof(irSignal4) / sizeof(irSignal4[0]), khz);
    }

  int five(){
    unsigned int irSignal5[] = {x,4400, 600,550, 550,550, 600,550, 550,1700, 550,550, 550,1700, 550,600, 550,600, 500,1700, 550,1700, 550,
    1700, 550,600, 500,1750, 500,600, 550,1700, 550,1700, 500,600, 550,1700, 550,600, 500,600, 550,1700, 550,600, 500,600, 550,600, 550,1700,
    500,600, 550,1700, 550,1700, 550,600, 500,1700, 550,1700, 550,1700, 550}; //AnalysIR Batch Export (IRremote) - RAW
  
  irsend.sendRaw(irSignal5, sizeof(irSignal5) / sizeof(irSignal5[0]), khz);
    }

  int six(){
    unsigned int irSignal6[] = {x,4400, 600,550, 600,550, 550,550, 600,1650, 600,550, 550,1650, 600,550, 550,600, 550,1700, 550,1700, 500,
    1750, 500,600, 550,1700, 550,600, 500,1700, 550,1700, 550,600, 500,1750, 500,600, 550,1700, 550,600, 500,600, 550,600, 500,600, 550,1700,
    550,600, 550,1700, 500,600, 550,1700, 550,1700, 550,1700, 500,1750, 500}; //AnalysIR Batch Export (IRremote) - RAW
  
  irsend.sendRaw(irSignal6, sizeof(irSignal6) / sizeof(irSignal6[0]), khz);
    }
    
  int seven(){
    unsigned int irSignal7[] = {x,4450, 550,550, 600,550, 600,550, 550,1650, 600,550, 550,1700, 550,600, 550,600, 500,1700, 550,1700, 550,
    1700, 550,600, 500,1700, 550,600, 550,1700, 550,1700, 500,600, 550,600, 550,1700, 500,1750, 500,1700, 550,600, 550,550, 550,600, 550,1700,
    550,1700, 500,600, 550,600, 550,550, 550,1700, 550,1700, 550,1700, 550}; //AnalysIR Batch Export (IRremote) - RAW
  
  irsend.sendRaw(irSignal7, sizeof(irSignal7) / sizeof(irSignal7[0]), khz);
    }

  int eight(){
    unsigned int irSignal8[] = {x,4400, 600,550, 550,550, 600,550, 550,1700, 550,550, 600,1650, 550,600, 550,600, 550,1650, 550,1700, 550,
    1700, 550,600, 550,1700, 500,600, 550,1700, 550,1700, 550,1700, 500,1750, 500,600, 550,600, 500,1750, 500,600, 550,600, 500,600, 550,600, 
    550,600, 500,1700, 550,1700, 550,600, 500,1750, 500,1700, 550,1700, 550}; //AnalysIR Batch Export (IRremote) - RAW
  
  irsend.sendRaw(irSignal8, sizeof(irSignal8) / sizeof(irSignal8[0]), khz);
    }

  int nine(){
    unsigned int irSignal9[] = {x,4400, 600,500, 600,550, 600,550, 550,1650, 600,550, 550,1700, 550,550, 600,550, 550,1700, 550,1700, 550,
    1700, 550,600, 500,1700, 550,600, 550,1700, 550,1700, 500,1700, 550,1700, 550,600, 550,1700, 500,600, 550,600, 550,550, 550,600, 550,600,
    500,600, 550,1700, 550,600, 500,1700, 550,1700, 550,1700, 550,1700, 550}; //AnalysIR Batch Export (IRremote) - RAW
  
  irsend.sendRaw(irSignal9, sizeof(irSignal9) / sizeof(irSignal9[0]), khz);
    }

void setup() {
BT.begin(9600);
 Serial.begin(9600);
}

void loop() {
  while (BT.available()){  //Check if there is an available byte to read
  delay(10); //Delay added to make thing stable 
  char c = BT.read(); //Conduct a serial read
  if (c == '#') {break;} //Exit the loop when the # is detected after the word
  voice += c; //Shorthand for voice = voice + c
  }  
  if (voice.length() > 0) {
    
    Serial.println(voice); 

for(int i=1;i<sizeof(voice);i++)
{ 
  Serial.println(voice[i]);
  switch(voice[i])
    {
      case'0': zero();  break;
      case'1': one();   break;
      case'2': two();   break;
      case'3': three(); break;
      case'4': four();  break;
      case'5': five();  break;
      case'6': six();   break;
      case'7': seven(); break;
      case'8': eight(); break;
      case'9': nine();  break;
      
      }
  delay(100);
}
 
voice="";
}
}












