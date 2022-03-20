//c program que11
#include<stdio.h>
void main()
{
 int i,u[10],N;
 float t;
 printf("Enter the number of flats\n");
 scanf("%d",&N);
 for(i=0;i<N;i++)
 {
 printf("Enter the unit consumed by the flat number %d\n",i);
 scanf("%d",&u[i]);
 }
 total_bill(u,N);
}

int total_bill(int u[ ],int N)
{
 int i;
 float t=0;
for(i=0;i<N;i++)
{
 if(u[i]>0 && u[i]<=100)
  {
  t=u[i]*1.5;
  printf("Total_Bill=%f",t);
  }
  else if(u[i]>100 && u[i]<=250)
   {
   t=(100*1.5)+(u[i]-100)*2.3;
   printf("Total_Bill=%f",t);
   }
  else if(u[i]>250 && u[i]<=600)
   {
   t=(100*1.5)+(150*2.3)+(u[i]-250)*4;
   printf("Total_Bill=%f",t);
   }
   else if(u[i]>600)
    {
    t=(100*1.5)+(150*2.3)+(350*4)+(u[i]-600)*5.5;
    printf("Total_Bill=%f",t);
    }
    else
     {
     printf("Invalid input");
     }
   }
}
