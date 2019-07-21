#include <stdio.h>
#include <stdlib.h>

int main()
{
    int math,anl,dev,total;
    char name;

    printf("enter the marks for math:\nanal : \n devl: \n");
    scanf("%d%d%d",&math,&anl,&dev);

    fflush(stdin);
    printf("is he/she world finalist? (y or N)\n");
    scanf("%c",&name);
    total=math+anl+dev;
    if(math>=85&&anl>=85&&dev>=70&&total>=250||name=='y'||name=='Y')
    {
        printf("the candidate is eligible\n");
    }
    else
    {
        printf("the candidate is not eligible\n");
    }

    return 0;
}
