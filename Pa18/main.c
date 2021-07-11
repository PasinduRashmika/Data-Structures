#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct node{
    char data;
    struct node *next;
};
typedef struct stack{
    struct node *top;
};

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
        printf("There is no element to delete");
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

    char a[20],b,c;
    int y,x=0;
    printf("\nEnter your expression :");
    scanf("%s",a);
    y=strlen(a);

    for(int i=0;i<y;i++){
        if((a[i]=='(')||(a[i]=='[')||(a[i]=='{')){
            push(p,a[i]);
            continue;
           }
        else if((a[i]==')')||(a[i]==']')||(a[i]=='}')){
            b=a[i];
            c=pop(p);
            if((b==')'&&c=='(')||(b==']'&&c=='[')||(b=='}'&&c=='{')){
                continue;
            }else{
                x=1;
            }
        }

    }
    if(x==0){
        printf("\n\tBalanced");
    }else{
        printf("\n\tNot balanced");
    }


}
