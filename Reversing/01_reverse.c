#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node * head=NULL;
void Insert_at_beggining(int key)
{
    struct node *new=(struct node*)malloc(sizeof(struct node));
    new->data=key;
    new->next=head;
    head=new;
    }
void reverse_link_list()
{
   struct node*prev=NULL;
    struct node*current=head;
    struct node*next=NULL;
    while(current!=NULL)
    { 
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
  head=prev;
}
void PrintList()
{
    struct node* start=head;
    while(start!=NULL)
    {
        printf("%d-->",start->data);
        start=start->next;
    }
}
void PrintList2()
{
    struct node* start=head;
    while(start!=NULL)
    {
        printf("<--%d",start->data);
        start=start->next;
    }
}
int main()
{
    int key;
    for(int i=0;i<5;i++)
    {printf("Enter The %dth Value ",i+1);
    scanf("%d",&key);
    Insert_at_beggining(key);
    }
    printf("HEAD-->");

    PrintList();

    printf("NULL\n");

    reverse_link_list();

    printf("NULL");

    PrintList2();

    printf("<--HEAD");

        }