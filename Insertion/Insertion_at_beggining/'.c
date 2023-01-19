#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
struct queue{
    int a[SIZE];
    int rear=-1;   
    int front=-1;  
};
typedef struct queue queue;
void IsEmpty()
{
    if(front==-1)
    printf("!! Empty Queue !!");
}
void IsFull()
{
    if(front==n-1)
    printf("!! Full Queue !!");
}
void enqueue(int n)
{
  a[rear]=n;

}
int main()
{
printf("%d",queue.rear);
enqueue(4);

}
