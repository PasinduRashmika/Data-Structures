#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    char data;
    struct node* next;
};
typedef struct stack{
    struct node *top;
};
void inti(struct stack *s){
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
        printf("There is no element to delete");
    }else{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp=s->top;
    char b=temp->data;;
    s->top=temp->next;
    free(temp);
    return b;
}
}

int main()
{   struct node st,*p;
    p=&st;
   char a[20],b,c;
   int x,i,y=0;
   printf("\nEnter your expression :");
   scanf("%s",a);
   x=strlen(a);
   for(i=0;i<x;i++){
        if((a[i]=='(') || (a[i]=='{') || (a[i]=='[') ){
            push(p,a[i]);
            continue;
           }
        else if((a[i]==')') || (a[i]=='}') || (a[i]==']') ){
            b=a[i];
            c=pop(p);
            if((c=='('&&b==')') || (c=='{'&&b=='}') || (c=='['&&b==']') ){
                continue;
            }else{
                y=1;
                break;
            }
        }
        else{
            continue;
        }

   }
   if(y==0){
    printf("\nBalanced");
   } else{
   printf("\nNot Bakanced");
   }
}
