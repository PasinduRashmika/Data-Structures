#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
void insertion(int a[]);

void insertion(int a[]){
    int i,j,key;
    for(i=1;i<SIZE;i++){
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }

     for(i=0;i<SIZE;i++){
        printf("%d\t",a[i]);
    }

}
int main()
{
    int a[SIZE]={100,54,698,653,548,1546,894,845,982,659};

    insertion(a);
}
