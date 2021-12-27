// Title  : Windchill
// Desc   : Calculating windchill using C
// Author : Trevor Ransom
// Date   : 09-25-21

#include <stdio.h>
#include <math.h>

//variable declaration
  float airtemp,windspeed,windchill;
  char decision,tunit;
  char TF = 't';
  char Myname[100];
  
  //constants
  const int MAXF = 45;
  const int MINF = -10;
  const double MAXC = 7.22;
  const double MINC = -23.33;
  const float KPH_CONVERT = 1.609;

  //welcome message
void Welcome()
{
  printf("Welcome to wind chill calculator!\n");
  printf("================================\n\n");
}

//Windchill formula
float WindChill()
 {
   windchill = (13.12 + (0.6215 * airtemp) - (11.37 * pow(windspeed,0.16)) + (0.3965 * airtemp * pow(windspeed,0.16)));
 }

//checks if windspeed is acceptable
void BadWindSpeed()
{
  if((windspeed < 0) || (windspeed > 25))
  {
    TF = 'f';
    printf("Entered wind speed is not correct. Please try again.\n");
  }
  else
  {
    TF = 't';
  }
}

//get wind speed from used in MPH and convert to KPH
float GetWindSpeed()
{
printf("Enter wind speed (MPH): \n");
scanf("%f", &windspeed);
}

//converts wind for windchill formula
float WindConvert()
{
  windspeed = (windspeed * KPH_CONVERT);
}

// Checks if units are acceptable 
void BadUnit()
{  
  if (tunit != 'f' && tunit !=  'F' && tunit != 'c' && tunit !=  'C')
  {
    printf("That is not a valid temperature measurement. Please retry.\n");
    TF ='f';
  }
  else
  {
    TF ='t';
  }
}

//get air temp and check tempt unit

float GetTemp()
{
     
          printf(" Enter Temperature and unit (c/f) : \n");
          scanf(" %f %c", &airtemp, &tunit);
                        
      if(tunit == 'c'|| tunit == 'C' || tunit == 'f' || tunit == 'F' )
      {
          //if it's not in range -10 to 45 f then enter again
          if((tunit =='c') || (tunit =='C'))
          {
                //check celsius range to make sure it is acceptable
              if (airtemp < MINC || airtemp > MAXC)
              {
              printf("Entered temperature is not correct. Please try again...\n");

              //set TF to false and pass to do-while loop
              TF = 'f';
              }
                
          }

          if(tunit == 'F'|| tunit == 'f')
          {
              if((airtemp < MINF) || (airtemp > MAXF))
              {
              printf("Entered temperature is not correct. Please try again...\n");

              //set TF to false and pass to do-while loop
              (TF = 'f');
              }
          }
              //set TF to true if none of above conditions are met
          else
          {
          (TF ='t');
          }
        }
  
}

//user inputs name
void  SetName()
{
  printf("Enter Name: ");
  scanf("%s", &Myname[50]);
  
 
}

//gets user name and prints
char  GetName()
{
  for(int i = 0; i< sizeof(Myname); i++)
 
 printf("%c", Myname[i]);
 
}

//return statement
void WindchillStatement()
{
  if(windchill > 32)
        {
          printf("Wind chill Temperature= %.2f %c\n", windchill,tunit);
          printf("Not too bad at all, ");
          GetName();
          printf(".\n");

        }
        else if((windchill > 10) && (windchill <= 32))
        {
            printf("Wind chill Temperature= %.0f %c \n", windchill, tunit );
            printf("Its pretty cold, ");
            GetName();
            printf( " start bundling up. \n");
        }
        else
        {
            printf("Wind chill Temperature= %.2f %c\n", windchill, tunit);
            printf("Stay indoors if you can ");
            GetName();
            printf(". it's pretty uncomfortable!\n");
            
        }
        //asking user to continue
        GetName();
        printf(" Do you want to continue [y/n]:\n");
        scanf(" %c", &decision);
        

}


