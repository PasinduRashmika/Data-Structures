#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* The division of integers usually gives a
 * result smaller than max                 */
int randomRange(int min, int max)
{
    return ( rand() % ( max - min ) ) + min;
}

/*int main(void)
{
    int i=0;
    srand(time(NULL));
    while(i++!=10)
        printf("%d\n", randomRange(0,2));
    return 0;
    ran();
}*/
int main() {
  ranGen();
}
int ranGen(){
    int c,n,i,j=0;
  printf("\nEnter n :");
  scanf("%d",&n);

  for (i= 1; i <= n; i++) {
    c = rand() % 2;
    printf("%d\n",c);
    if(c==1){
        j++;
  }
  }
  printf("%d",j);
  return j;
}

int ran(){
int randomnumber;
    randomnumber = rand() % 2;
    printf("%d\n", randomnumber);
    return 0;

}
