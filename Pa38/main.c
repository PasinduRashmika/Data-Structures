#include<stdio.h>
#include<math.h>
int BinomialCoefficient(int,int);
int factorial(int);
float probability(int,float,int,int);
int main (void)
{
    int n,x,C;
    float P, p=0.5;
    printf("C program for calculate the probability of coin tossing experiment\n");
    printf("-------------------------------------------------------------------\n");
    printf("\n");
    printf("Enter value for number of trials (n) :\n");
    scanf("%d",&n);
    printf("Enter value for x :\n");
    scanf("%d",&x);
    C= BinomialCoefficient(n,x);
    printf("\n");
    P= probability(C,p,n,x);
    printf("The probability of getting heads for x times = %f\n", P);
    return ;
}
int BinomialCoefficient(int n,int x)
{
    return  factorial(n)/(factorial(x)*factorial(n-x));
}

int factorial(int i)
{
  int f=1;
  while(i>1)
  {
      f=f*i;
      i=i-1;
  }
  return f;
}
float probability(int C,float p, int n, int x)
{
    return C*(pow(p,x))*(pow((1-p),(n-x)));
}
