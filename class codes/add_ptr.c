#include <stdio.h>

int main()
{
    int first, second, *p, *q, sum;

    printf("Enter two integers to add\n");
    scanf("%d%d", &first, &second);
    p = &first;
    q = &second;
    sum=add_num(p,q);
    printf("Sum of entered numbers = %d\n",sum);
    return 0;
}
int add_num(int *p,int *q)
{
    int sum=0;
    sum = *p + *q;
    return sum;
}
