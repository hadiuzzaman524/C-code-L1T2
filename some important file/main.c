#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file,*file2;
    char name[50],highestname[50];
    int total_income,taxable_income;
    int basic_salary,tax=0;

    file=fopen("income.txt","r");
    file2=fopen("tax.txt","w");


    if(file=='NULL')
    {
        printf("the file is not open!");
    }
    else
    {
        while(fscanf(file,"%[^\n]%d%d\n",name,&basic_salary,&total_income)==3)
        {
           /* if(total_income> highestsalary)
            {
                highestsalary=total_income;
                strcpy(highestname,name);
            } */

            taxable_income=total_income-(basic_salary*1.5);
            if(taxable_income<25000)
            {
                tax=taxable_income;
            }
            else if(taxable_income>=5000&&taxable_income<=25000)
            {
                tax=taxable_income*0.1;
            }
            else if(taxable_income>50000)
            {
                tax=taxable_income*0.15;
            }

            fprintf(file2,"%s\n%d\n",name,tax);
        }
        fclose(file);
        fclose(file2);

       // printf("\n\nHighest name is\n\n %s %d",highestname,highestsalary);


    }
    return 0;
}
