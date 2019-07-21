#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define coustomer 3

int main()
{
    char first_name[20][10],second_name[20][10],surename[20][10],name[20][20],
    telephone[20][12],dummy[20];
    int i,j;
    printf("input name and telephone number\n");
    for(i=0;i<coustomer; i++)
    {
        scanf("%s %s %s %s",first_name[i],second_name[i],surename[i],telephone[i]);

    }
    strcpy(name[i],surename[i]);
    strcat(name[i],",");
    dummy[0]=first_name[i][0];
    dummy[1]='\0';
    strcat(name[i],dummy);
    strcat(name[i],",");
    dummy[0]=second_name[i][0];
    dummy[i]='\0';
    strcat(name[i],dummy);


    for(i=1; i<=coustomer-1; i++)
    {
        for(int j=1; j<=coustomer-1-i; j++)
        {
            if(strcmp(name[j-1],name[j])>0)
            {
                strcpy(dummy,name[j-1]);
                strcpy(name[j-1],name[j]);
                strcpy(name[j],dummy);

                  strcpy(dummy,telephone[j-1]);
                strcpy(telephone[j-1],telephone[j]);
                strcpy(telephone[j],dummy);


            }
        }
    }
    printf("coustomer list in alphabitical order:\n");
    for(i=0; i<coustomer; i++)
    {
        printf("%-20s\t %-10s\n",name[i],telephone[i]);
    }


    return 0;
}
