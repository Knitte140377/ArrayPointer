// Bubble-Sort
/*
2 1 7 5 4

z[i] > z[i+1] => vertauschen

1 Shritt: 2_1 7 5 4
2 Shritt: 1 2_7 5 4
3 Shritt: 1 2 7_5 4
4 Shritt: 1 2 5 7_4
  Shritt: 1 2 5 4 7   Die größte Zahl steht an der letzten Stelle.
------------------------------------------------------------------
1 Schrit: 1_2 5 4 7
...
3 Schritt 1 2 5_4 7
  Schritt 1 2 4 5 7   Die zweitgrößte ...

*/
#include <stdio.h>
#include <string.h>


void erzeugeArray(int * array, int x)
{
    /*srand(time(0));
    int x = rand();
    int y = rand();
    printf("%d\n%d\n",x,y);
    */
}

void dreiEcksTausch(int * array, int anz)
{
    int flag;
   for(int d=0;d<=anz-1;d++)
    {
        flag=0;
        for(int i=0;i<=anz-1-d;i++)
        {
        
        }
    }
    
}

int main()
{
    char string[]="21754";
    int flag, anz;
    
    anz=strlen(string);
    
    
 
    
    printf("%s",string);

/*srand(time(0));
int x = rand();
int y = rand();
printf("%d\n%d\n",x,y);
*/
    return 0;
}

void zeigeArrayInConsole(int * array, int anz)
{
    
}

