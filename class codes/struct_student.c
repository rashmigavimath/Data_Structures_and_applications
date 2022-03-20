#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[20];
    float percentage;
};

void func(struct student record)
{
    printf("Id is %d\n",record.id);
    printf("Name is: %s\n",record.name);
    printf("percentage is :0.2%f\n",record.percentage);
}

int main()
{
    struct student record;
    record.id=1;
    record.percentage=86.5;
    strcpy(record.name,"Raju");
    func(record);
}
