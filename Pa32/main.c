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
        printf("Queue is empty");
    }else{
        int d;
        struct node *temp;
        temp=s->front;
        d=temp->data;
        s->front=temp->next;
        s->size--;
        free(temp);
        return d;
    }
}
void dispaly(struct queue *s){
    struct node *temp=s->front;
    printf("\n\tDispaly elements\n");
    while(temp!=NULL){
        printf("\t%d",temp->data);
        temp=temp->next;
    }
}
int isEmpty(struct queue *s){
    return s->front==NULL;
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
            dispaly(p);
            break;
        case 4:
            break;
        }

    }
}
