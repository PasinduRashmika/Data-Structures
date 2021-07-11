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

void ini(struct queue *s){
    s->rear=NULL;
    s->front=NULL;
    s->size=0;
}
int isEmpty(struct queue *s){
    return s->front==NULL;
}
void enqueue(struct queue *s,int d){
    struct node *tmp;
    tmp=(struct node*)malloc(sizeof(struct node));
    tmp->data=d;
    tmp->next=NULL;
    if(isEmpty(s)){
        s->rear=s->front=tmp;
    }else{
        s->rear->next=tmp;
        s->rear=tmp;
    }
    s->size++;
}
int dequeue(struct queue *s){
    struct node *tmp;
    tmp=s->front;
    int d=tmp->data;
    s->front=s->front->next;
    free(tmp);
    return d;
    s->size--;
}
void display(struct queue *s){
    struct node *tmp;
    tmp=s->front;
    while(tmp!=NULL){
        printf("\t%d",tmp->data);
        tmp=tmp->next;
    }
}

int main()
{
    struct queue st,*p;
    p=&st;
    ini(p);
    int ch,x;
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
            display(p);
            break;
        case 4:
            break;
        }

    }
}
