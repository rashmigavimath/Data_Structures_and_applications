//inset an element in an array
#include<stdio.h>
void array(int n,int [ ]);
void insert(int n, int [],int []);
void main()
{
    int n,a[100],b[100];
    printf("enter the number of elements in an array\n");
    scanf("%d",&n);
    array(n,a);
    insert(n,a,b);
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
void insert(int n, int a[],int b[])
{
    int key,loc,i,j,k;
    for(j=0;j<n;j++)
    {
        b[j]=a[j];
    }
    printf("enter the location\n");
    scanf("%d",&loc);
    printf("enter the number to be inserted\n");
    scanf("%d",&key);
    a[loc]=key;
    n++;
    if(loc<=n)
    {
        for(i=loc;i<n;i++)
        {
            a[i+1]=b[i];
        }
        printf("new array\n");
        for(k=0;k<n;k++)
        {

            printf(" %d \n",a[k]);
        }
    }
    else
        printf("number can't be inserted\n");
}
