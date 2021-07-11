#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 20

typedef struct queue{
    int data[SIZE];
    int rear,front,size;
};

void initiation(struct queue *s){
    s->rear=-1;
    s->front=0;
    s->size=0;
}
int isFull(struct queue *s){
    if(s->rear==(SIZE-1)){
        return 1;
    }else{
        return 0;
    }
}
int isEmpty(struct queue *s){
    if(s->size==0){
        return 1;
    }else{
        return 0;
    }
}
void enqueue(struct queue *s,int d){
    if(isFull(s)){
        printf("\n\tQueue is full...");
    }else{
        s->rear++;
        s->data[s->rear]=d;
        s->size++;
    }
}
int dequeue(struct queue *s){
    if(isEmpty(s)){
        printf("\n\tQueue is empty...");
    }else{
        int x=s->data[s->front];

        s->front++;
        s->size--;
        return x;
    }
}
int recently(struct queue *s){
    if(isEmpty(s)){
        printf("\n\tQueue is empty...");
    }else{
        int x=s->data[s->rear];
        return x;
    }
}
void display(struct queue *s){
    for(int x=s->front;x<=s->rear;x++){
        printf("\n\t%d",s->data[x]);
    }
}

int main()
{
    struct queue q1,*p;
    p=&q1;
    initiation(p);
    int x,y;

    while(1){
        printf("\n1.Enqueue");
        printf("\n2.Dequeue");
        printf("\n3.Recently");
        printf("\n4.Display");
        printf("\n5.Exit");
        printf("\nEnter your choice :");
        scanf("%d",&x);

        switch(x){
            case 1:
                printf("\nEnter your value :");
                scanf("%d",&y);
                enqueue(p,y);
                printf("\n\t%d is inserted...",y);
                break;
            case 2:
                y=dequeue(p);
                printf("\n\t%d is dequeued.",y);
                break;
            case 3:
                y=recently(p);
                printf("\n\tRecently inserted =%d",y);
                break;
            case 4:
                display(p);
                break;
            case 5:
                break;

        }

    }
}
