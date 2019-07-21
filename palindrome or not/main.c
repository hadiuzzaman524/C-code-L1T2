#include <stdio.h>
int main()
{
int num,revers,reminder;
scanf("%d",&num);
revers=0;
int temp=num;
while(num>0)
{
    reminder=num%10;
    revers=revers*10+reminder;
    num=num/10;
}
printf("%d\n",revers);
if(temp==revers)
{
    printf("this number is palindrome!");

}
else
{
    printf("this number is not palindrome!");
}
   return 0;
}
