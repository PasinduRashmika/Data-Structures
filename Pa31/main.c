#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    int x;
     if(s->front==NULL){
           x=1;
     }else{
            x=0;
     }
     return x;
}
void enqueue(struct queue *s,int d){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=d;
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
        printf("\nQueue is empty");
    }else{
        int x;
        struct node *temp;
        temp=s->front;
        x=temp->data;
        s->front=s->front->next;
        s->size--;
        free(temp);
        return x;
    }
}
void dispaly(struct queue *s){
    struct node *temp=s->front;
    printf("\n\n\t====Dispaly elements====\n");
    while(temp!=NULL){
        printf("\t%d",temp->data);
        printf("\t|");
        temp=temp->next;
    }

}

int main()
{
    struct queue st,*p;
    p=&st;
    iniQueue(p);
   /* int ch,x;
    while(1){
        printf("\nEnter your choice :");
        scanf("%d",&ch);
        switch (ch){
        case 1:
            printf("\nEnter value :");
            scanf("%d",&x);
            enqueue(p,x);
            break;
        case 2:
            x=dequeue(p);
            printf("\n\t%d",x);
            break;
        case 3:
            dispaly(p);
            break;
        case 4:
            break;
        }

}*/
    int x,y;
    for(int i=0;i<5;i++){
       printf("\nEnter value :");
            scanf("%d",&x);
            enqueue(p,x);
            printf("\n\t%d inserted.",x);
    }

    dispaly(p);
    printf("\n\tSize of queue is %d",p->size);

     for(int i=0;i<2;i++){
        y=dequeue(p);
        printf("\n\t%d is deleted.",y);
    }

    dispaly(p);
    printf("\n\n\tSize of queue is %d",p->size);

     for(int i=0;i<6;i++){
       printf("\nEnter value :");
            scanf("%d",&x);
            enqueue(p,x);
            printf("\n\t%d inserted.",x);
    }

    dispaly(p);
    printf("\n\n\tSize of queue is %d",p->size);
}
