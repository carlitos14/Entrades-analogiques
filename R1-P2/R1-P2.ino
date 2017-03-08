/*******************************************************************************
**                                                                            **
**                           TITOL: R1 - P2                                   **
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
  analogWrite(led1, 0);     
  analogWrite(led2, 0);    
  analogWrite(led3, 0);     
  analogWrite(led4, 0);     
  analogWrite(led5, 0);    
  analogWrite(led6, 40);     
  
  delay(velocitat);          
  
  analogWrite(led1, 0);
  analogWrite(led2, 0);    
  analogWrite(led3, 0);    
  analogWrite(led4, 0);    
  analogWrite(led5, 40);    
  analogWrite(led6, 80);    
  
  delay(velocitat);           
  
  analogWrite(led1, 0);    
  analogWrite(led2, 0);    
  analogWrite(led3, 0);    
  analogWrite(led4, 40);    
  analogWrite(led5, 80);    
  analogWrite(led6, 120);    
   
  delay(velocitat);          
  
  analogWrite(led1, 0);    
  analogWrite(led2, 0);   
  analogWrite(led3, 40);   
  analogWrite(led4, 80);    
  analogWrite(led5, 120);    
  analogWrite(led6, 160);   
  
  delay(velocitat); 

  analogWrite(led1, 0);    
  analogWrite(led2, 0);   
  analogWrite(led3, 40);   
  analogWrite(led4, 80);    
  analogWrite(led5, 120);    
  analogWrite(led6, 160);   
  
  delay(velocitat); 

  analogWrite(led1, 0);    
  analogWrite(led2, 40);   
  analogWrite(led3, 80);   
  analogWrite(led4, 120);    
  analogWrite(led5, 160);    
  analogWrite(led6, 200);   
  
  delay(velocitat); 

  analogWrite(led1, 40);    
  analogWrite(led2, 80);   
  analogWrite(led3, 120);   
  analogWrite(led4, 160);    
  analogWrite(led5, 200);    
  analogWrite(led6, 255);   
  
  delay(velocitat); 

  analogWrite(led1, 80);    
  analogWrite(led2, 120);   
  analogWrite(led3, 160);   
  analogWrite(led4, 200);    
  analogWrite(led5, 255);    
  analogWrite(led6, 255);   
  
  delay(velocitat); 

  analogWrite(led1, 120);    
  analogWrite(led2, 160);   
  analogWrite(led3, 200);   
  analogWrite(led4, 255);    
  analogWrite(led5, 255);    
  analogWrite(led6, 255);   
  
  delay(velocitat); 

  analogWrite(led1, 160);    
  analogWrite(led2, 200);   
  analogWrite(led3, 255);   
  analogWrite(led4, 255);    
  analogWrite(led5, 255);    
  analogWrite(led6, 255);   
  
  delay(velocitat); 

  analogWrite(led1, 200);    
  analogWrite(led2, 255);   
  analogWrite(led3, 255);   
  analogWrite(led4, 255);    
  analogWrite(led5, 255);    
  analogWrite(led6, 255);   
  
  delay(velocitat);

  analogWrite(led1, 255);    
  analogWrite(led2, 255);   
  analogWrite(led3, 255);   
  analogWrite(led4, 255);    
  analogWrite(led5, 255);    
  analogWrite(led6, 255);   
  
  delay(velocitat); 
}
//**********************************FUNCIONS************************************
