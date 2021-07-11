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

    char A[size],B,C;
    int j,i=0;

    printf("Enter your expression :");
    scanf("%s",A);


    while(strlen(A)>=i){
          C=A[i];
          if(C=='(' || C=='{' || C=='['){
                if(isFull(p)){
                    printf("Stack is full...");
                    break;
                }
                else{
                    push(p,C);
                    i++;
                    continue;
                }
        }
        else if(C==')' || C=='}' || C==']'){
                if(isEmpty(p)){
                    printf("Expression is invalid");
                }
                else{
                B=pop(p);
                    if(B==')' && C=='('){
                        i++;
                        continue;
                    }
                    else if(B=='}' && C=='{'){
                            i++;
                            continue;
                    }
                    else if(B==']' && C=='['){
                            i++;
                            continue;
                    }
                    else{
                        printf("Expression is invalid.");
                        break;
            }

        }
    }else{
        i++;continue;
    }

    }
}
