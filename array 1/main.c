#include <stdio.h>
#include <stdlib.h>

int main()
{
     int user;
     printf("enter a number:");
     scanf("%d",&user);
     int flag=1;
     for(int i=2; i<user; i++)
     {
         if(user%i==0)
            flag=0;
     }
     if(flag==1)
        printf("the number is prime");
     else
        printf("the number is not prime");
    return 0;
}
