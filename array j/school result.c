#include <stdio.h>
#include <stdlib.h>

int main()
{   int halfyerly[10];
    int finalyear[10];

for(int i=1; i<10; i++){
        printf("enter the marks in halfyearly examination:");
    scanf("%d",&halfyerly[i]);

}
for(int i=1; i<10; i++)
{
    printf("enter the final examination marks:");
    scanf("%d",&finalyear[i]);
}
double total[10];
for(int i=1; i<10; i++)
{
    total[i]=halfyerly[i]+finalyear[i];
    printf("total number is %f\n",total[i]);
}


    return 0;
}
