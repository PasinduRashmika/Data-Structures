#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 12


typedef struct stack{
    int top;
    char words[SIZE];
}stack;

void initializer(struct stack *s);
int isFull(struct stack *s);
int push(struct stack *s,char d);
int display(struct stack *s);

void initializer(struct stack *s){
    s->top=-1;
}
int isFull(stack *s){
    if(s->top==SIZE-1){
        printf("Stack is full.");
        return 1;
    }else{
        return 0;
    }
}
int push(stack *s,char d){
    if(isFull(s)){

    }else{
        s->top++;
        s->words[s->top]=d;
    }
}
int display(stack *s){
    int i,j,k=0;
    i=s->top;
    printf("\n\t");
    for(j=i;j>-1;j--){
        printf("%c",s->words [j]);
        printf("%s",wd);
    }

}

int main()
{
   // struct stack st;
    char word[10];
    printf("\nEnter word:");
    scanf("%s",word);
    int check=0;

    stack st;
    stack *p;
    p=&st;
    initializer(p);
    int i=0;
    while(i<=strlen(word)){
        push(p,word[i]);
        i++;
    }
    display(p);

    while(isEmpty)

    printf("%s",wd);
     if(strcmp(wd,word)){
        printf("\nIt is  palindrome");
     }else{
        printf("\nIt is not palindrome");
     }


}
