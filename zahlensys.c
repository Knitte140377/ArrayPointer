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
    if(wandler>64)  //Ascii in 10er compiler
    {wandler=wandler-55;}else{wandler=wandler-48;} 
    potenz =stringSize-i;
    zehnerzahl =wandler*pow(zahlensystem, potenz)+zehnerzahl;
}

printf("16er System %s\n",string);
printf("10er System: %d\n",zehnerzahl);

int rest;
int index=0;
int zielsystem=16;
char ergebnisVerkehrt[] = "0";

while(zehnerzahl>zielsystem)
{
    rest=zehnerzahl%zielsystem;
    zehnerzahl=zehnerzahl/zielsystem;
printf("zehnerzahl %d rest %d\n",zehnerzahl,rest);
 
 if(rest>9)
    {rest=rest+55;}else{rest=rest+48;} 
    ergebnisVerkehrt[index]=(char)rest;
    index=index+1;
    printf("%s\n",ergebnisVerkehrt);
}
    rest=zehnerzahl;
 if(rest>9)    
    {rest=rest+55;}else{rest=rest+48;} 
    ergebnisVerkehrt[index]=(char)rest;
    printf("%s\n",ergebnisVerkehrt);
printf("zehnerzahl %d rest %d\n",zehnerzahl,rest);

printf("ergebnis %s \n",ergebnisVerkehrt);

char ergebnis[]="0";

int chars=index;
for(int i=0;i=chars;i++)
{
ergebnis[i]=ergebnisVerkehrt[index];
index=index-1;
}
printf("ergebnis %s \n",ergebnis);
return 0;
}
