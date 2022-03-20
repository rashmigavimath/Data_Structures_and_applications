//UDF to reverse a array.
#include<stdio.h>
int main()
{
 int xyz[10],n;
 printf("Enter n=");
 scanf("%d",&n);
 read_array(xyz,n);
 print_array(xyz,n);
 reverse(xyz,n);
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
  void reverse(int a[10],int n)
  {
   int i,j=n-1,t;
   for(i=0;i<j;i++,j--)
   {
    t=a[i];
    a[i]=a[j];
    a[j]=t;
    }
    printf("\n");
    print_array(a,n);
    }
