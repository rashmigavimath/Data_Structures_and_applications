//count of positive and negative numbers
#include<stdio.h>
void array(int n,int [ ]);
int pos_number(int n, int []);
int neg_number(int n, int []);

int main()
{
    int n,a[100],b[100],pos_count=0,neg_count=0;
    printf("enter the number of elements in an array\n");
    scanf("%d",&n);
    array(n,a);
    pos_count=pos_number(n,a);
    neg_count=neg_number(n,a);
    printf("\npostive count = %d\n",pos_count);
    printf("negative count = %d\n",neg_count);
    return 0;
}

void array(int n,int a[ ])
{
    int i,j=0;
    printf("enter numbers in an array \n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array is\n");
    for(j=0;j<n;j++)
    {
        printf(" %d \n",a[j]);
    }
}

int pos_number(int n,int a[])
{
    int pos_count=0,i;
    printf("positive numbers are: \n");
    for(i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            pos_count++;
            printf(" %d ",a[i]);
        }
    }
    return pos_count;
}

int neg_number(int n,int a[])
{
    int neg_count=0,i;
    printf("\nnegative numbers are: \n");
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            neg_count++;
            printf(" %d ",a[i]);
        }
    }
    return neg_count;
}
