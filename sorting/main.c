#include <stdio.h>
#include <stdlib.h>
#define maxchar 29
#define item 10

int main()
{
    char string[item][maxchar],anotherstring[maxchar];
    printf("enter the ten name to be sorted!");
    for(int i=0; i<item; i++)
    {
        scanf("%s",string[i]);
    }
    //for sorting
    for(int i=0; i<item-1; i++)
    {
       for(int j=0; j<item-1-i; j++)
            if(strcmp(string[j],string[j+1])>0)
       {
           strcpy(anotherstring,string[j]);
           strcpy(string[j],string[j+1]);
           strcpy(string[j+1],anotherstring);
       }
    }
    printf("\n\n\n\n");
    for(int i=0; i<item; i++)
    {
        printf("%s\n",string[i]);
    }

    return 0;
}
