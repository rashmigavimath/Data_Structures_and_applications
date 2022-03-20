#include<stdio.h>
#include<stdlib.h>

struct student
{
    char name[20];
    int roll;
};

void main()
{
    FILE *fp;
    struct student c;
    fp=fopen("sample1.txt","w");
    if(fp==NULL)
    {
        printf("error in opening th file\n");
        exit (0);
    }
    printf("enter name and roll no.\n");
    while((c.name=getchar())!=EOF)
    {
        fputc(c.name,fp);
        scanf("%d",&c.roll);
    }
        fclose(fp);
        printf("file contains \n");
    fp=fopen("sample1.txt","r");
        while((c=fgetc(fp))!=EOF)
    putchar(c);
    fclose(fp);
}
