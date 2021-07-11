#include <stdio.h>
#include <stdlib.h>
typedef enum{
    True=1,False=0
}boolean;
typedef struct node{
    int data;
    struct node *next;
};
typedef struct list{
    struct node *head;
};
void initialize(struct list *l);
int isEmpty(struct list *l);
void addFirst(struct list *l,int x);
void dispaly(struct list *l);
void addEnd(struct list *l,int d);
int length(struct list *l);
void search(struct list *l,int x);
void addAt(struct list *l,int x,int loc);
void del(struct list *l,int loc);


void initialize(struct list *l){
    l->head=NULL;
}
int isEmpty(struct list *l){
    if(l->head==NULL)
        return 1;
    else
        return 0;
}
void addFirst(struct list *l,int x){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
    if(isEmpty(l)){
        l->head=temp;
        l->head->next=NULL;
    }else{
        temp->next=l->head;
        l->head=temp;
    }
}
void dispaly(struct list *l){
    struct node *temp;
    temp=l->head;
    while(temp!=NULL){
        printf("\t%d",temp->data);
        temp=temp->next;
    }
}
void addEnd(struct list *l,int d){
    struct node *nw=(struct node*)malloc(sizeof(struct node));
    struct node *temp;
    nw->data=d;
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
int length(struct list *l){
    struct node *temp;
    int count=0;
    temp=l->head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
void search(struct list *l,int x){
    struct node *temp;
    int i=0;
    temp=l->head;
    while(temp!=NULL){
       if(temp->data==x){
            printf("%d is in list",x);
            i=1;
            break;
       }
       temp=temp->next;
    }
    if(i==0)
            printf("%d is not in list",x);
}
void addAt(struct list *l,int x,int loc){
    struct node *nw=(struct node*)malloc(sizeof(struct node));
    struct node *temp;
    int i=length(l);
    int j=1;
    if(loc>i+1){
        printf("\nInvalid list location");
    }else if(loc==1){
        addFirst(l,x);
    }else if(loc==i+1){
        addEnd(l,x);
    }else{
        temp=l->head;
        nw->data=x;
        nw->next=NULL;
        if(isEmpty(l)){
            l->head=nw;
        }
        else{
            while(j<loc-1){
                temp=temp->next;
                j++;
            }
            nw->next=temp->next;
            temp->next=nw;
        }
    }
}
void del(struct list *l,int loc){
    struct node *temp1,*temp2,*temp3;
    temp1=temp3=l->head;
    int i=1;
    while(i<loc){
        temp1=temp1->next;
        i++;
    }
    temp2=temp1->next;
    i=1;
    while(i<loc-1){
        temp3=temp3->next;
        i++;
    }
    temp3->next=temp2;
    free(temp1);


}



int main()
{
    struct list ls,*p;
    p=&ls;
    int i,x=1,y,z;
    initialize(p);
    addFirst(p,10);
    addFirst(p,20);
    addFirst(p,30);
    dispaly(p);
    printf("\n");
    addEnd(p,100);
    addEnd(p,110);
    addEnd(p,120);
    dispaly(p);
    printf("\nThere are %d element",length(p));
    printf("\n Enter the value which you want to search :");
    scanf("%d",&i);
    printf("\n");
    search(p,i);

    while(x>0){
        printf("\n \nRenter relavant key or enter 0 to exit :");
        scanf("%d",&x);
        if(x!=0){
        printf("\n Enter value :");
        scanf("%d",&z);
        addAt(p,z,x);
        }
    }

    dispaly(p);
    printf("\n Enter the loc you want to delete :");
    scanf("%d",&y);
    del(p,y);
    printf("\n");
    dispaly(p);
}
