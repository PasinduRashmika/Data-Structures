#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 20

typedef struct stack{
    int data[SIZE];
    int top;
};

void initiation(struct stack *s){
    s->top=-1;
}
int isEmpty(struct stack *s){
    if(s->top==-1){
        return 1;
    }else{
        return 0;
    }
}
int isFull(struct stack *s){
    if(s->top==(SIZE-1)){
        return 1;
    }else{
        return 0;}
}
void push(struct stack *s,int d){
    if(isFull(s)){
        printf("Stack is full...");
    }else{
        s->top++;
        s->data[s->top]=d;
    }
}
int pop(struct stack *s){
    if(isEmpty(s)){
        printf("Stack is Empty");
    }else{
        int x=s->data[s->top];
        s->top--;
        return x;
    }
}
void dispaly(struct stack *s){
    for(int x=0;x<s->top;x++){
        printf("\n\t%d",s->data[x]);
    }
}

int main()
{
    struct stack st1,*p;
    p=&st1;

    initiation(p);

    char exp[SIZE];
    int x,y,z,a,b,c;

    printf("Enter your expression :");
    scanf("%s",exp);
    x=strlen(exp);

    for(int i=0;i<x;i++){
        if((exp[i]=='+')|| (exp[i]=='-') || (exp[i]=='*') || (exp[i]=='/')){
                a=pop(p);
                b=pop(p);

             switch (exp[i]){
                case '+':
                    c=b+a;
                    break;
                case '-':
                    c=b-a;
                    break;
                case '*':
                    c=b*a;
                    break;
                case '/':
                    c=b/a;
                    break;
             }
             push(p,c);
           }else{
                y=exp[i]-'0';
                push(p,y);
           }
    }
    z=pop(p);
    printf("\n\tAnswer is %d",z);
}
