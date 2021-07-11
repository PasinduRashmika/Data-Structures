#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 20

typedef struct queue{
    int data[SIZE];
    int rear,front,size;
};
typedef enum{true=1,false=0}boolean;

void initializer(struct queue *s){
    s->rear=-1;
    s->front=0;
    s->size=0;
}
boolean isEmpty(struct queue *s){
    if(s->size==0){
        return true;
    }else{
        return false;
    }
}
boolean isFull(struct queue *s){
        if(s->rear==(SIZE-1)){
            return true;
        }else{
            return false;
        }
}

void enqueue(struct queue *s,int d){
    if(isFull(s)){
         printf("Queue is full...");
    }else{
        s->rear++;
        s->data[s->rear]=d;
        s->size++;
    }
}
int dequeue(struct queue *s){
    int i;
    if(isEmpty(s)){
        printf("Queue is Empty....");
    }else{
        i=s->data[s->front];
        s->front++;
        s->size--;
        return i;
    }
}

int main()
{
  struct queue *p,q1;
  p=&q1;
  initializer(p);

}
