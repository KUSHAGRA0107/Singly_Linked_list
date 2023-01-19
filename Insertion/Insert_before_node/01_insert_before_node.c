#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node * head=NULL;
void Insert_at_end(int key)
{
    struct node* start=head;
    struct node *new=(struct node*)malloc(sizeof(struct node));
    new->data=key;
    new->next=NULL;
    if(head==NULL)
    {
    head=new;
    }
    else{
    while(start->next!=NULL)
    {
        start=start->next;
    }
    start->next=new;
}}
void insert_before_node(int key)
{
    struct node* start=head;
    struct node *new=(struct node*)malloc(sizeof(struct node));
    new->data=100;
    while((start->next)->data!=key)
    {
        start=start->next;
    }
    new->next=start->next;
    start->next=new;
}
void PrintList()
{
    struct node* start=head;
    while(start!=NULL)
    {
        printf("%d-->",start->data);
        start=start->next;
    }
    printf("\n");
}
int main()
{
    int key;
    int n;
    printf("Enter The Size Of Link List \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    printf("Insert The %dth Element ",i+1);
    scanf("%d",&key);
    Insert_at_end(key);
    }
    PrintList();   
    insert_before_node(3);
    PrintList();   
}