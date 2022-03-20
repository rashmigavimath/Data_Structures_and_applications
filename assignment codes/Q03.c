#include<stdio.h>
void array(int n,int []);
int bonus(int n ,int []);

void main()
{
    int n,a[100],flag;
    printf("enter the number of employees in the company\n");
    scanf("%d",&n);
    array(n,a);
    printf("the salary of N employees after getting bonus\n");
    bonus(n,a);
}

void array(int n,int a[ ])
{
    int i,j=0;
    printf("enter experience(years) of the employee \n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

int bonus(int n, int a[])
{
    int i,b[100];
    for(i=0;i<n;i++)
    {
        if((a[i]>=5) && (a[i]<=7))
        {
            b[i]=10600+10600*0.1;
            printf("%d\t",b[i]);
        }
        else if((a[i]>=8)&&(a[i]<=10))
        {
            b[i]=21300+21300*0.2;
            printf("%d\t",b[i]);
        }
        else if(a[i]>=10)
        {
            b[i]=32100+32100*0.3;
            printf("%d\t",b[i]);
        }
        else
            printf("no bonus\t");
    }
    return (0);
}
