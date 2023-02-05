/* Arduino IDE 1.8.15 */
/* Ce programme utilise le multi function shield avec un arduino uno */

/* https://andrologiciels.wordpress.com/arduino/carte-uno/multi-function-shield/ */

/* Pour l'afficheur */
#include <MultiFunctionShield.h>

int valeur = 0;
MultiFunctionShield MFS;

void setup()
{
  Serial.begin(115200);
  /* Demarre l'afficheur */
  MFS.begin();
  /* Init les pins pour le shield */
  initShield();
}

void loop() 
{
  /* Affiche la valeur lue sur le potentiometre */
  MFS.Display(readPOT());
  Serial.println(readPOT());

  /* Allume les leds en fonction des boutons */
  setLED1(readBTN1());
  setLED2(readBTN2());
  setLED3(readBTN3());
  setLED4(readBTN1());

  /* Fait sonner le buzzer si le bouton 3 est appuye */
  setBUZZER(readBTN3());
}
