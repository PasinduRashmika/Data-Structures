#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    int data;
    struct node *next;
}node;
typedef struct queue{
    struct node *rear;
    struct node *front;
    int size;
}queue;
void initialize(queue *s){
    s->front=NULL;
    s->rear=NULL;
    s->size=0;
}
int isEmpty(queue *s){
    if(s->rear==NULL)
        return 1;
    else
        return 0;
}
void enqueue(queue *s,int d){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=d;
    temp->next=NULL;
    if(isEmpty(s)){
        s->front=s->rear=temp;
    }else{
        s->rear->next=temp;
        s->rear=temp;
    }
    s->size++;

}
void dequeue(queue *s){
    struct node *temp;
    temp=s->front;
    if(isEmpty(s)){
        printf("Queue is Empty");
    }else{
        int x=s->front->data;
        temp=s->front;
        s->front=s->front->next;
        free(temp);

    }
    s->size--;
}
void display(queue *s){
    struct node *temp;
    temp=s->front;
    printf("\n");
    while(temp!=NULL){
        printf("\t%d",temp->data);
        temp=temp->next;
    }

}
void length(queue *s){
    struct node *temp;
    temp=s->front;
    int count=0;
    printf("\n");
    while(temp!=NULL){
            count++;
        temp=temp->next;
    }
    printf("\nLength is %d",count);

}


int main()
{
   queue st1,*p;
   p=&st1;
   initialize(p);
   enqueue(p,10);
   enqueue(p,20);
   enqueue(p,30);
   enqueue(p,40);
   enqueue(p,50);
   display(p);
   length(p);
   dequeue(p);
   dequeue(p);
   display(p);

   enqueue(p,60);
   enqueue(p,70);
   enqueue(p,80);
   enqueue(p,90);
   enqueue(p,100);
   enqueue(p,110);
   display(p);
   length(p);

}
