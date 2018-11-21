#include <stdio.h>
#include <math.h>
int main()
{



int zahlensystem = 16;
char string[] = "20E";
int stringSize = 2;
int wandler=0;
int potenz=1;
int zehnerzahl=0;

for(int i=stringSize;i>=0;i--) //zu zehn machen
{
    wandler = (int)string[i];
    if(wandler>64)  //Ascii in azahlenwert
    { wandler=wandler-55; } else { wandler=wandler-48; } 
    potenz =stringSize-i;
    zehnerzahl =wandler*pow(zahlensystem, potenz)+zehnerzahl;
}


int rest=0;
rest=zehnerzahl%16;
    if(wandler>9)  //Ascii in zahlenwert
    { wandler=wandler+55; } else { wandler=wandler+48; }

printf("rest %d\n",rest);


printf("16er System %s\n",string);
printf("10er System: %d\n",zehnerzahl);

return 0;
}
