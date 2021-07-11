#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 20
typedef struct node{
    int data;
    struct node *next;
};
typedef struct stack{
    struct node *top;
};

void initializer(struct stack *s){
    s->top=NULL;
}
int isEmpty(struct stack *s){
    if(s->top==NULL){
        return 1;
    }
}
void push(struct stack *s,int d){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=d;
    s->top=temp;
}
int pop(struct stack *s){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    int x;
    if(s->top==NULL){
        printf("There is no elements to delete...");
    }else{
        temp=s->top;
        x=temp->data;
        s->top=s->top->next;
        free(temp);
        return x;
    }
}
void display(struct stack *s){
    struct node *temp;
    temp=s->top;
    while(temp!=NULL){
       printf("\n\t%d",temp->data);
       temp=temp->next;
    }
}

int main()
{
 struct stack st,*p;
    p=&st;
    int x,y;
   while(1){
    printf("\n1.Push");
    printf("\n2.Pop");
    printf("\n3.Display");
    printf("\n4.Exit");
    printf("\nEnter your choice :");
    scanf("%d",&x);
    switch(x){
        case 1:
            printf("\nEnter your value :");
            scanf("%d",&y);
            push(p,y);
            break;
        case 2:
            x=pop(p);
            break;
        case 3:
            display(p);
        case 4:
            break;
    }

   }
}
