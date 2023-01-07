void setup(void)
{
  /* La vitesse 115200 est une vitesse standard */
  Serial.begin(115200); 
}

void loop(void)
{
  /* Envoie un message toutes les secondes */
  Serial.println("Bonjour");
  delay(1000);
}
