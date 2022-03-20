#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Node{
    int rows;
    int cols;
    int array[100][100];
    struct Node* next;
}typedef node;

node* head;

node* CreateMatrix(node *temp)
{
    int rows=temp->rows;
    int cols=temp->cols;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            scanf("%d",&temp->array[i][j]);
        }
    }
    return temp;
}

void InsertEnd()
{
    int rowsss,colsss;
    printf("enter number of rows and columns\n");
    scanf("%d%d",&rowsss,&colsss);
    node temp=(node)malloc(sizeof(struct Node));
    temp->rows=rowsss;
    temp->cols=colsss;
    temp=CreateMatrix(temp);
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
    node* temp1;
        temp1=head;
        while(temp1->next!=NULL){
            temp1=temp1->next;
        }
        temp1->next=temp;
        temp->next=NULL;
    }
}


void DisplayEnd(){
    node* temp=head;
    while(temp!=NULL)
    {
            for(int i=0;i<temp->rows;i++)
    {
        for(int j=0;j<temp->cols;j++)
        {
            printf("%d \t",temp->array[i][j]);

        }
    printf("\n");
    printf("\n");

    }
        temp=temp->next;

    }

    printf("\n");
}

void Delete()
{
     node *temp = head;
    int i;
    int pos;
    printf("enter the position to delete\n");
    scanf("%d",&pos);
    if(pos==0)
    {
        head=head->next;
        temp->next=NULL;
        free(temp);
    }
    else
    {
        for(i=0;i<pos-1;i++)
        {
            temp=temp->next;
        }

        node *del =temp->next;
        temp->next=temp->next->next;
        del->next=NULL;
        free(del);
    }
    return ;
}

int main()
{
    head=NULL;
    do
    {
        printf("enter 1.Insert\n 2.display\n 3.delete\n");
        int c;
        scanf("%d",&c);
        switch (c)
        {
        case 1:
            InsertEnd();
            break;
        case 2:
        DisplayEnd();
        break;
        case 3:
        Delete();
        break;
        default:
            break;
        }
    }while(1);
}
