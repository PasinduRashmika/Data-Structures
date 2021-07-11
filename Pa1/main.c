#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

typedef struct stack{
    int top;
    int data[SIZE];
}st1;
void ini(st1 *s);
int isEmpty(st1 *s);
int isFull(st1 *s);
int push(st1 *s,int a);
int display(st1 *s);

void ini(st1 *s){
    s->top=-1;
}
int isEmpty(st1 *s){
    if(s->top==-1){
        printf("Stack is empty.\n");
        return 0;
    }else{
        return 0;
    }
}

int isFull(st1 *s){
    if((s->top)==SIZE-1){
        printf("Stack is full.\n");
        return 1;
    }else{
        return 0;
    }
}
int push(st1 *s,int a){
    if(isFull(s)){

    }
    else{
        s->top++;
        s->data[s->top]=a;

    }
}
int display(st1 *s){
    if(isEmpty(s)){}
    else{
        int x=s->top;
        printf("\n");
        for(int j=x;j>-1;j--){
            printf("%d",s->data[j]);
        }
    }
}


int main(){

    st1 st2;
    st1 *p;
    p=&st2;

    ini(p);
    isEmpty(p);
    isFull(p);

    int x,y;
    printf("Enter decimal value");
    scanf("%d",&x);
    while(x>=1){
    y=x%2;
    x=x/2;
    push(p,y);
    }
    display(p);
}
