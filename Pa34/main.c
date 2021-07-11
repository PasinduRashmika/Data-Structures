#include <stdio.h>
#include <stdlib.h>
typedef struct cusNode{
    char name[20];
    int accNO;
    struct cusNode *next;
};
typedef struct cusQueue{
    struct cusNode *rear;
    struct cusNode *front;
    int size;
};
void cusIni(struct cusQueue *s){
    s->rear=NULL;
    s->front=NULL;
    s->size=0;
}
int isEmpty(struct cusQueue *s){
    int x;
    if(s->front==NULL)
        return 1;
     else
            return 0;

}
void enqueue(struct cusQueue *s,char name1[20],int d){
    struct cusNode *temp;
    temp=(struct cusNode* )malloc(sizeof(struct cusNode));
    temp->name=name1[20];
    temp->accNO=d;
    temp->next=NULL;

    if(isEmpty(s)){
        s->rear=s->front=temp;
    }else{
        s->rear->next=temp;
        s->rear=temp;
    }
    s->size++;
}
void deueue(struct cusQueue *s){
    struct cusNode *temp;
    temp=s->front;
    if(isEmpty(s)){
        printf("Queue is empty");
    }else{
        char name1=s->front->name;
        int acc=temp->accNo;
        printf("%s",name1);
        printf("%d",acc);
        s->front=s->front->next;
        free(temp);
        s->size--;
    }
}
void dispaly(struct cusQueue *s){
    struct cusNode *temp;
    temp=s->front;

    while(temp!=NULL){
        printf("\t%d %s",temp->accNO,temp->name);
        temp=temp->next;
    }
}
int count(struct cusQueue *s){
    int x=0;
    struct cusNode *temp;
    temp=s->front;

    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    printf("\nNumber of customers is %d",x);
}
void search((struct cusQueue *s){

}

int main()
{
    struct cusNode st,*p;
    p=&st;
    cusIni(p);
    char c[20];
    int a;
    for(int i=0;i<5;i++){
        printf("\n\nEnter AcccNo :");
        scanf("%d",&a);
        printf("\nEnter Name :");
        scanf("%s",c);
        enqueue(p,c,a);
    }

    dispaly(p);
    count(p);


}
