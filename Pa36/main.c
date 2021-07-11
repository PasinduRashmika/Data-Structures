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
        return 1;
    else
        return 0;
}
void AddAtFirst(struct list *s,int d){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
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
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    struct node *temp2;
    temp->data=d;
    temp->next=NULL;
    temp2=s->top;
    if(isEmpty(s)){
        s->top=temp;
    }else{
        while(temp2->next!=NULL){
            temp2=temp2->next;
        }
        temp2->next=temp;

    }

}
void display(struct list *s){
    struct node *temp;
    temp=s->top;
    while(temp!=NULL){
        printf("\nElement is %d",temp->data);
        temp=temp->next;
    }
}
int length(struct list *s){
    struct node *temp;
    temp=s->top;
    int count=0;
    while(temp->next!=NULL){
        count++;
        temp=temp->next;
    }
    return length;
}
/*void AddAt(struct node *s,int d,int lo){
    int len,i=1;
    len=length(s);
    struct node *nw,*temp;
    nw=(struct node*)malloc(sizeof(struct node));
    nw->data=d;
    temp=s->top;
    if(lo>len+1){
        printf("\ninvalid input location");
    }else if(lo==len+1){
            AddAtEnd(s,d);
    }else if(lo==1){
            AddAtFirst(s,d);
    }else{
            while(i<lo-1){
                i++;
                temp=temp->next;
            }
            nw->next=temp->next;
            temp->next=nw;
    }

}
*/
int main()
{
    struct list ls,*p;
    p=&ls;
    ini(p);
    AddAtFirst(p,10);
    AddAtFirst(p,20);
    AddAtFirst(p,30);
    AddAtFirst(p,40);
    AddAtEnd(p,100);
    display(p);

}
