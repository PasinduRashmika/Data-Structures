#include <stdio.h>
#include <stdlib.h>

typedef struct stack{
    int data[10];
    int top;
}stack;
void initialize(stack *s){
    s->top=-1;
}
void push(stack *s,int d){
    if(isFull(s))
      printf("Stack is full");
    else{
        s->top++;
        s->data[s->top]=d;
    }
}
void pop(stack *s){

}
void top(stack *s){

}
void isempty(stack *s){
    if(s->top==-1){
        printf("zdfvdfvz");
    }
}
int isFull(stack *s){
    if(isFull(s)){
        printf("SDZfxhgcjh");
    }
    else
        printf("SDZfxhgcjh");
}

int main()
{
    stack st;
    stack *s;
    s=&st;
    push(s,10);
    isempty(s);
    isFull(s);
}
