#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct printqueue{
    char docName[20];
    char userId[20];
    int noOfPages[20];
    int front,rear,size;
};

void initializer(struct printqueue *s);
int isEmpty(struct printqueue *s);
int isFull(struct printqueue *s);
void enqueue(struct printqueue *s,char name[20],char id[20],int pages);
void display(struct printqueue *s);
void recently(struct printqueue *s);
void frontvalue(struct printqueue *s);


void initializer(struct printqueue *s){
    s->rear=-1;
    s->front=0;
    s->size=0;
}
int isEmpty(struct printqueue *s){
    if(s->rear==-1)
        return 1;
    else
        return 0;
}
int isFull(struct printqueue *s){
    if(s->size==19)
        return 1;
    else
        return 0;
}
void enqueue(struct printqueue *s,char name[20],char id[20],int pages){

    if(isFull(s)){
        printf("\nQueue is full...");
    }else{
        s->rear++;
        s->docName[s->rear]=name;
        s->userId[s->rear]=id;
        s->noOfPages[s->rear]=pages;
        s->size++;
        printf("%s %s %d", s->docName[s->rear],s->userId[s->rear],s->noOfPages[s->rear]);

    }
}
int dequeue(struct printqueue *s){
    if(isEmpty(s)){
        printf("\nQueue is empty...");
    }else{
        //int i=s->data[s->front];
        s->front++;
        s->size--;
        printf("\nDequeueed docName is %c",s->docName[s->front]);
        printf("\nDequeueed userId is %c",s->userId[s->front]);
        printf("\nDequeueed userId is %d",s->noOfPages[s->front]);
    }
}
void display(struct printqueue *s){
    int i;
    int j=s->rear;
    for(i=s->front;i<=s->rear;i++){
        printf("\n%s\t",s->docName[s->front]);
        printf("%s\t",s->userId[s->front]);
        printf("%d\t",s->noOfPages[s->front]);
    }
}
void recently(struct printqueue *s){
    printf("\nRecennly added element is %c",s->docName[s->rear]);
    printf("\tRecennly added element is %c",s->userId[s->rear]);
    printf("\tRecennly added element is %d",s->noOfPages[s->rear]);
}
void frontvalue(struct printqueue *s){
    printf("Font value is %c",s->docName[s->front]);
    printf("Font value is %c",s->userId[s->front]);
    printf("Font value is %d",s->noOfPages[s->front]);
}

int main()
{
    struct printqueue q1,*p;
    p=&q1;
    initializer(p);
    int a=1,b,c;
    char docName[20],id[20];

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
                printf("\nEnter your DocName :");
                scanf("%s",docName);
                printf("\nEnter your User Id :");
                scanf("%s",id);
                printf("\nEnter your Pages :");
                scanf("%d",&b);

                enqueue(p,docName,id,b);
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
