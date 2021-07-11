#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

typedef enum{true=1,false=0}boolean;

typedef struct queue{
    int data[10];
    int size,front,rear;
};
void initializer(struct queue *s);
int isFull(struct queue *s);
int isEmpty(struct queue *s);
void enqueue(struct queue *s,int d);
int dequeue(struct queue *s);
void displsy(struct queue *s );
int getFront(struct queue *s);


void initializer(struct queue *s){
    s->rear=-1;
    s->front=0;
    s->size=0;
}
int isFull(struct queue *s){
    if(s->rear==(SIZE-1))
        return true;
    else
        return false;
}
int isEmpty(struct queue *s){
    if(s->size==0)
        return true;
    else
        return false;
}
void enqueue(struct queue *s,int d){
    if(isFull(s)){
        printf("\n\tQueue id full...");
    }else{
        s->rear++;
        s->data[s->rear]=d;
        s->size++;
        printf("\n\t%d inserted!",d);
    }
}
int dequeue(struct queue *s){
    int x;
    if(isEmpty(s)){
        printf("\n\tQueue id empty...");
    }else{
        x=s->data[s->front];
        s->front++;
        s->size--;
        return x;
    }
}
void displsy(struct queue *s ){
    for(int y=s->front;y<=s->rear;y++){
        printf("\n\t%d element is %d",y+1,s->data[y]);
    }
}
int getFront(struct queue *s){
    int y;
    if(isEmpty(s)){
        printf("Queue is empty...");
    }else{
        y=s->data[s->rear];
        return y;
    }
}



int main()
{

  struct  queue st1,*p;
   p=&st1;
   initializer(p);

   int i,j;
   while(1){
    printf("\n\n1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Recently\n");
        printf("4.Display \n");
        printf("5.Exit \n");
        printf("Enter your choice :");
        scanf("%d",&i);

        switch (i){
            case 1:
                printf("\nEnter value :");
                scanf("%d",&j);
                enqueue(p,j);
                break;
            case 2:
                j=dequeue(p);
                printf("\nDequeued value is %d",j);
                break;
            case 3:
                j=getFront(p);
                printf("\nRecently inserted value is %d",j);
                break;
            case 4:
                displsy(p);

                break;
            case 5:
                break;
        }
   }

}
