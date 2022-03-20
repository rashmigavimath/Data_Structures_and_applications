#include<stdio.h>
#include<stdlib.h>
void read(int a[],int n);
void disp(int a[],int n);
void perf(int a[],int n);
int main()
{
    int a[100],i,n;

    printf("enter the size of array");
    scanf("%d",&n);

    if(n<=0||n>100)
    {
        printf("invalid array size");
        exit(0);
    }
    read(a,n);
    disp(a,n);
    perf(a,n);

}

    void read(int a[],int n)
    {
        int i;

        printf("enter the elements in array");

        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
    }

    void disp(int a[],int n)
    {
        int i;

        printf("display elements in an array");
        for(i=0;i<n;i++)
        {
            printf("%d\n",a[i]);
        }
    }

    void perf(int a[],int n)
    {
        int num, rem, sum = 0, i;

        printf("Enter a number\n");
        scanf("%d", &num);

        for(i = 1; i < num; i++)
                     {
        rem = num % i;
        if (rem == 0)
    {
        sum = sum + i;
    }
                        }
           if (sum == num)

                      printf(" %d is a Perfect Number");
           else
                      printf("\n %d is not a Perfect Number");

      }
