#include <stdio.h>
#include <stdlib.h>
#define MAX 20
typedef enum{True=1,False=0}boolean;

typedef struct node{
    int data;
    struct node *next;
};
typedef struct list{
    struct node *head;
};
void initializer(struct list *l);
boolean isEmpty(struct list *l);
void addFirst(struct list *l,int x);
void display(struct list *l);
void addEnd(struct list *l,int x);
void search(struct list *l,int x);
int length(struct list *l);
void addAt(struct list *l,int x,int loc);


void initializer(struct list *l){
    l->head=NULL;
}
boolean isEmpty(struct list *l){
    if(l->head==NULL){
        return True;
    }else{
        return False;
    }
}
void addFirst(struct list *l,int x){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    if(isEmpty(l)){
        l->head=temp;
        temp->next=NULL;
        l->head->next=NULL;
    }else{
        temp->next=l->head;
        l->head=temp;
    }
}
void display(struct list *l){
    struct node *temp;
    temp=l->head;
    printf("\n");
    while(temp!=NULL){
        printf("\%d\t",temp->data);
        temp=temp->next;
    }
}
void addEnd(struct list *l,int x){
    struct node *nw=(struct node*)malloc(sizeof(struct node));
    struct node *temp;
    nw->data=x;
    nw->next=NULL;
    temp=l->head;
    if(isEmpty(l)){
        l->head=nw;
    }else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=nw;

    }
}
void search(struct list *l,int x){
    struct node *temp;
    temp=l->head;
    int i=0;
    while(temp->next!=NULL){
        if(temp->data==x){
        i=1;
        }
        temp=temp->next;
    }
    if(i==0){
        printf("\nThere is no searched element");
    }else{
         printf("\nThere is a searched element");
    }
}
int length(struct list *l){
    struct node *temp;
    temp=l->head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    printf("\nLength is %d",count);
    return count;
}

void addAt(struct list *l,int x,int loc){
    struct node *nw=(struct node*)malloc(sizeof(struct node));
    struct node *temp;
    int i=length(l);
    int j=1;
    if(loc>i+1){
        printf("Invalid location.");
    }else if(loc==1){
        addFirst(l,x);
    }else if(loc==i+1){
        addEnd(l,x);
    }else{
        nw->data=x;
        nw->next=NULL;
        temp=l->head;
        while(j<loc-1){
            temp=temp->next;
            j++;
        }
        nw->next=temp->next;
        temp->next=nw;

    }
}
void del(struct list *l,int num){
    struct node *temp1,*temp2,*temp3;
    temp1=temp2=l->head;
    int i=0,j=0;
    while(temp1->data!=num){
        temp1=temp1->next;
        i++;
    }
    while(j<i-1){
        temp2=temp2->next;
        j++;

    }
    temp3=temp1->next;
    temp2->next=temp3;
    free(temp1);


}

int main()
{
    int j;
   struct node list,*p;
   p=&list;
   initializer(p);
   addFirst(p,10);
   addFirst(p,20);
   addFirst(p,30);
   display(p);
   addEnd(p,100);
   addEnd(p,200);
   addEnd(p,300);
   //search(p,40);
   length(p);
   display(p);
   printf("\n\nEnter value :");
    scanf("%d",&j);
   addAt(p,500,j);
   display(p);
   del(p,20);
   display(p);
}
