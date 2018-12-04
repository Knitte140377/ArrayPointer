
#include <stdio.h>
#include <string.h>
int main()
{


    char a[] = "Es tut Ihnen Leid";
    printf("%s\n",a);
    
    
    char temp;
    for(int i=0,j=strlen(a)-1;i<=j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }

    printf("%s",a);
    return 0;
}
