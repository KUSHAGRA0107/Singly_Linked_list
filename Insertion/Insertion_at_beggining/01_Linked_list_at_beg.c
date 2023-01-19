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
void Insert_at_end(int key)
{
    struct node *new=(struct node*)malloc(sizeof(struct node));
    new->data=key;
    new->next=NULL;
    if(head==NULL)//case 1
    {
    head=new;
    }
    else{
    struct node* start=head;//we will use for case 2
    while(start->next!=NULL)
    {
        start=start->next;
    }
    start->next=new;
}}
void PrintList()
{
    struct node* start=head;
    while(start!=NULL)
    {
        printf("%d-->",start->data);
        start=start->next;
    }
}
void countthelink(){
     int count=0;
    struct node *start= head;
    while(start!=NULL){
       start=start->next;
       count++;
    }
printf("The Count is %d ",count);
}
int main()
{
    int key;
    scanf("%d",&key);
    for(int i=0;i<20;i++)
    {Insert_at_beggining(key);
    key++;
    }
    printf("HEAD-->");
    PrintList();
    printf("NULL");
    countthelink();
        }