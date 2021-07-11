#include <stdio.h>
#include <stdlib.h>

int main(){
	char pc[5][25];
	int i,j;
	for(i=0;i<5;i++){
		printf("enter computer type %d:",i+1);
		scanf("%s",pc[i]);
	}

	for(i=0;i<5;i++)
		printf("c %d type:%s\n",i+1,pc[i]);

	for(i=4;i>=0;i--){
		for(j=0;j<i;j++){
			char p[25];
			if(strcmp(pc[j],pc[j+1])>0){
                printf("%s",pc[j]);
				strcpy(p,pc[j]);
				strcpy(pc[j],pc[j+1]);
				strcpy(pc[j+1],p);

			}
		}
	}
	printf("\n after sorting \n");

	for(i=0;i<5;i++)
		printf("%s \n",pc[i]);

	return 0;
}
