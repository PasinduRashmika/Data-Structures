#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void bubbleSort(int x[]);
void avg(int x[]);

void bubbleSort(int x[]){
    int i,j,temp;
    for(i=SIZE-1;i>=0;i--){

        for(j=0;j<i;j++){
            if(x[j]>x[j+1]){
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
    }
    for(i=0;i<SIZE;i++){
        printf("%d\t",x[i]);
    }
}
void avg(int x[]){
    int tot=0,i,j=0;
    float avg=0.0;

    for(i=0;i<SIZE-1;i++){
        tot+=x[i];
        j++;
    }
    avg=tot/SIZE;
    printf("\n\n\t------Values That greater Than Average------\n");
    printf("\n----Average :%.2f----\n",avg);
    for(i=0;i<SIZE-1;i++){
        if(avg<x[i])
            printf("%d\t",x[i]);
    }

}

int main()
{
    int i;
    int x[SIZE]={120,33,59,10,75,85,165,8,90,44};

    printf("\n\n\t---------Before sort-------\n");

   for(i=0;i<=SIZE-1;i++){
    printf("%d\t",x[i]);
   }

    printf("\n\n\t---------After sort-------\n");
   bubbleSort(x);
   avg(x);
}
