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
void Delete_From_Beg()
{
    struct  node *temp=head;
    head=head->next;
    free(temp);

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
    Delete_From_Beg();
    printf("\n");
    PrintList();
}
