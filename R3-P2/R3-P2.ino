/*******************************************************************************
**                                                                            **
**                           TITOL: R3 - P2                                   **
**                                                                            **
**                                                                            **
**  NOM: CARLOS RODRIGUEZ                                   DATA: 16/03/2017  **
*******************************************************************************/
//**********************************INCLUDE*************************************

//*********************************VARIABLES************************************
const int led1 = 5;
const int led2 = 6;
const int led3 = 7;
const int led4 = 8;
const int led5 = 9;
const int led6 = 10;
const int led7 = 11;
const int led8 = 12;
const int pot = A0;

int velocitat = 50;
int valPot = 0;
//***********************************SETUP**************************************
void setup()
{ 
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
}
//************************************LOOP**************************************
void loop()
{
  valPot = analogRead(pot);
  velocitat = valPot;

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);

  delay(velocitat);

  digitalWrite(led1, HIGH);

  delay(velocitat);

  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);

  delay(velocitat);

  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);

  delay(velocitat);

  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);

  delay(velocitat);

  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);

  delay(velocitat);

  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);

  delay(velocitat);

  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);

  delay(velocitat);

  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);

  delay(velocitat);

  digitalWrite(led8, HIGH);

  delay(velocitat);

  digitalWrite(led8, LOW);
  digitalWrite(led7, HIGH);

  delay(velocitat);

  digitalWrite(led7, LOW);
  digitalWrite(led6, HIGH);

  delay(velocitat);

  digitalWrite(led6, LOW);
  digitalWrite(led5, HIGH);

  delay(velocitat);

  digitalWrite(led5, LOW);
  digitalWrite(led4, HIGH);

  delay(velocitat);

  digitalWrite(led4, LOW);
  digitalWrite(led3, HIGH);

  delay(velocitat);

  digitalWrite(led3, LOW);
  digitalWrite(led2, HIGH);

  delay(velocitat);

  digitalWrite(led2, LOW);
  digitalWrite(led1, HIGH);

  delay(velocitat);
}
//**********************************FUNCIONS************************************
