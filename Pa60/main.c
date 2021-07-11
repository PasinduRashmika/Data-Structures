#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void insertionSort(int x[]){
    int i,j,temp;
    for(i=0;i<10;i++){
    temp=x[i];
    j=i-1;
    while(j>=0 && x[j]>temp){
        x[j+1]=x[j];
        j--;
    }
    x[j+1]=temp;
    }



    for(i=0;i<SIZE-1;i++){
        printf("%d\t",x[i]);
    }
}

int main()
{
   int x[SIZE]={120,33,59,10,75,85,165,8,90,44};
   insertionSort(x);
}
