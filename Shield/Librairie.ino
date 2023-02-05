#define BTN_1 A1
#define BTN_2 A2
#define BTN_3 A3

#define LED1  13
#define LED2  12
#define LED3  11
#define LED4  10

#define POT   A0

#define BUZZER 3

void initShield(void)
{
  pinMode(BTN_1, INPUT);
  pinMode(BTN_2, INPUT);
  pinMode(BTN_3, INPUT);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);

  pinMode(POT, INPUT);

  pinMode(BUZZER, OUTPUT);
}

bool readBTN1(void)
{
  return(!digitalRead(BTN_1));
}

bool readBTN2(void)
{
  return(!digitalRead(BTN_2));
}

bool readBTN3(void)
{
  return(!digitalRead(BTN_3));
}

void setLED1(bool state)
{
  digitalWrite(LED1, !state);
}

void setLED2(bool state)
{
  digitalWrite(LED2, !state);
}

void setLED3(bool state)
{
  digitalWrite(LED3, !state);
}

void setLED4(bool state)
{
  digitalWrite(LED4, !state);
}

int readPOT(void)
{
  /* 0 - 1023 */
  return analogRead(POT);
}

void setBUZZER(bool state)
{
  digitalWrite(BUZZER, !state);
}
