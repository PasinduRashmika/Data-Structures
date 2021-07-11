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
int isFull(struct stack *s){
    if(s->top==(SIZE-1)){
        return 1;
    }else{
        return 0;
    }
}
int isEmpty(struct stack *s){
    if(s->top==-1){
        return 1;
    }else{
        return 0;
    }
}
void push(struct stack *s,int d){
    if(isFull(s)){
        printf("\nStack is full...");
    }else{
        s->top++;
        s->data[s->top]=d;
    }
}
int pop(struct stack *s){
    if(isEmpty(s)){
        printf("\nStack is Empty...");
    }else{
        int i=s->data[s->top];
        s->top--;
        return i;
    }
}
void display(struct stack *s){
    for(int i=s->top;i<-1;i--){
        printf("\n\t %d",s->data[i]);
    }
}

int main()
{
    struct stack st1,*p;
    p=&st1;

    initiation(p);
    char a[SIZE];
    int q,r,s,u,v,w;

    printf("\nEnter your expression :");
    scanf("%s",a);

    w=strlen(a);
    for(int i=0;i<w;i++){
            if((a[i]=='+') || (a[i]=='-') || (a[i]=='*') || (a[i]=='/')){
                q=pop(p);
                r=pop(p);

                switch (a[i]){
                    case '+':
                        s=r+q;
                        break;
                    case '-':
                        s=r-q;
                        break;
                    case '*':
                        s=r*q;
                        break;
                    case '/':
                        s=r/q;
                        break;
                }
                push(p,s);
            }else{
                u=a[i]-'0';
                push(p,u);
            }

    }
    v=pop(p);
    printf("\n\tAnswer is %d",v);




}
