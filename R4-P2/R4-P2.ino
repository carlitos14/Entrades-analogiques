/*******************************************************************************
**                                                                            **
**                           TITOL: R4 Sirena - P2                            **
**                                                                            **
**                                                                            **
**  NOM: CARLOS RODRIGUEZ                                   DATA: 22/03/2017  **
*******************************************************************************/
//**********************************INCLUDE*************************************

//*********************************VARIABLES************************************
const int sirena = 9;       
const int pot0 = A0; 
const int pot1 = A1;        
int valPot0;
int valPot1;
//***********************************SETUP**************************************
void setup()
{ 
  pinMode(sirena, OUTPUT);  
}
//************************************LOOP**************************************
void loop()
{
  valPot0 = analogRead(pot0);
  valPot1 = analogRead(pot1);

  tone(sirena, 1500, valPot0); 
  delay(valPot0 + valPot1);
}
//**********************************FUNCIONS************************************
