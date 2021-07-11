#include <stdio.h>

#define QUEUE_SIZE 10

typedef enum {true=1,false=0}Boolean;

typedef struct queue{
	int items[QUEUE_SIZE];
	int rear,front;
	int size;

}queue;

void enqueue(queue *q,int x);
int dequeue(queue *q);
void initialize (queue *q);
Boolean isEmpty(queue *q);
Boolean isFull(queue *q);
void Display(queue *q);
int increment(int x);
int main(){
	int x=0;
	queue q;
	initialize(&q);

	printf("Add 6.......\n");
	for(int i=0;i<6;i++){
		printf("Enter a value: ");
		scanf("%d",&x);
		enqueue(&q,x);
	}
	Display(&q);

	printf("Delete 3.......\n");

	for(int i=0;i<3;i++){
		dequeue(&q);
	}
	Display(&q);

	printf("Add 5.......\n");
	for(int i=0;i<5;i++){
		printf("Enter a value: ");
		scanf("%d",&x);
		enqueue(&q,x);
	}
	Display(&q);

}

void initialize (queue *q){

	q->front=0;
	q->rear=-1;
	q->size=0;

}

void enqueue(queue *q,int x){

	if(isFull(q)){
		printf("Queue is full....\n");
	}else{
		//if(){

		//}else{
			q->rear=increment(q->rear);
			q->items[q->rear]=x;
			q->size++;
		//}


	}
}

int dequeue(queue *q){
	if(isEmpty(q)){
		printf("Queue is empty..\n");
	}else{
		int x=q->items[q->front];
		q->front=increment(q->front);
		q->size--;
		return x;
	}

}

Boolean isEmpty(queue *q){
	if(q->size==0){
		return true;
	}else{
		return false;
	}
}

Boolean isFull(queue *q){
	if(q->size==QUEUE_SIZE){
		return true;
	}else{
		return false;
	}
}

void Display(queue *q){

	int x=0;
	x=q->front;
	while(x!=q->rear){
		printf("queue element: %d \n",q->items[x]);
		x=increment(x);
	}
	printf("queue element: %d \n",q->items[q->rear]);
}

int increment(int x){
	if(++x==QUEUE_SIZE){
		x=0;
	}
	return x;
}

//docname,rid thiyen strut ekak hadanna
//eken array ekak hadanna
//structure array methods

