#include<stdio.h>
#include<stdlib.h>
typedef struct NODES
{
    int data;
    struct NODES *next;
}*NODE;


NODE getnewnode()
{
    NODE newn;
    newn=(NODE)malloc(sizeof(struct NODES));
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

NODE insert_end (NODE head)
{
    NODE newn, cur;
    newn= get_details();
    newn->next = NULL;
    if(head==NULL)
        return newn;
    cur = head;
    while (cur->next != NULL)
    {
        cur = cur->next;
    }
    cur -> next = newn;
    return head;
}


NODE delete_front(NODE head)
{
    NODE temp,cur;

    if(head==NULL)
    {
        printf("list is empty\n");
    }
    if(head->next==NULL)
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

NODE delete_end(NODE head)
{
    NODE prev, cur;
    if(head==NULL)
    {
        printf("List Empty\n");
        return head;
    }
    if(head->next==NULL)
    {
        printf("Deleted: %s\n", head->data);
        free(head);
        return NULL;
    }
    prev =NULL;
    cur =head;
    while(cur ->next != NULL)
    {
        prev= cur;
        cur = cur ->next;
    }
    printf("Deleted: %s\n", cur->data);
    free(cur);
    prev->next=NULL;
    return head;
}



void display_list (NODE head)
{
    NODE cur;
    if(head==NULL)
    {
        printf("Empty List\n");
    }
    cur = head;
    printf("list is \n");
    while (cur != NULL)
    {
        printf("%d\n",cur->data);
        cur = cur ->next;
    }
}
int main()
{
    int choice;
    NODE head;
    while(1)
    {
        printf("enter the choice\n");
        printf("1.insert front\t2.insert end\t3.delete front\t4.delete end\t 5.display\t 6.exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: head=insert_front(head);
                    break;
            case 2: head=insert_end(head);
                    break;
            case 3: head=delete_front(head);
                    break;
            case 4: head=delete_end(head);
                    break;
            case 5: display_list(head);
                    break;
            case 6: exit(0);
                    break;
        }
    }
}
