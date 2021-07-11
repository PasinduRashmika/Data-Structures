#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 20
typedef struct node{
    int data;
    struct node *link;
};
struct node *root=NULL;
void append();
int len();



int main()
{
    while(1){
    int ch;
    printf("1.Append");
    printf("2.AddatBegin");
    printf("3.AddatAfter");
    printf("4.Length");
    printf("5.Display");
    printf("6.Delete");
    printf("7.Quit");

    printf("\nEnter your choice :");
    scanf("%d",&ch);
    }

    switch('ch')
    {
        case 1: append();
                break;
        case 2:addatbegin();
                break;
        case 3:addatafter();
                break;
        case 4:length();
                break;
        case 5:display();
                break;
        case 6:Delete();
                break;
        case 7:Exit();
                break;
    }
}

void append(){
  struct node *temp;
  temp=(struct node*)malloc(sizeof(struct node));
  temp->link=NULL;

      if(root==NULL){
        root=temp;
      }
      else{
        struct node *p;
        p=root;
        while(p!=NULL){
            p=p->link;
        }
        p->link=temp;
      }
}
int len(){
    struct node *temp;
    int count=0;
    temp=root;
    while(temp!=NULL){
       count++;
       temp=temp->link;
    }
}
