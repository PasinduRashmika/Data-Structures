#include <stdio.h>
#include <stdlib.h>
#define SIZE 15

typedef struct queue{
    int data[SIZE];
    int size,front,rear;
};
typedef enum{true=1,false=0}boolean;

void initialize(struct queue *s){
    s->size=0;
    s->front=0;
    s->rear=-1;
}
boolean isFull(struct queue *s){
    if(s->rear==SIZE){
        return true;
    }else{
        return false;
    }
}
boolean isEmpty(struct queue *s){
    if(s->size==0){
        return true;
    }else{
        return false;
}
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
    int x;
    if(isEmpty(s)){
        printf("\nQueue is Empty");
    }else{
        x=s->data[s->rear];
        s->size--;
        s->front++;
    }
    return x;
}
int getFront(struct queue *s){
    int x;
    if(isEmpty(s)){
        printf("\nQueue is Empty");
    }else{
        x=s->data[s->rear];
    }
    return x;
}
void dispaly(struct queue *s){
    for(int i=s->front;i<=s->rear;i++){
        printf("\n\t%d element is %d",i+1,s->data[i]);
    }
}

int main()
{
    struct queue st,*p;
    p=&st;
    int i,j;
    initialize(p);
    while(1){
        printf("\n1.Enque");
        printf("\n2.Dequeue");
        printf("\n3.Recently");
        printf("\n4.Display");
        printf("\nExit");
        printf("\nEnter your choice:");
        scanf("%d",&i);

        switch (i){
            case 1:
                printf("\nEnter value :");
                scanf("%d",&j);
                enqueue(p,j);
                break;
            case 2:
                j=dequeue(p);
                printf("Dequeue element is %d ",j);
                break;
            case 3:
                j=getFront(p);
                printf("Recently element is %d ",j);
                break;
            case 4:
                dispaly(p);
                break;
            case 5:
                break;
        }

    }

}
