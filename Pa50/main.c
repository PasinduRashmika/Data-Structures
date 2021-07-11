#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void selectionsort(int list[],int N);

void selectionsort(int list[],int N){
    int c,d,min,temp;
    for(c=0;c<N-1;c++){
        min=c;
        for(d=c+1;d<N;d++){
            if(list[min]>list[d])
                min=d;
        }
        temp=list[c];
        list[c]=list[min];
        list[min]=temp;
    }
    for(int i=0;i<N;i++){
        printf("%d\t",list[i]);
    }

}


int main()
{
    int i,j;
   int x[11]={120,33,59,10,75,85,165,8,90,44};

  printf("\n\n\t-----Before sorting------\n");
   for(i=0;i<=MAX-1;i++){
    printf("%d\t",x[i]);

   }
   printf("\n\n\t-----After sorting------\n");

   selectionsort(x,MAX);

}
