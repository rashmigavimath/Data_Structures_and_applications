//UDF to find the number of prime numbers que10.
#include<stdio.h>
int main()
{
 int xyz[10],n,p,count;
 printf("Enter n=");
 scanf("%d",&n);
 read_array(xyz,n);
 print_array(xyz,n);
 p=prime(xyz,n);
 }

 void read_array(int abc[10],int n)
 {
  int i;
  for(i=0;i<n;i++)
  {
  scanf("%d",&abc[i]);
  }
  }

  void print_array(int abc[10],int n)
  {
   int i;
   for(i=0;i<n;i++)
   printf("%d\t",abc[i]);
   }

   void prime(int a[10],int n)
   {
    int i,flag,j;
    for(i=0;i<n;i++)
    {
     flag=0;
     for(j=2;j<=a[i]/2;j++)
     {
      if(a[i]%j==0)
      flag=1;
      }
      if(flag==0)
      {
      printf("\n%d is the prime number\n",a[i]);
      }
    }
    }
