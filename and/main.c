#include <stdio.h>
#include <stdlib.h>

int main()
{
   int math,chem,phy,bio;
   char ch;

   printf("enter math : ");
   scanf("%d",&math);
   printf("enter chem : ");
   scanf("%d",&chem);
   printf("enter phy : ");
   scanf("%d",&phy);
   printf("enter bio : ");
   scanf("%d",&bio);
   fflush(stdin);

   printf("sports man? ");
   scanf("%c",&ch);

   if(ch=='y'||ch=='Y')
   {
       printf("eligible");
   }
   else
   {
      if(math>=80&&chem>=80&&phy>=80&&bio>=80&&(math+chem+phy+bio)>300)
      {
          printf("eligible");
      }
      else
      {
          printf("not eligible");
      }
   }







   return 0;

}
