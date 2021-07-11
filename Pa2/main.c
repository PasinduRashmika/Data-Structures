#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 20

typedef struct stack{
    int top;
    int data[20];
}st1;
int isFull(struct stack *s);
int isEmppty(struct stack *s);
int isEmpty(struct stack *s);
char push(struct stack *s,char d);

int isFull(struct stack *s){
    if(s->top==(
                -1)){
        printf("Stack is Full..");
    return 1;
    }else{
        return 0;
    }

}
int isEmpty(struct stack *s){
    if(s->top==-1){
        printf("Stack is Empty..");
        return 1;
    }else{
        return 0;
    }
}
char push(struct stack *s,char d){
    if(isFull(s)){

    }else{
        s->top++;
        s->data[s->top]=d;

    }
}
char pop(struct stack *s){
    char b;
    if(isEmpty(s)){
        return '0';
    }
    else{
    b=s->data[s->top];
    s->top--;

    return b;
    }
}


int main(){
    struct stack st2;
    struct stack *p;
    p=&st2;
    p->top=-1;
    char a[20];
    printf("Enter your word :");
    scanf("%s",a);
    int i=0,z=0;
    char c;
    while(i<=strlen(a)){
        push(p,a[i]);
        i++;
    }
    i=0;
    while(i<=strlen(a)){
        c=pop(p);
        printf("\n%c",c);
        if(c==a[i]){
            z=1;
        }i++;
    }
     if(z==1){
            printf("\n\tIt is not palindrome...");
        }
     else{
         printf("\n\tIt is palindrome...");
     }
}
