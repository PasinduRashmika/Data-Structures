#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 15

int selection(int i);
int display(int i);
char j,temp,i;
char x[15]={'H','S','A','F','R','P','E','C','Z','W','G','J','B','Q','L'};

int selection(int i){

	for(i=0;i<N-1;i++){

		int min =i;
		for(j=i+1;j<N;j++){
			if(x[j]>x[min])
				min=j;
		}
		temp=x[i];
		x[i]=x[min];
		x[min]=temp;
	}

}

int display(int i){
	for(i=0;i<N;i++)
		printf("%c\t",x[i]);
}



int main(){
	printf("\n\n\t---------Before sorting-------\n");
	display(i);
	printf("\n\n\t---------After sorting-------\n");
	selection(i);
	display(i);

	return 0;

}







