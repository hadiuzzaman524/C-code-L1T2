#include <stdio.h>
#include <stdlib.h>
void printline(char c);
void value(float,float,int);

int main()
{
    float principal,inrate;
    int priod;
    printf("enter principal amount,interest:");
    printf("rate,and period\n");
    scanf("%f %f %d",&principal,&inrate,&priod);
    printline('z');
    value(principal,inrate,priod);
    printline('c');
}
void printline(char ch)
{
    int i;
    for(i=0; i<=52; i++)
        printf("%c",ch);
    printf("\n");

}
void value(float p,float r,int n)
{
    int year;
    float sum;
    sum=p;
    year=1;
    while(year<=n)
    {
        sum=sum*(r+1);
        year=year+1;

    }
    printf("%f\t%f\t\%d\t%f\t",p,r,n,sum);
}
