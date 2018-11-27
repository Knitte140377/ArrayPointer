
#include <stdio.h>
#include <math.h>
#include <string.h>
/*
#include <string.h>:
    strcat(char *a, char*b) ...hängt string b an string a an
    strncat(char *a, char*b, int n) ...hängt n Zeichen von b an string a
    strcpy(char*a, char*b) ...kopiert string b auf string a
    strncpy(char *a, char*b, int n) ...kopiert n Zeichen von b auf auf a 

strings in c sind 0-terminiert:
    char text[] ="hallo";
    char text[0] ="h";
    char text[4] ="o";
    char text[5] ="\0";

*/
char getZiffer(int wert){
    if(wert>9)
    return  (char)(wert-10+"A");
    else
    return  (char)wert;
}

int getWert(char ziffer){
    if(ziffer>="A")
    return (int)(ziffer-"A"+10);
    else
    return (int)ziffer;
}



int main()
{
    printf("Hello World");
    

    return 0;
}
