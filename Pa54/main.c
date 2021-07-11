#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    char data;
    struct node *next;
};
typedef struct stack{
    struct node *top;
};
void initializer(struct stack *s);
int isEmpty(struct stack *s);
void push(struct stack *s,char x);
char pop(struct stack *s);


void initializer(struct stack *s){
    s->top=NULL;
}
int isEmpty(struct stack *s){
    if(s->top==NULL)
        return 1;
    else
        return 0;
}
void push(struct stack *s,char x){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=s->top;
    s->top=temp;
}
char pop(struct stack *s){
    if(isEmpty(s)){
        printf("Stask is empty...");
    }else{
        struct node *temp;
        temp=s->top;
        char x=temp->data;
        s->top=temp->next;
        free(temp);
        return x;
}
}


int main()
{
    struct stack  st,*p;
    p=&st;
    initializer(p);

    char a[20];
    char b;
    int i,j=0;
    printf("Enter Expression :");
    scanf("%s",a);
    int l=strlen(a);
    for(i=0;i<l;i++){
        if(a[i]=='{' || a[i]=='[' || a[i]=='('){
            push(p,a[i]);
            continue;
        }else if(a[i]=='}' || a[i]==']' || a[i]==')'){
            b=pop(p);
            if((b=='{'&&a[i]=='}')||(b=='['&&a[i]==']') ||(b=='('&&a[i]==')')){
                continue;
            }else{
                j=1;
                break;
            }
        }else{
            continue;
        }
    }
    if(j==1
       )
        printf("\n Unbalanced");
    else
        printf("This is balanced");


}
