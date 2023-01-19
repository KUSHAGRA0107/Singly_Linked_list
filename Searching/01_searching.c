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
int Searching(int key)
{
    struct node * start=head;
    int count=1;
    while(start!=NULL)
    {
    if(start->data==key)
    {
        return count;
    }
    else 
    {
        count=count+1;
        start=start->next;
    }
    }
    return -1;
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
    printf("\nEnter The Key:\n ");
    scanf("%d",&key);
    int k =Searching(key);
    if(k==-1)
    {
        printf("!!! Element Not Found !!!");
    }
    else{
    printf("The Element %d is found at the index : %d ",key,k);
}}