#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node *next;
};
typedef struct list{
    struct node *head;
};

void ini(struct list *s){
    s->head=NULL;
}
int isEmpty(struct list *s){
    if(s->head==NULL)
        return 1;
    else
        return 0;
}
void AddAtBeg(struct list *s,int d){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=d;
    temp->next=NULL;
    if(isEmpty(s)){
        s->head=temp;
        temp->next=NULL;
    }else{
        temp->next=s->head;
        s->head=temp;
    }
}
void AddAtEnd(struct list *s,int d){
    struct node *nw=(struct node*)malloc(sizeof(struct node));
    struct node *temp;
    nw->data=d;
    nw->next=NULL;
    if(isEmpty(s)){
        s->head=nw;
    }else{
        temp=s->head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=nw;
    }
}
void dispaly(struct list *s){
     struct node *temp;
     temp=s->head;
     while(temp!=NULL){
        printf("Element id %d",temp->data);
        temp=temp->next;
     }
}
int length(struct list *s){
     struct node *temp;
     int count=0;
     temp=s->head;
     while(temp!=NULL){
        count++;
        temp=temp->next;
     }
     return count;
}
void AddAtMid(struct list *s,int d,int loc){
    int len=length(s);
    int i=1;
    struct node *nw=(struct node*)malloc(sizeof(struct node));
    struct node *temp;
    if(loc>count+1){
        printf("Invald location");
    }else if(loc==1){
            AddAtBeg(s,d);
    }else if(loc==count+1){
            AddAtEnd(s,d);
    }else{
         nw->data=d;
         temp=s->head;
         nw->next=NULL;
         while(i<loc-1){
            temp=temp->next;
            i++;
         }
        nw->next=temp->next;
        temp->naxt=nw;
    }

}

int main()
{

}
