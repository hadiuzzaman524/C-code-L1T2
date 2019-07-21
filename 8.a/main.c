#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[20];
    int student_id;
    char dob[20];
    char enrol[20];
    int room;
    float gpa[8];
};


int main()
{
    FILE *file;
    file=fopen("student_data.txt","r");
    struct student jaman[5];
    if(file==NULL)
    {
        printf("the file is not create");
    }
    else
    {
        for(int i=0; i<5; i++)
        {  printf("name: ");
            gets(jaman[i].name);
           printf("id: ");
            scanf("%d",&jaman[i].student_id);
            fflush(stdin);
            printf("dob: ");
            gets(jaman[i].dob);
           printf("enrol: ");
            gets(jaman[i].enrol);
            printf("room: ");
            scanf("%d",&jaman[i].room);
            fflush(stdin);
            for(int j=0; j<8; j++)
            {   printf("result for %d semister: ",j+1);
                scanf("%f",&jaman[i].gpa[j]);
                fflush(stdin);
            }
        }




        for(int i=0; i<2; i++)
        {   float CGPA[2];
            float sum=0.0;
            for(int j=0; j<8; j++)
            {
                sum=sum+jaman[i].gpa[j];
            }
            float CGPA[i]=sum/8;
            float big=CGPA[0];
            int pass=1;
            if(CGPA[i]>CGPA[i+1])
            {
                big=CGPA[i];
            }
              if(pass==1)
        {
            printf("%s",jaman.name);
        }

        }


    }

    return 0;
}
