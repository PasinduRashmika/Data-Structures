#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int selection(int a[]){

    int temp,i,j;

    for(i=SIZE-1;i>=0;i--){
        for(j=0;j<i;j++){
            if(a[j]>=a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<SIZE;i++){
        printf("%d\t",a[i]);
    }
}

int main()
{
    int a[SIZE]={100,54,698,653,548,1546,894,845,982,659};




    selection(a);
}
