#include<stdio.h>

#include<stdlib.h>

#include<math.h>


int main(){

int menu_choice, i, j, a, b;
int choice;
float x, y, result;
menu_choice:

    printf("\n --------------------------------------------------\n\n");

    printf("| \t Select your operation(0 to exit): \t |\n");

    printf("| \t 1. Addition \t 2. Subtraction \t 3. Multiplication \t |\n");
    printf("| \t 4. Division 5. Square root 6. X ^ Y 7. X ^ 3  |\n");
    printf("| \t 8. 1 / X 9. X ^ (1 / Y) 10. 10 ^ X 11. X! 12. % \t |\n");
    printf("| \t 13. log10(x) 14. Modulas 15. Sin(X) 16. Cos(x) \t |\n");
    printf("| \t 17. Tan(X) 18. Cosec(X) 19. Cot(X) 20. Sec(X) 21. Age Calculator \t |\n");
    printf("\n -------------------------------------------------- \n");
    printf("Choice: ");

    scanf("%d", &choice);


    if(choice==1)
    {
           system("CLS");


        int n;
        printf("how many number you want to addition:  ");
        scanf("%d",&n);
        int b;
        int sum=0;
        int i;
        for( i=0; i<n; i++)
        { //printf("enter %d",i+1);
            scanf("%d",&b);
          sum=sum+b;
        }
        printf("\n Result: %d \n", sum);
    }

    if(choice==2)
    {
         printf("Enter X: ");
        scanf("%f", &x);

        printf("\nEnter Y: ");
        scanf("%f", &y);

        result = x - y;
        printf("\nResult: %f\n", result);



    }


    if(choice==3)
    {
           printf("Enter X: ");
        scanf("%f", &x);
        printf("\nEnter Y: ");
        scanf("%f", &y);
        result = x * y;
        printf("\nResult: %f\n", result);
    }



    if(choice==4)
    {
        printf("Enter X: ");
        scanf("%f", &x);
        printf("\nEnter Y: ");
        scanf("%f", &y);
        result = x / y;
        printf("\n Result: %f \n", result);
    }



         if(choice==5)
         {
              printf("Enter X: ");
        scanf("%f", &x);
        result = sqrt(x);
        printf("\nResult: %f\n", result);
         }



         if(choice==6)
         {
                 printf("Enter X: ");
        scanf("%f", &x);
        printf("\nEnter Y: ");
        scanf("%f", &y);
        result= pow(x, y);
        printf("\nResult: %f\n", result);
         }

        if(choice==7)
        {
              printf("Enter X: ");
        scanf("%f", &x);
        result = pow(x, 3);
        printf("\nResult: %f\n", result);
        }


        if(choice==8)
        {
             printf("Enter X: ");
        scanf("%f", &x);
        result = pow(x, -1);
        printf("\nResult: %f\n", result);
        }

       if(choice==9)
       {
         printf("Enter X: ");
        scanf("%f", &x);
        printf("\nEnter Y: ");
        scanf("%f", &y);
        result = pow(x, (1 / y));
        printf("\nResult: %f\n", result);
       }

    if(choice==9)
    {
       printf("Enter X: ");
        scanf("%f", &x);
        result = pow(10, x);
        printf("\nResult: %f\n", result);
    }


  if(choice==10)
  {
   printf("Enter X: ");
        scanf("%f", &x);
        result = 1;
        for(i = 1; i <= x; i++){
        result = result * i;
        }
        printf("\nResult: %f\n", result);
  }
    if(choice==11)
    {

        printf("Enter X: ");
        scanf("%f", &x);
        printf("\nEnter Y: ");
        scanf("%f", &y);
        result = (x * y) / 100;
        printf("\nResult: %f\n", result);
    }


    if(choice==12)
    {
          printf("Enter X: ");
        scanf("%f", &x);
        result = log10(x);
        printf("\nResult: %f\n", result);
    }
     if(choice==13)
     {
          printf("\nEnter a: ");
        scanf("%f", &a);
        printf("\nEnter b: ");
        scanf("%f", &b);
        result = a % b;
        printf("\nResult: %f\n", result);
     }
     if(choice==14)
     {
         printf("Enter X: ");
        scanf("%f", &x);
        result = sin(x * 3.1416 / 180);
        printf("\nResult: %f\n", result);
     }


       if(choice==16)
       {
          printf("Enter X: ");
        scanf("%f", &x);
        result = cos(x * 3.1416 / 180);
        printf("\nResult: %.2f\n", result);
       }


       if(choice==16)
       {
            printf("Enter X: ");
        scanf("%f", &x);
        result = tan(x * 3.1416 / 180);
        printf("\nResult: %.2f\n", result);
       }

     if(choice==17)
     {
           printf("Enter X: ");
        scanf("%f", &x);
        result = 1 / sin(x * 3.1416 / 180);
        printf("\nResult: %.2f\n", result);
     }


     if(choice==18)
     {
         printf("Enter X: ");
        scanf("%f", &x);
        result = 1 / tan(x * 3.1416 / 180);
        printf("\nResult: %.2f\n", result);
     }

     if(choice==19)
     {

        printf("Enter X: ");
        scanf("%f", &x);
        result = 1 / cos(x * 3.1416 / 180);
        printf("\nResult: %.2f\n", result);
     }

if(choice==20)
{
    int a,c,d;
    int date,month,year;
    printf("enter the current date:");
    scanf("%d",&date);
    printf("enter the current month:");
    scanf("%d",&month);
    printf("enter the current year:");
    scanf("%d",&year);

    printf("\n\n\n");

    printf("Enter your date of birth year:");
    scanf("%d",&a);
    printf("Enter your date of month:");
    scanf("%d",&c);
    printf("Enter the birth date:");
    scanf("%d",&d);
    printf("\n\n\n");
    if(d>date)
    {
        date=date+30;
        date=d-date;
        c=c+1;
    }
    else
        date=date-d;
    if(c>month)
    {
        month=month+12;
        month=c-month;
        a=a+1;
    }
    else
    {
      month=month-c;
    }



        year=a-year;


    printf("Your age:%d year %d month %d day",year,month,date);



}


return 0;
}

