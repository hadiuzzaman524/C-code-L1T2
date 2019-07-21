#include <stdio.h>
#include <stdlib.h>

int main()
{
int *marks ;
int i,n;
printf("please enter the number of the student:");
scanf("%d",&n);

marks=(int*)malloc(sizeof(int)*n);
if(marks==NULL)
{
    printf("memory allocation fail");
}
printf("enter the marks for each student: \n");
for(i=0; i<n; i++)
{
    scanf("%d",&marks[i]);
}
printf("now here you can see the value:\n");
for(i=0; i<n; i++)
{
    printf("%d\n",marks[i]);
}
free(marks);
    return 0;
}
