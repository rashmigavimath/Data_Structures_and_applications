#include<stdio.h>
void array(int n, int a[ ])
{
    int i;
    printf("enter 3 digit number \n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

void display(int n,int a[])
{
    int i;
    printf("array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

int max_digit(int n, int a[],int max[])
{
    int i,rem[10];
    for(int j=0;j<n;j++)
    {
        while(a[j]!=0)
        {
            rem[j]=a[j]%10;
            a[j]=a[j]/10;
        }
        max[j] =rem[0];
        for (int k= 0;k< n; k++)
        {
            if(rem[k]!=0)
            {
                if (rem[k]>max[j])
            {
                max[j] = rem[k];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",max[i]);
    }
    return 0;
}

int sum_max(int n,int a[],int max[])
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+max[i];
    }
    printf("sum of maximum digits = %d\n",sum);
    return sum;
}

int main()
{
    int n,a[100],max[100],sum=0;
    printf("enter number of the elements\n");
    scanf("%d",&n);
    array(n,a);
    display(n,a);
    max_digit(n,a,max);
    sum=sum_max(n,a,max);
    printf("sum of maximum digits = %d\n",sum);
    return 0;
}
