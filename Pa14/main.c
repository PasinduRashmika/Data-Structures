#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    int data;
    struct node* next;
};
typedef struct stack{
    struct node *top;
};
void initiate(struct stack *s){
    s->top=NULL;
}
int isEmpty(struct stack *s){
    if(s->top==NULL){
        return 1;
    }else{
        return 0;
        }
}
void push(struct stack *s,int d){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=d;
    temp->next=s->top;
    s->top=temp;
}
int pop(struct stack *s){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    int x;
    if(isEmpty(s)){
        printf("There is no element to delete");
    }else{
        temp=s->top;
        x=temp->data;
        s->top=s->top->next;
        free(temp);
    }
}
void display(struct stack *s){
    struct node *temp;
    temp=s->top;

    while(temp!=NULL){
        printf("\n\t%d",temp->data);
        temp=temp->next;
    }
}

int main()
{
    struct stack st,*p;
    p=&st;
    initiate(p);
    int x,i;

    for(i=0;i<4;i++){
        printf("\nEnter your number :");
        scanf("%d",&x);
        push(p,x);
    }
    display(p);

}
