#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *link;
};
typedef struct stack{
    struct node *top;
}stack;

void initialize(struct stack *s){
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
    struct node temp=(struct node*)malloc(sizeof(struct node));
    temp->data=d;
    temp->link=s->top;
    s->top=temp;

}
int main()
{
    stack st1,*p;
    p=&st1;
}
