#include<stdio.h>

void array(int n, int a[ ])
{
    int i;
    printf("enter the Post test marks (<=10)of the students in first year\n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
 void e_o_score(int n ,int a[])
 {
     int i,e_count=0,o_count=0;
     for(i=0;i<n;i++)
     {
         if(a[i]%2==0)
         {
             e_count++;
         }
         else
         {
             o_count++;
         }
     }
     printf("number of students scored EVEN m= arks = %d\n",e_count);
     printf("number of students scored ODD marks = %d\n",o_count);
 }

 int count100(int n ,int a[])
 {
    int i,count=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==10)
        {
            count++;
        }
    }
    return count;
 }

 void main()
{
    int n,a[100];
    printf("enter number of the students in first year\n");
    scanf("%d",&n);
    array(n,a);
    e_o_score(n,a);
    int count=count100(n,a);
    printf("total number of students who scored 100 percent marks = %d\n",count);
}
