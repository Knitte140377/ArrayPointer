#include <stdio.h>

void arrayAnzeigenPointer(int *pointer)
{
    printf("Über Funktion ausgegeben:\n");
    
    int y,x;
    for(y=0;y<8;y++){
        for(x=0;x<8;x++){
            printf("%d ",*pointer++);
        }
        printf("\n");
    }

}
void arrayAnlegenPointer(int *b){

    for(int y=0;y<8;y++){
        for(int x=0;x<8;x++){
            *b++=(y+1)*10+x+1;
        }
    }
    
}

int main()
{

    int brett[8][8] = {0};
    
    arrayAnlegenPointer(brett);
    
/*
    for(y=0;y<8;y++){
        for(x=0;x<8;x++){
            printf("%d ",brett[y][x]);
        }
         printf("\n");
    }


    printf("Array mit einen Pointer ausgegeben\n");

    int *pointer=brett;
    for(y=0;y<8;y++){
        for(x=0;x<8;x++){
            printf("%d ",*pointer);
            *pointer++;
        }
        printf("\n");
    }

*/
    arrayAnzeigenPointer(brett);


    return 0;
}
