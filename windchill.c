// Title  : Windchill
// Desc   : Calculating windchill using C
// Author : Trevor Ransom
// Date   : 09-25-21

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include "WCMethods.h"


int main()
{
 
 //welcome message
  Welcome();

 //gets users name and stores it
  SetName();
      
//while loop for user choice
  do
  {
    do
    {

      GetTemp();
  
      BadUnit();
  
    }while(TF == 'f');
  
  
       
    //user enter wind speed & checks if it meets requirements
    do
    {
  
      GetWindSpeed();

      BadWindSpeed();
      
    }while(TF == 'f');
  
  //Convert wind for formula
    WindConvert();
    

  //calculate wind chill temp using formula
    WindChill();

  //display wind chill temperature alongwith message depending on WC
      
    WindchillStatement();
    

  }while(decision == 'y');
    
  //if user inputs n program ends

printf("Thank you!");
  
  return 0;

}//end main
