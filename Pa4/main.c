#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 40


typedef struct stack{
    int top;
    int data[SIZE];
}st1;
void ini(struct stack *s);
int isFull(struct stack *s);
int isEmpty(struct stack *s);


void ini(struct stack *s){
    s->top=-1;
}
int isFull(struct stack *s){
    if(s->top==(SIZE-1)){
        printf("Stack is full...");
        return 1;
    }else{
        return 0;
    }
}
int isEmpty(struct stack *s){
    if(s->top==-1){
        printf("Stack is empty...");
        return 1;
    }else{
        return 0;
    }
}
char push(struct stack *s,char d){
    if(isFull(s)){
    }else{
        s->top++;
        s->data[s->top];
    }
}
char pop(struct stack *s){
    if(isEmpty(s)){
    }else{
        char z;
        z=s->data[s->top];
        s->top--;
        return z;
    }
}

int main()
{
   struct stack st2;
   struct stack *p;
   p=&st2;
   int i=0;
   char e[30],b,c;

   printf("Enter expression :");
   scanf("%s",e);

   while(i<=strlen(e)){
        printf("%d",strlen(e));
        b=e[i];

        if(b=='(' || b=='[' || b=='{'){
            if(isFull(p)){
           }else{
                push(p,b);
                printf(".");
                i++;
                continue;
                }
           }
        else if(b==')' || b==']' || b=='}'){

             if(isEmpty(p)){
                printf("\nExpression is unbalanced..");
                break;
                }
            else{
                  c=pop(p);
                  printf("\n%c",c);
                  if(strcmp(b,c)){
                    printf("w");
                    i++;
                  }
                  else{
                     printf("\nExpression is unbalanced..");
                     break;
                  }
                }
           }else{i++;
           printf("-");
            continue;
           }

   }
}

//[saeh}
