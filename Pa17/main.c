#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct node{
    char data;
    struct node *next;
};
typedef struct stack{
    struct node* top;
};

int isEmpty(struct stack *s);
void push(struct stack *s,char d);
char pop(struct stack *s);


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
void push(struct stack *s,char d){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=d;
    temp->next=s->top;
    s->top=temp;

}
char pop(struct stack *s){
    if(isEmpty(s)){
        printf("There is no elements to pop");
    }else{
        struct node *temp;
        temp=(struct node*)malloc(sizeof(struct node));
        temp=s->top;
        char x=temp->data;
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
    char a[20],b;
    int x,y,i;

    printf("\nEnter your string :");
    scanf("%s",a);
    x=strlen(a);

    for(i=0;i<x;i++){
        push(p,a[i]);

    }
    for(i=0;i<x;i++){
         char b=pop(p);
        printf("%c",b);
    }
}
