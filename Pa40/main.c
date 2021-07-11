#include <stdio.h>
#include <stdlib.h>

int ranGen(int n);
int BinomialCoefficient(int n,int x);
int factorial(int i);
float probability(float C,float p, int n, int x);
int main()
{
    int n,C,j;
    float P, p=0.5;
    printf("C program for calculate the probability of coin tossing experiment\n");
    printf("-------------------------------------------------------------------\n");
    printf("\n");
    printf("Enter value for number of trials (n) :");
    scanf("%d",&n);
    j=ranGen(n);
    C= BinomialCoefficient(n,j);
    P= probability(C,p,n,j);
    printf("\nThe probability of getting heads for x times = %f\n", P);

}
int ranGen(int n){
    int c,i,j=0;
    for (i= 1; i <= n; i++) {
        c = rand() % 2;
        if(c==1){
            j++;
        }
  }
        return j;
}
int BinomialCoefficient(int n,int x){
        int binCo=factorial(n)/(factorial(x)*factorial(n-x));
        return binCo;
}

int factorial(int i){
    int f=1;
    while(i>1){
        f=f*i;
        i=i-1;
  }
  return f;
}

float probability(float C,float p, int n, int x)
{
    float prob=(C*(pow(p,x))*(pow((1-p),(n-x))));
    return prob;
}
