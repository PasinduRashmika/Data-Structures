#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*for(int i=0;i<5;++i){
            printf("\n\t%d",i);
        for(int j=0;j<i;++j){
            printf("\n\t\t%d",j);
            for(int k=0;k<j;++k){
                printf("\n\t\t\t%d",k);
            }
        }
    }*/
    for(int i=1;i<=5;i++){
        printf("\n");
        for(int j=1;j<=5;j++){
            printf("%d",j);
        }
    }
}
