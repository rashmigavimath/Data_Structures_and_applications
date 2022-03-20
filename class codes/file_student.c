#include<stdio.h>
#include<stdlib.h>

int main()
{
    char name[20];
    int marks,i,num;
    FILE *fp;
    fp=fopen("student.txt","a");
    if(fp==NULL)
    {
        printf("ERROR!\n");
        exit (1);
    }
    printf("enter number of students\n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("For student%d\tEnter name\n",i+1);
        scanf("%s",name);
        printf("enter marks: \n");
        scanf("%d",&marks);
        fprintf(fp,"%s\n%d\n",name,marks);
    }
    fclose(fp);
    if((fp=fopen("student.txt","r"))==NULL)
    {
        printf("error in opening the file\n");
        exit(1);
    }

    for(;;)
    {
        fscanf(fp,"%s",name);
        fscanf(fp,"%d",&marks);
        printf("%s\n%d\n",name,marks);
        if(feof(fp))
            break;

    }
}
