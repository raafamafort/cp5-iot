#include <SPI.h>
#include <MFRC522.h> 

#define RST_PIN         9         
#define SS_PIN          10       

#define LED 4 

MFRC522 mfrc522(SS_PIN, RST_PIN); 

bool cardPresent = false;

void setup() {
  pinMode(LED, OUTPUT);

  Serial.begin(9600);   
  while (!Serial);    
  SPI.begin();     
  mfrc522.PCD_Init(); 
  delay(4);       
  mfrc522.PCD_DumpVersionToSerial(); 
  Serial.println(F("Scan PICC to see UID, SAK, type, and data blocks..."));
}

void loop() {

  if ( ! mfrc522.PICC_IsNewCardPresent()) {
    if (cardPresent) {
      cardPresent = false;
      digitalWrite(LED, LOW); 
    }
    return;
  }

  if ( ! mfrc522.PICC_ReadCardSerial()) {
    if (!cardPresent) {
        cardPresent = true;
        digitalWrite(LED, HIGH); 
      }
  }

  mfrc522.PICC_DumpToSerial(&(mfrc522.uid));
}
