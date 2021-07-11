#include <stdio.h>
#include <string.h>
#define size 40

typedef struct stack{
    int top;
    char data[20];
}stack;
int initializer(struct stack *s);
int isFull(struct stack *s);
int isEmpty(struct stack *s);
int push(struct stack *s,char d);
char pop(struct stack *s);


int initializer(struct stack *s){
    s->top=-1;
}
int isFull(struct stack *s){
    if(s->top==(size-1)){
       // printf("Stack is full...");
        return 1;
    }else{
        return 0;
    }
}
int isEmpty(struct stack *s){
    if(s->top==-1){
        //printf("Stack is empty");
        return 1;
    }else{
        return 0;
    }
}
int push(struct stack *s,char d){
    if(isFull(s)){
    }else{
        s->top++;
        s->data[s->top]=d;
    }
}
char pop(struct stack *s){
    if(isEmpty(s)){
        printf("Stack is empty..");
    }else{
    char a;
    a=s->data[s->top];
    s->top--;
    return a;
    }
}
int main(){
    stack st1;
    stack *p;
    p=&st1;

    initializer(p);
    char B[size];
    int j,i=0;
    char C,D;
    printf("Input your expression :");
    scanf("%s",B);

    while((strlen(B))>=i){
        C=B[i-1];
        if(C=='(' || C=='[' || C=='{'){
            push(p,C);
            i++;
            printf("%c\n",C);
            continue;
           }
        else if(C==')' || C==']' || C=='}'){
            if(isEmpty(p)){
                printf("\n Expression is invalid.1");
                j=0;
                break;
            }
            else{
               D=pop(p);
               if(C==']' || D=='['){
                    i++;
                    continue;
               }
               else if(C=='}' || D=='{'){
                    i++;
                    continue;
               }else if(C==')' || D=='('){
                    i++;
                    continue;
               }else{
                     printf("\nExpression is invalid.");
                    j=0;
                    break;

               }
            }
        }
        else{
            i++;
            continue;

        }

    }

    if(p->top==-1){
        if(j==1){
        printf("\nExpression is invalid");
    }else{
        printf("\nExpression is correct");
    }}
    else{
        printf("\nExpression is invalid");
    }

}
