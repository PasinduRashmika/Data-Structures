#include <stdio.h>
#include <stdlib.h>
typedef enum{True =1,False=0}boolean;

typedef struct node{
    int data;
    struct node *next;
};
typedef struct list{
    struct node *head;
};
void initializer(struct list *l){
    l->head=NULL;
}
boolean isEmpty(struct list *l){
    if(l->head==NULL)
        return True;
    else
        return False;
}
void addFirst(struct list *l,int d){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=d;
    temp->next=NULL;
    if(isEmpty(l)){
        l->head=temp;
        l->head->next=NULL;
    }else{
        temp->next=l->head;
        l->head=temp;
    }
}
void display(struct list *l){
    struct node *temp;
    temp=l->head;
    while(temp!=NULL){
        printf("\nElement is %d",temp->data);
        temp=temp->next;
    }
}
void addEnd(struct list *l,int d){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    struct node *temp2;
    temp->data=d;
    temp->next=NULL;
    temp2=l->head;
    if(isEmpty(l)){
        temp->next=l->head;
        l->head=temp;
    }else{
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp;
}
}
void search(struct list *l,int s){
    struct node *temp;
    temp=l->head;
    int x=0;
    while(temp!=NULL){
        if(temp->data==s){
            printf("\n\t%d is in list",s);
            x=1;
            break;
        }
        temp=temp->next;
    }
    if(x==0)
        printf("\n\t%d is not in list",s);

}
int length(struct list *l){
    int count=0;
    struct node *temp;
    temp=l->head;

     while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

void addAt(struct list *l,int x,int loc){
    struct node *temp;
    struct node *nw=(struct node*)malloc(sizeof(struct node));
    int y,z,i=1;
    y=length(l);
    if(loc==1){
        addFirst(l,x);
    }else if(loc==y+1){
        addEnd(l,x);
    }else if(loc>y+1 || loc<0){
        printf("\n\tInvalid Input");
    }else{
        temp=l->head;
        nw->data=x;
        nw->next=NULL;
        while(i<loc-1){
            temp=temp->next;
            i++;
        }
        nw->next=temp->next;
        temp->next=nw;

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
    int x,y,z,q,r,s;
    initializer(p);
    printf("\n\n\t---Add at front---");
    addFirst(p,10);
    addFirst(p,20);
    addFirst(p,30);
    display(p);


    printf("\n\n\t---Delete item in given location---\n");
    printf("\nEnter location that you want to delete :");
    scanf("%d",&s);
    del(p,s);
    display(p);


    printf("\n\n\t---Enter data in given location---");

    for(int i=0;i<2;i++){
    printf("\n\nEnter data :");
    scanf("%d",&z);
    printf("\nEnter location :");
    scanf("%d",&q);
    addAt(p,z,q);
    display(p);

    }

}
