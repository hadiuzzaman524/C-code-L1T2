#include <stdio.h>
#include <stdlib.h>
struct std
{
    char name[80];
    int stdid;
    int room;
    float gpa[8];
     char enroldate[11];
     char dob[11];
};

int main()
{
   FILE *fp;
   fp=fopen("student data.dat","wb");

   if(fp==NULL)
   {
       printf("the file is not open!");

   }
   struct std myvar[5];
    printf("enter name, id, dob, enrolid, room, 8 GPA\n");


  // fread(&jaman[0],sizeof(student),50,fp);



   for(int i=0; i<2; i++)
   {
       printf("student %d\n",i+1);
       printf("name:");
       gets(myvar[i].name);
       printf("id:");
       scanf("%d",&myvar[i].stdid);

       fflush(stdin);
       printf("date of birth: ");
       gets(myvar[i].dob);

       printf("enrole: ");
       gets(myvar[i].enroldate);
       printf("room: ");
       scanf("%d",&myvar[i].room);

       printf("gpa: ");
       for(int k=0; k<8; k++)
       {
           scanf("%f",&myvar[i].gpa[k]);
       }

       fflush(stdin);

       fwrite(&myvar[i],sizeof(struct std),2,fp);
   }
   fclose(fp);
   fp=fopen("student data.dat","rb");

   if(fp==NULL)
   {
       printf("the file is not read successfully!");
   }
   else
   {

      for(int i=0; i<2; i++)
      {
           fread(&myvar[i],sizeof(struct std),2,fp);
           float sum=0.0;
      for(int j=0; j<8; j++)
      {
          sum=sum+myvar[i].gpa[j];
      }
      float cgp=sum/8;
      if(cgp<3.0)
      {
            printf("%s\t%d\t%d\t%f\n",myvar[i].name,myvar[i].stdid,myvar[i].room,cgp);



      }


      }


   }

    return 0;
}
