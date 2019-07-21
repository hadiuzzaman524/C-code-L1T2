#include <stdio.h>
#include <stdlib.h>
float start_point,
end_point,total_area;
int numtraps;

int main()
{
    void input(void);
    float find_area(float a,float b,int n);
    printf("area under a curve!");
    input();
    total_area=find_area(start_point,end_point,numtraps);
    printf("total area =%f",total_area);
}
void input(void)
{
    printf("\n enter lower limit: ");
    scanf("%f",&start_point);
    printf("\n enter upper limit: ");
    scanf("%f",&end_point);
    printf("enter number of trapezoids: ");
    scanf("%d",&numtraps);

}
float find_area(float a,float b,int n)
{
    float base,lower,h1,h2;
    float function_x(float x);
    float tarp_area(float h1,float h2,float base);
    base=(b-1)/n;
    lower=a;
    for(lower=a; lower<=b-base; lower=lower+base)
    {
        h1=function_x(lower);
        h1=function_x(lower+base);
        total_area+=trap_area(h1,h2,base);
    }
    return (total_area);

    float trap_area(float height_1,float height_2,float base)
    {
        float area ;
        area=0.5*(height_1+height_2)*base;
        return (area);
    }
    float function_x(float x)
    {
        return(x*x+1);
    }

}
