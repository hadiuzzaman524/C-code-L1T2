#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("how many number you entered?");
    scanf("%d",&n);
    int number[n];
    int sum=0;
    for(int i=0; i<n;  i++)
    {   printf("enter the %d number: ",i+1);
        scanf("%d",&number[i]);
        if(number[i]%2==0)
        {
            sum=sum+number[i];
        }
    }
    printf("the sum of all even number: %d\n",sum);
    return 0;
}
