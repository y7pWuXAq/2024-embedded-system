/* 연결 자료 구조를 이용한 Queue  */

#ifndef queue03_h.h
#define queue03_h.h
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

// 큐에 데이터를 삽입하는 함수
void enQueue(linkQ* newQ, int data)

// 큐에서 데이터를 추출하는 함수
int deQueue(linkQ* newQ)

// 큐의 모든 요소를 출력하는 함수
void PrintQ(linkQ* newQ)

#endif
