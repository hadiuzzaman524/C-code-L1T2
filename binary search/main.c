#include <stdio.h>
#include <stdlib.h>

int main()
{ int n;
scanf("%d",&n);
 int mya[n];
 for(int i=0; i<n; i++)
 {
     scanf("%d",&mya[i]);
 }
 int s;
 printf("enter the number to search: ");
 scanf("%d",&s);

 int mid,found=0,up=0,down=n-1;
 while(up<=down)
 {
     mid=up+down/2;
     if(mya[mid]==s)
     {
         printf(" %d  is found of the index %d\n",mya[mid],mid);
         found=1;
         break;
     }
     else if(mid>s)
     {
       down=mid-1;
     }
     else
     {
       up=mid+1;
     }

 }
 if(found==0)
 {
     printf("not found");
 }

    return 0;
}
