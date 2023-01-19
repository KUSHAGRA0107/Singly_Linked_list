#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void Insert_at_end(struct node* *head,int key)
{
    struct node* start=*head;
    struct node *new=(struct node*)malloc(sizeof(struct node));
    new->data=key;
    new->next=NULL;
    if(*head==NULL)
    {
    *head=new;
    }
    else{
    while(start->next!=NULL)
    {
        start=start->next;
    }
    start->next=new;
}}
void PrintList(struct node *head)
{
    struct node* start=head;
    while(start!=NULL)
    {
        printf("%d-->",start->data);
        start=start->next;
    }
}
int main()
{
    struct node * head=NULL;
    int key;
    int n;
    printf("Enter The Size Of Link List \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    printf("Insert The %dth Element ",i+1);
    scanf("%d",&key);
    Insert_at_end(&head,key);
    }
    PrintList(head);   
}