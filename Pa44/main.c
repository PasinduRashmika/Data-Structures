#include <stdio.h>
#include <stdlib.h>

typedef struct queue{
    int data[20];
    int front,rear,size;
};

void initializer(struct queue *s);
int isEmpty(struct queue *s);
int isFull(struct queue *s);
void enqueue(struct queue *s,int d);
int dequeue(struct queue *s);
void display(struct queue *s);
void recently(struct queue *s);
void frontvalue(struct queue *s);


void initializer(struct queue *s){
    s->rear=-1;
    s->front=0;
    s->size=0;
}
int isEmpty(struct queue *s){
    if(s->rear==-1)
        return 1;
    else
        return 0;
}
int isFull(struct queue *s){
    if(s->size==19)
        return 1;
    else
        return 0;
}
void enqueue(struct queue *s,int d){
    if(isFull(s)){
        printf("\nQueue is full...");
    }else{
        s->rear++;
        s->data[s->rear]=d;
        s->size++;
    }
}
int dequeue(struct queue *s){
    if(isEmpty(s)){
        printf("\nQueue is empty...");
    }else{
        int i=s->data[s->front];
        s->front++;
        s->size--;
        printf("\nDequeueed element is %d",i);
    }
}
void display(struct queue *s){
    int i;
    int j=s->rear;
    for(i=s->front;i<=s->rear;i++){
        printf("%d\t",s->data[i]);
    }
}
void recently(struct queue *s){
    printf("\nRecennly added element is %d",s->data[s->rear]);
}
void frontvalue(struct queue *s){
    printf("Font value is %d",s->data[s->front]);
}

int main()
{
    struct queue q1,*p;
    p=&q1;
    initializer(p);
    int a=1,b,c;

    while(a!=6){
        printf("\n\n1.Enqueue");
        printf("\n2.Dequeue");
        printf("\n3.Display");
        printf("\n4.Recently");
        printf("\n5.Front value");
        printf("\n6.Exit");
        printf("\nEnter your choice :");
        scanf("%d",&a);

        switch (a){
            case 1:
                printf("\nEnter your value :");
                scanf("%d",&b);
                enqueue(p,b);
                break;
            case 2:
                dequeue(p);
                break;
            case 3:
                display(p);
                break;
            case 4:
                recently(p);
                break;
            case 5:
                frontvalue(p);
                break;
            default :
                printf("\nInvald input");

        }

    }
}
