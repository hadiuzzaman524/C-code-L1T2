#include <stdio.h>
#include <stdlib.h>
float find_avg(int z[],int x);

int main()
{
    int mya[]={9,7,3,4,12,45};
    float x=find_avg(mya,5);
    printf("returned avg=%f",x);

    return 0;
}
float find_avg(int z[],int x)
{
    float sum;
    for(int i=0; i<x; i++)

        sum=sum+z[i];
        printf("avg is  %f",sum/x);
        return sum/x;

}
