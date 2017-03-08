/*******************************************************************************
**                                                                            **
**                           TITOL: R1 - P1                                   **
**                                                                            **
**                                                                            **
**  NOM: CARLOS RODRIGUEZ                                   DATA: 02/03/2017  **
*******************************************************************************/
//**********************************INCLUDE*************************************

//*********************************VARIABLES************************************
const int led1 = 3;
const int led2 = 5;
const int led3 = 6;
const int led4 = 9;
const int led5 = 10;
const int led6 = 11;

int velocitat = 500; 
//***********************************SETUP**************************************
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
}
//************************************LOOP**************************************
void loop()
{
  analogWrite(led1, 60);     
  analogWrite(led2, 60);    
  analogWrite(led3, 60);     
  analogWrite(led4, 60);     
  analogWrite(led5, 60);    
  analogWrite(led6, 60);     
  
  delay(velocitat);          
  
  analogWrite(led1, 125);
  analogWrite(led2, 125);    
  analogWrite(led3, 125);    
  analogWrite(led4, 125);    
  analogWrite(led5, 125);    
  analogWrite(led6, 125);    
  
  delay(velocitat);           
  
  analogWrite(led1, 255);    
  analogWrite(led2, 255);    
  analogWrite(led3, 255);    
  analogWrite(led4, 255);    
  analogWrite(led5, 255);    
  analogWrite(led6, 255);    
   
  delay(velocitat);          
  
  analogWrite(led1, 125);    
  analogWrite(led2, 125);   
  analogWrite(led3, 125);   
  analogWrite(led4, 125);    
  analogWrite(led5, 125);    
  analogWrite(led6, 125);   
  
  delay(velocitat);        
}
//**********************************FUNCIONS************************************
