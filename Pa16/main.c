#include <stdio.h>
#include <stdlib.h>

int isEmpty(struct stack *s);
void push(struct stack *s,int d);
int pop(struct stack *s);


typedef struct node{
    int data;

    struct node *next;
};
typedef struct stack{
    struct node* top;
};
void init(struct stack *s){
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
    if(isEmpty(s)){
        printf("There is no elements to pop");
    }else{
        struct node *temp;
        temp=(struct node*)malloc(sizeof(struct node));
        temp=s->top;
        int x=temp->data;
        s->top=temp->next;
        free(temp);
        return x;
    }
}

int main()
{
    struct stack st,*p;
    p=&st;
    init(p);


    int i,j;

    for(i=0;i<4;i++){
        printf("Enter your number :");
        scanf("%d",&j);
        push(p,j);
    }
    for(i=0;i<4;i++){
        int x=pop(p);
        printf("%d",x);
    }
}
