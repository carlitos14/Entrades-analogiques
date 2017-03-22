/*******************************************************************************
**                                                                            **
**                           TITOL: R3 - P1B                                   **
**                                                                            **
**                                                                            **
**  NOM: CARLOS RODRIGUEZ                                   DATA: 15/03/2017  **
*******************************************************************************/
//**********************************INCLUDE*************************************

//*********************************VARIABLES************************************
const int ledPin[] = {5, 6, 7, 8, 9, 10, 11, 12};
int ledNum = 8;
const int pot = A0;

int velocitat = 50;
int valPot = 0;
//***********************************SETUP**************************************
void setup()
{ 
  for(int i = 0; i < ledNum; i++)
  {
    pinMode(ledPin[i], OUTPUT);
  }
}
//************************************LOOP**************************************
void loop()
{
  valPot = analogRead(pot);
  velocitat = valPot;

  digitalWrite(ledPin 0, HIGH);
  digitalWrite(ledPin 1, LOW);
  digitalWrite(ledPin 2, HIGH);
  digitalWrite(ledPin 3, LOW);
  digitalWrite(ledPin 4, HIGH);
  digitalWrite(ledPin 5, LOW);
  digitalWrite(ledPin 6, HIGH);
  digitalWrite(ledPin 7, LOW);

  delay(velocitat);

  digitalWrite(ledPin 0, LOW);
  digitalWrite(ledPin 1, HIGH);
  digitalWrite(ledPin 2, LOW);
  digitalWrite(ledPin 3, HIGH);
  digitalWrite(ledPin 4, LOW);
  digitalWrite(ledPin 5, HIGH);
  digitalWrite(ledPin 6, LOW);
  digitalWrite(ledPin 7, HIGH);

  delay (velocitat);
}
//**********************************FUNCIONS************************************
