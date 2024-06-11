/* 연결 리스트를 이용한 순차 자료 구조 */

#include <stdio.h>
#include <stdlib.h>
#define QSIZE 10

typedef struct {
	int front;
	int rear;
	char queue[QSIZE];
}queue;

queue* create()
{
	queue* newqueue = (queue*)malloc(sizeof(queue));
	if(newqueue == NULL) exit(1);
	newqueue->front = -1;
	newqueue->rear = -1;
	return newqueue;
}

void enqueue(queue* NewQ, char item)
{
	if(NewQ->rear == QSIZE -1){
		printf("Queue is Full!!\n");
		return;
	}
	NewQ->queue[++NewQ->rear] = item;
	printf("queue->rear : %c\n", NewQ->queue[NewQ->rear]);
}

char dequeue(queue* NewQ)
{
	if(NewQ->front == NewQ->rear){
		printf("Queue is Empty!!\n");
		return -1;
	}
	else {
		char deQue = NewQ->queue[++(NewQ->front)];
		return deQue;
	}
}

void printQueue(queue* NewQ)
{
	if(NewQ->front == NewQ->rear){
		printf("Queue is Empty!!\n");
	}
	else {
		for(int i = NewQ->front+1; i <= NewQ->rear; i++){
		printf("Queue elements : %c\n", NewQ->queue[i]);
		}
	}
	printf("\n");
}

void main()
{
	queue* qa = create();
	enqueue(qa, 'A');
	enqueue(qa, 'B');
//	enqueue(qa, 'C');
//	enqueue(qa, 'D');

	printf("dequeue() : %c\n", dequeue(qa));
	printf("dequeue() : %c\n", dequeue(qa));

	printQueue(qa);
}
