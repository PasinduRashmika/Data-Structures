#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void selectionsort(int x[],int N);
float mean(int x[],int N);

void selectionsort(int x[],int N){
    int i,j,temp;

    for(i=1;i<N;i++){
        temp=x[i];
        j=i-1;
        while(j>=0 && x[j]>temp){
            x[j+1]=x[j];
            j--;
        }
        x[j+1]=temp;
    }

   for(i=0;i<N;i++){
    printf("%d\t",x[i]);
   }



}
float mean(int x[],int N){
    int i,tot=0;
    float mean;
    for(i=0;i<N;i++){
        tot+=x[i];
    }
    mean=tot/N;
    return mean;
}

int main()
{
   int N,i;
   printf("\nHow many numbers you want to insert :");
   scanf("%d",&N);
   int x[N];
   for(i=0;i<=N-1;i++){
    printf("\nEnter value :",i);
    scanf("%d",&x[i]);
   }

    printf("\n\n\t---------Before sorting-------\n");
   for(i=0;i<=N-1;i++){
    printf("%d\t",x[i]);

   }
   printf("\n\n\t---------After sorting-------\n");
   selectionsort(x,N);
   printf("\n");
   float mean1=mean(x,N);
   printf("\nMean is %.2f",mean1);
}
