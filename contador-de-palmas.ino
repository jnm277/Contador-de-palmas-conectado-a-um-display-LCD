
#include <LiquidCrystal_I2C.h>
#define pino_microfone 4 // Define o pino do sensor
int palmas = 0; // Quantidade de palmas
unsigned long ultimapalma = 0; // Tempo da última palma
const int delaypalma = 250;  // Tempo para ignorar ruídos

LiquidCrystal_I2C lcd(0x27, 16, 2);

// Função para reiniciar o contador de palmas
void reset(){
  if(palmas>1000){
    palmas = 0;
  }
}

void setup(){
  // inicia o display LCD
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
// Define o pino do sensor como entrada
  pinMode(pino_microfone, INPUT);
// Mostra o texto que não muda no display
  lcd.setCursor(0,0);
  lcd.print("QTD de palmas: ");

}

void loop (){
// chama a função reset
  reset();
  int soundValue = digitalRead(pino_microfone);

  // If para contar as palmas
  if (soundValue == LOW) {
    unsigned long currentTime = millis();

    // Verifica o tempo entre claps para ignorar ruídos
    if (currentTime - ultimapalma > delaypalma) {
      palmas++;
      // Mostra a quantidade de palmas no display
      lcd.setCursor(1, 1);
      lcd.print("   ");
      lcd.setCursor(1, 1);
      lcd.print(palmas);
    }

    ultimapalma = currentTime;
  }

}