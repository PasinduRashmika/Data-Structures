#include <stdio.h>
#include <stdlib.h>


typedef struct stack{
    int top;
    int data[10];
}stack;


void initializer(stack *s){
    s->top=-1;
    printf("initializer");
}
int isEmpty(stack *s){
    if(s->top==-1){
        printf("\nempty");
        return 1;
    }
    else{
        printf("\nNot empty");
        return 0;
    }
}
int isFull(stack *s){
    if(s->top==9){
        printf("\nis full");
        return 1;
    }
    else{
        printf("\nis not full");
        return 0;
    }
}
int push(stack *s,int d){
    if(isFull(s)){
        printf("\nStack is full");
    }
    else{
        s->top++;
        s->data[s->top]=d;

    }
}
int pop(stack *s){
    if(isEmpty(s)){
        printf("\nStack is empty");
    }else{
        int k=s->data[s->top];
        s->top--;
        printf("\n%d",k);
    }
}
int display(stack *s){
    int i,j;
    i=s->top;
    for(j=i;j>-1;j--){
        printf("\n\n\t%d",s->data[j]);
    }
}


int main(){

    stack st;
    stack *p;
    p=&st;
    initializer(p);
    isEmpty(p);
    isFull(p);
    push(p,10);
    pop(p);
    push(p,11);
    push(p,12);
    push(p,13);
    push(p,14);
    push(p,15);
    display(p);
}

