#include <stdio.h>
#include <stdlib.h>

int ins(int i);
int selection(int i);
int display(int i);

int j,i;
char ar[5][25];

int ins(int i){
	for(i=0;i<5;i++){
		printf("enter %d word:\n",i+1);
		scanf("%s",ar[i]);
	}
}



int selection(int i){

	for(i=0;i<5;i++){

		int min =i;
		for(j=i+1;j<5;j++){
			if(ar[j]<ar[min])
				min=j;
		}
		char p[25];
		strcpy(p,ar[j]);
		strcpy(ar[j],ar[j+1]);
		strcpy(ar[j+1],p);
	}

}

int display(int i){
	for(i=0;i<10;i++)
		printf("%d\n",ar[i]);
}



int main(){
	printf("enter 10 values\n");
	ins(i);
	printf("\n\nbefore sorting\n");
	display(i);
	printf("\n\nafter sellection sorting\n");
	selection(i);
	display(i);

	return 0;

}
