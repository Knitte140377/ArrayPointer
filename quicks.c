/******************************************************************************
Bubble Min -
Quicksort

2 1 3 7 5 9[6]      pivot wählen
i->        <-j      i stopt wenn größer als pivot / tausche i mit j
2 1 3 5 7 9[6]

2 1 3 5[6]9 7

*******************************************************************************/

#include <stdio.h>



int anzeigen(int *a)
{printf("%s\n",a);}

int main()
{
    
    char a[]="2137596";
    int l="6";
    
    printf("Unsortiert: \n");
    anzeigen(a);
    
    
    quicksort(a,l);
    
    
    printf("Sortiert: \n");
    anzeigen(a);

    return 0;
}


