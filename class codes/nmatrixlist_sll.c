
#include<stdio.h>
#include<stdlib.h>
typedef struct MATRICES
{
    int data1,data2,data3,data4;
    struct MATRICES *next;
}*NODE;

NODE getnewnode()
{
    NODE newn;
    newn=(NODE)malloc(sizeof(struct MATRICES));
    if(newn==NULL)
    {
        printf("memory not allocated\n");
        exit (0);
    }
    newn->next=NULL;
    return newn;
}
NODE get_details()
{
    NODE newn;
    newn=getnewnode();
    printf("enter the matrix\n");
    scanf("%d%d%d%d",&newn->data1,&newn->data2,&newn->data3,&newn->data4);
    return newn;
}

NODE insert_front(NODE head)
{
    NODE newn;
    newn=get_details();
    newn->next=NULL;
    if(head==NULL)
    {
        head=newn;
        return newn;
    }
    newn->next=head;
    head=newn;
    return head;
}

NODE delete_front(NODE head)
{
    NODE temp,cur;

    if(head==NULL)
    {
        free(head);
        return NULL;
    }
    else
    {
        cur=head;
        head=head->next;
        free(cur);
    }

    return head;
}

void display(NODE head)
{
    NODE cur;
    cur=head;
    if(head==NULL)
    {
        printf("memory not allocated\n");

    }
    printf("\n");
    while(cur!=NULL)
    {
        printf("%d\t%d\n%d\t%d\n",cur->data1,cur->data2,cur->data3,cur->data4);
        cur=cur->next;
        printf("\n\n");
    }

}

int main()
{
    NODE head;
    int n,i,j,m[10],k;
    printf("enter number of list\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter number of matrices\n");
        scanf("%d",&m[i]);
        for(j=0;j<m[i];j++)
        {
            head=insert_front(head);
        }
    }
    for(j=0;j<n;j++)
    {
        head=delete_front(head);
    }

    printf("list of matrices after deletion\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m[i];j++)
        {
            printf("list %d\n",i+1);
            display(head);
        }
    }



    return 0;
}
