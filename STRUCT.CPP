#include<stdio.h>
#include<conio.h>

{
 char usn[20];
 char name[20];
 char subject[20];
 char marks[20];
 char grade[10];
 char sgpa[10];
 }s1;

   int main()
   int i,a,b,c,d,f,credit[10],gradep[10],sumcredit[100] ;

   struct student s1

   printf("enter the usn of student");
   scanf("%s",&s1.usn);
   printf("enter the name of the student");
   scanf("%s",&s1.name);
   printf("enter the subject);
  scanf("%s",&s1.subject);

  for (i=0;i<5;i++)
  {
    printf(" enter the marks of sunject %s");
    scanf("%s",&s1.marks);
    printf("enter the credit of subject %s");

    if(100>=s1.marks[i]>90)
      {
      grade[i]='s';
      gradep[i]=10;

     }
      else if (90>=s1.marks[i]>=75)
      {
      grade[i]='a';
      gradep[i]=9;
      }

      else if (74>=s1.marks[i]>=61)
      {
       grade[i]='b';
       gradep[i]=8;
       }
       elseif (60>=s1.marks[i]>=51)
       {
       grade[i]='c';
       gradep[i]=7;
       }
       else if (50>=s1.marks[i]=41)
       {
       grade[i]='d';
       gardep[i]=6
       }
       elseif (40>=s1.marks)
       {
       grade[i]='f';
       gardep[i]=0;
       }
     }

 getch();
 return 0;