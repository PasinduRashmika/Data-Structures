#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int selection(int a[]){

    int temp,min,i,j;
    for(i=0;i<SIZE-1;i++){
        min=i;
        for(j=0;j<i;j++){
            if(a[min]<a[j]){
                min=j;
            }
        }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
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
