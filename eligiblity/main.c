#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,p,c,b;
    char ch;
    printf("math ");
    scanf("%d",&m);
    printf("phy : ");
    scanf("%d",&p);
    printf("chem: ");
    scanf("%d",&c);
    printf("bio :");
    scanf("%d",&b);
    fflush(stdin);

    printf("sports man? ");
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
    {
        printf("eligible");
    }
    else
    {
        if(p>70&&m>70&&c>70&&b>70&&(m+p+c)>250)
        {
            printf("eligible");
        }
        else
        {
            printf("not eligible");
        }
    }







    return 0;
}
