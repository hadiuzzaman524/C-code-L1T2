#include <stdio.h>
#include <stdlib.h>

int main()
{
    double gpa[9];
    for(int i=0; i<9; i++){
    printf("enter the gpa for each subject:");
    scanf("%lf",&gpa[i]);}
    int pass=1;
    for(int i=0; i<9; i++)
    {
        if(gpa[i]<2)
            pass=0;
    }
    if(pass==1)
    {
        printf("pass");
    }
    else
    {
        printf("failld");
    }
    return 0;
}
