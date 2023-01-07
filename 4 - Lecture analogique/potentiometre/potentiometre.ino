#define PIN_POT 36

/* Ce programme lit la valeur de l'entree analogique et l'ecrit sur le port serie */

void setup(void)
{
  Serial.begin(115200);
  pinMode(PIN_POT, INPUT);
}

void loop(void)
{
  int valeur; 

  valeur = analogRead(PIN_POT);

  Serial.println(valeur);

  delay(100);
}
