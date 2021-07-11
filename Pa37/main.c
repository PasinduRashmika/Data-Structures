#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
};
typedef struct list{
    struct node *top;
};
void ini(struct list *s){
    s->top=NULL;
}
int isEmpty(struct list *s){
    if(s->top==NULL)
        return 1 ;
    else
        return 0;
}
void AddAtBe(struct list *s,int d){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=d;
    temp->next=NULL;
    if(isEmpty(s)){
        s->top=temp;
        s->top->next=NULL;
    }else{
        temp->next=s->top;
        s->top=temp;
    }
}
void AddAtEnd(struct list *s,int d){
    struct node *nw,*temp;
    nw=(struct node*)malloc(sizeof(struct node));
    nw->data=d;
    nw->next=NULL;
    temp=s->top;
    if(isEmpty(s)){
        s->top=nw;
    }else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=nw;
    }
}
void display(struct list *s){
    struct node *temp;
    temp=s->top;
    while(temp->next!=NULL){
        printf("\n%d is a element",temp->data);
        temp=temp->next;
    }
}

int main()
{
    struct list ls,*p;
    p=&ls;

    ini(p);
    AddAtBe(p,10);
    AddAtBe(p,20);
    AddAtBe(p,30);
    AddAtBe(p,40);
    AddAtEnd(p,100);
    display(p);
}
