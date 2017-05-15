/**********************************************************************************
**                                                                               **
**                   Entrades i sorties analogiques                              **
**                          Nom del programa                                     **
**  NOM : Jordi Pujlreu Sala                                   DATA: 1/5/17      **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int led0 = 5;          //  adjudiquem nom a la sortida
const int led1 = 6;          
const int led2 = 3;       
const int led3 = 11;         
const int led4 = 9;         
const int led5 = 10;         
int velocitat = 100;         // velocitat de canvi de DC
int num = 0 ;

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
  
  num = 0 ;

  analogWrite(led0, num);    // DC a 0
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    
   
  delay(velocitat);           // ESPEREM...

   num = num + 10 ;

  analogWrite(led0, num);    // DC a numero anterior mes 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

  num = num + 10 ;

  analogWrite(led0, num);    // DC a numero anterior mes 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

   num = num + 10 ;

  analogWrite(led0, num);    // DC a numero anterior mes 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

   num = num + 10 ;

  analogWrite(led0, num);    // DC a numero anterior mes 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

   num = num + 10 ;

  analogWrite(led0, num);    // DC a numero anterior mes 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

   num = num + 10 ;

  analogWrite(led0, num);    // DC a numero anterior mes 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

   num = num + 10 ;

  analogWrite(led0, num);    // DC a numero anterior mes 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

   num = num + 10 ;

  analogWrite(led0, num);    // DC a numero anterior mes 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

   num = num + 10 ;

  analogWrite(led0, num);    // DC a numero anterior mes 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

   num = num + 10 ;

  analogWrite(led0, num);    // DC a numero anterior mes 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

   num = num + 10 ;

  analogWrite(led0, num);    // DC a numero anterior mes 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

   num = num + 10 ;

  analogWrite(led0, num);    // DC a numero anterior mes 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

   num = num + 10 ;

  analogWrite(led0, num);    // DC a numero anterior mes 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

   num = num + 10 ;

  analogWrite(led0, num);    // DC a numero anterior mes 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

   num = num + 10 ;

  analogWrite(led0, num);    // DC a numero anterior mes 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

   num = num + 10 ;

  analogWrite(led0, num);    // DC a numero anterior mes 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

   num = num + 10 ;

  analogWrite(led0, num);    // DC a numero anterior mes 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

   num = num + 10 ;

  analogWrite(led0, num);    // DC a numero anterior mes 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

   num = num + 10 ;

  analogWrite(led0, num);    // DC a numero anterior mes 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

   num = num + 10 ;

  analogWrite(led0, num);    // DC a numero anterior mes 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

   num = num + 10 ;

  analogWrite(led0, num);    // DC a numero anterior mes 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

   num = num + 10 ;

  analogWrite(led0, num);    // DC a numero anterior mes 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

   num = num + 10 ;

  analogWrite(led0, num);    // DC a numero anterior mes 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

   num = num + 10 ;

  analogWrite(led0, num);    // DC a numero anterior mes 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

   num = num + 10 ;

  analogWrite(led0, num);    // DC a numero anterior menys 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

    num = num - 10 ;

  analogWrite(led0, num);    // DC a numero anterior menys 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

    num = num - 10 ;

    analogWrite(led0, num);    // DC a numero anterior menys 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

    num = num - 10 ;

    analogWrite(led0, num);    // DC a numero anterior menys 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

    num = num - 10 ;

    analogWrite(led0, num);    // DC a numero anterior menys 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

    num = num - 10 ;

    analogWrite(led0, num);    // DC a numero anterior menys 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

    num = num - 10 ;

    analogWrite(led0, num);    // DC a numero anterior menys 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

    num = num - 10 ;

    analogWrite(led0, num);    // DC a numero anterior menys 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

    num = num - 10 ;

    analogWrite(led0, num);    // DC a numero anterior menys 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

    num = num - 10 ;

    analogWrite(led0, num);    // DC a numero anterior menys 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

    num = num - 10 ;

    analogWrite(led0, num);    // DC a numero anterior menys 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

    num = num - 10 ;

    analogWrite(led0, num);    // DC a numero anterior menys 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

    num = num - 10 ;

    analogWrite(led0, num);    // DC a numero anterior menys 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

    num = num - 10 ;

    analogWrite(led0, num);    // DC a numero anterior menys 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

    num = num - 10 ;

    analogWrite(led0, num);    // DC a numero anterior menys 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

    num = num - 10 ;

    analogWrite(led0, num);    // DC a numero anterior menys 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

    num = num - 10 ;

    analogWrite(led0, num);    // DC a numero anterior menys 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

    num = num - 10 ;

    analogWrite(led0, num);    // DC a numero anterior menys 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

    num = num - 10 ;

    analogWrite(led0, num);    // DC a numero anterior menys 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

    num = num - 10 ;

    analogWrite(led0, num);    // DC a numero anterior menys 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

    num = num - 10 ;

    analogWrite(led0, num);    // DC a numero anterior menys 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

    num = num - 10 ;

    analogWrite(led0, num);    // DC a numero anterior menys 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

    num = num - 10 ;

    analogWrite(led0, num);    // DC a numero anterior menys 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

    num = num - 10 ;

    analogWrite(led0, num);    // DC a numero anterior menys 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

    num = num - 10 ;

    analogWrite(led0, num);    // DC a numero anterior menys 10
  analogWrite(led1, num);    
  analogWrite(led2, num);    
  analogWrite(led3, num);    
  analogWrite(led4, num);  
  analogWrite(led5, num);    

  delay(velocitat);           // ESPEREM...

    

 

  
}


//********** Funcions *************************************************************

