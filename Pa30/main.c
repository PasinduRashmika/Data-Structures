#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
};
typedef struct queue{
    struct node *rear;
    struct node *front;
    int size;
};

void iniQueue(struct queue *s){
    s->rear=NULL;
    s->front=NULL;
    s->size=0;
}
int isEmpty(struct queue *s){
    return s->front==NULL;
}
void enqueue(struct queue *s,int d){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=d;
    temp->next=NULL;
    if(isEmpty(s)){
        s->rear=s->front=NULL;
    }else{
        s->rear->next=temp;
        s->rear=temp;
    }
    s->size++;
}


int main()
{
   struct queue st,*p;
   p=&st;
   iniQueue(p);
}
