/**********************************************************************************
**                                                                               **
**                   Entrades i sorties analogiques                              **
**                          Nom del programa                                     **
**  NOM : Jordi Pujlreu Sala                                   DATA: 1/5/17      **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int led0 = 5;          //  adjudiquem nom a la sortida
const int led1 = 6;          // 
const int led2 = 11;          // 
const int led3 = 3;          // 
const int led4 = 9;         // 
const int led5 = 10;         // 
int velocitat = 250;         // velocitat de canvi de DC

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 3 com una sortida
  pinMode(led1, OUTPUT);     
  pinMode(led2, OUTPUT);      
  pinMode(led3, OUTPUT);     
  pinMode(led4, OUTPUT);     
  pinMode(led5, OUTPUT);     
}

//********** Loop *****************************************************************
void loop()
{
  analogWrite(led0, 60);     // DC a 61
  analogWrite(led1, 60);     
  analogWrite(led2, 60);    
  analogWrite(led3, 60);     
  analogWrite(led4, 60);    
  analogWrite(led5, 60);     
  
  delay(velocitat);          // ESPEREM...
  
  analogWrite(led0, 125);    // DC a 122
  analogWrite(led1, 125);     
  analogWrite(led2, 125);    
  analogWrite(led3, 125);    
  analogWrite(led4, 125);    
  analogWrite(led5, 125);    
  
  delay(velocitat);           // ESPEREM...
  
  analogWrite(led0, 255);    // DC A 255
  analogWrite(led1, 255);    
  analogWrite(led2, 255);    
  analogWrite(led3, 255);    
  analogWrite(led4, 255);  
  analogWrite(led5, 255);    
   
  delay(velocitat);           // ESPEREM...
  
  analogWrite(led0, 125);    // DC A 122
  analogWrite(led1, 125);    
  analogWrite(led2, 125);    
  analogWrite(led3, 125);    
  analogWrite(led4, 125);    
  analogWrite(led5, 125);    
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
}

//********** Funcions *************************************************************

