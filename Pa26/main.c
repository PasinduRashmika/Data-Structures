#include <stdio.h>
#include <stdlib.h>

int ranGen(int n,int arr[]);
int BinomialCoefficient(int n,int x);
int factorial(int i);
double probability(double C,double p, int n, int x);
int main()
{
    int n,C,j,i;
    double P, p=0.5;
    printf("C program for calculate the probability of coin tossing experiment\n");
    printf("-------------------------------------------------------------------\n");
    printf("\n");
    printf("Enter value for number of trials (n) :\t");
    scanf("%d",&n);
    int arr[n];
    j=ranGen(n,arr);
    C= BinomialCoefficient(n,j);
    printf("\n");
    printf("Generated Random Numbers:\t");
    for(i=0;i<n;i++){
    	printf("%d\t",arr[i]);
	}
	printf("\n\n");
    P= probability(C,p,n,j);
    printf("The probability of getting heads for x times = %f\n", P);

}
int ranGen(int n,int arr[]){
    int c,i,j=0;


  for (i= 1; i <= n; i++) {
    c = rand() % 2;
    c=abs(c);
    arr[i-1]=c;
      if(c==1){
        j++;
  }
  }
  return j;
}
int BinomialCoefficient(int n,int x)
{
    return  factorial(n)/(factorial(x)*factorial(n-x));
}

int factorial(int i){
  int f=1;
  while(i>1)
  {
      f=f*i;
      i=i-1;
  }
  return f;
}
double probability(double C,double p, int n, int x)
{
    double prob=(C*(pow(p,x))*(pow((1-p),(n-x))));
    return prob;
}
