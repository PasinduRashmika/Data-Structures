#include <stdio.h>
#include <stdlib.h>
typedef enum{True=1,False=0}boolean;

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
    s->front=NULL;
    s->rear=NULL;
    s->size=0;
}
boolean isEmpty(struct queue *s){
    if(s->front==NULL)
        return True;
    else
        return False;

}
void enqueue(struct queue *s,int x){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
    if(isEmpty(s)){
        s->rear=s->front=temp;
    }else{
        s->rear->next=temp;
        s->rear=temp;
    }
    s->size++;

}
int dequeue(struct queue *s){
    if(isEmpty(s)){
        printf("Queue is empty");
    }else{
        struct node *temp;
        temp=s->front;
        int x=temp->data;
        s->front=s->front->next;
        s->size--;
        free(temp);
        return x;
    }

}
void display(struct queue *s){
    struct node *temp;
    temp=s->front;
    printf("\n");
    while(temp!=NULL){
        printf("%d",temp->data);
        printf("\t|\t");
        temp=temp->next;
    }
}



int main()
{

    struct node queue,*p;
    p=&queue;
    iniQueue(p);

    enqueue(p,10);
    enqueue(p,20);
    enqueue(p,30);
    enqueue(p,40);
    display(p);
    dequeue(p);
    dequeue(p);
    display(p);


}
