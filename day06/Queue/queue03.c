/* 연결 자료 구조를 이용한 Queue  */

#include <stdio.h>
#include <stdlib.h>

// 연결 리스트 사용을 위한 node 생성
typedef struct NODE {
	int data;
	struct NODE* link;
}node;

// queue
typedef struct {
	node* rear;
	node* front;
}linkQ;

// 큐를 생성하는 함수
linkQ* CreateLinkQ()
{
	linkQ* newQ = (linkQ*)malloc(sizeof(linkQ));	// 동적 메모리 할당
	newQ->front = NULL;	// 큐의 앞을 NULL로 초기화
	newQ->rear = NULL;	// 큐의 뒤쪽을 NULL로 초기화

	printf("linkQ 생성!!\n");
	return newQ;
}

// 큐에 데이터를 삽입하는 함수
void enQueue(linkQ* newQ, int data)
{
	node* newNode = (node*)malloc(sizeof(node));	// 노드 생성
	newNode->data = data;	// 노드에 데이터 저장
	newNode->link = NULL;	// 새로운 노드의 link를 NULL로 설정

	if(newQ->rear == NULL){	// 큐가 비어있을 때
		newQ->front = newNode;	// front와 rear를 새로운 노드로 설정
		newQ->rear = newNode;
	}
	else {	// 큐가 비어있지 않을 때
		newQ->rear->link = newNode;	// 기존 rear의 link를 새로운 노드로 설정
		newQ->rear = newNode;	// rear를 새로운 노드로 업데이트
	}
	printf("ENQUEUE %d 삽입\n", newNode->data);	// 출력
}

// 큐에서 데이터를 추출하는 함수
int deQueue(linkQ* newQ)
{
	node* temp = newQ->front;	// front를 가리키는 임시 포인터 temp 생성
	int data = temp->data;	// 추출 할 데이터를 임시 변수에 저장
	newQ->front = temp->link;	// front를 다음 노드로 이동
	free(temp);

	printf("DEQUEUE %d 추출\n", data);	// 데이터 출력
	return data;
}

// 큐의 모든 요소를 출력하는 함수
void PrintQ(linkQ* newQ)
{
	printf("Queue elements : ");

	node* curr = newQ->front;	// front부터 시작해서 모든 노드를 출력
	while(curr != NULL){
		printf("%d ", curr->data);	// 노드의 데이터를 출력
		curr = curr->link;	// 다음 노드로 이동
	}
	printf("\n");
}

void main()
{
	linkQ* nQ = CreateLinkQ();
	enQueue(nQ, 10);
	enQueue(nQ, 20);
	enQueue(nQ, 30);
	deQueue(nQ);
	PrintQ(nQ);
	enQueue(nQ, 40);
	deQueue(nQ);
	enQueue(nQ, 50);
	PrintQ(nQ);
}

