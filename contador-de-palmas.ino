
#include <LiquidCrystal_I2C.h>
#define pino_microfone 4
int palmas = 0;
unsigned long ultimapalma = 0;
const int delaypalma = 250;  // Tempo para ignorar ruídos

LiquidCrystal_I2C lcd(0x27, 16, 2);


void reset(){
  if(palmas>1000){
    palmas = 0;
  }
}

void setup(){
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();

  pinMode(pino_microfone, INPUT);

  lcd.setCursor(0,0);
  lcd.print("QTD de palmas: ");

}

void loop (){
  int soundValue = digitalRead(pino_microfone);

  reset();

  Serial.println(soundValue);

  if (soundValue == LOW) {
    unsigned long currentTime = millis();

    // Verifica o tempo entre claps para ignorar ruídos
    if (currentTime - ultimapalma > delaypalma) {
      palmas++;
      

      lcd.setCursor(1, 1);
      lcd.print("   ");
      lcd.setCursor(1, 1);
      lcd.print(palmas);
    }

    ultimapalma = currentTime;
  }

}