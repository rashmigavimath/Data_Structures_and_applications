#include<stdio.h>
#include<stdlib.h>
typedef struct MATRICES
{
    int data;
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
    printf("enter the data\n");
    scanf("%d",&newn->data);
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

NODE swap_pairwise(NODE head)
{
    NODE temp=NULL,prev,cur,org;
    prev=head->next;
    org=head->next;

    cur=head;
    int count=1;
    printf("cur=%d\n",cur->data);

    while(cur->next!=NULL)
    {

        if((count%2)!=0)
        {

            temp=cur;
            printf("temp=%d\n",temp->data);
            cur=cur->next;
            printf("cur=%d\n",cur->data);
            prev=temp;
            prev->next=cur;
            printf("prev=%d\n",prev->data);


        }
        else
        {

            cur=cur->next;
            printf("cur=%d\n",cur->data);

        }
        count++;
    }

    head=org;
    printf("head =%d\n",org->data);
    prev->next=NULL;


}

void display(NODE head,int n)
{
    NODE cur;
    cur=head;
    if(head==NULL)
    {
        printf("memory not allocated\n");

    }
    else
    {

        for(int i=0;i<n;i++)
        {
            printf("%d\n",cur->data);
            cur=cur->next;
            printf("\n");
        }
    }
}

int main()
{
    NODE head;
    int n,i;
    printf("enter the number of NODES\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        head=insert_front(head);
    }
    display(head,n);
    display(head,n);
    for(i=0;i<n;i++)
    {
        swap_pairwise(head);
    }
    printf("list of nodes after swap\n");
    display(head,n);

}

