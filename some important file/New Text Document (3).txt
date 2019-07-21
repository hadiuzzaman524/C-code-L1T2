#include <stdio.h>
#include <stdlib.h>
void fun1(int x[],int y[],int a);


int main()
{
int a[1000];
int b[1000];


printf("enter a array!");
for(int i=0; i<=5; i++)

{
    scanf("%d",&a[i]);


}

printf("enter b array!");
for(int i=0; i<=5; i++)
{
       scanf("%d",&b[i]);
}


     fun1(a,b,5);


}
void fun1(int x[],int y[],int a)
{
    for(int i=0; i<=5; i++)
    {
         if(x[i]>y[i])
         {
              printf("1\t",i);
         }
         else if(x[i]<y[i])
         {
             printf("1\t",i);
         }
         else
         {
             printf(" \t",i);
         }

    }


}
