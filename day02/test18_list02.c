#include <stdio.h>
#include <stdlib.h>

typedef struct NODE{
	int data;
	struct NODE* next;
}node;

void main()
{
	// head는 data 없어도 OK, 첫 번째 노드를 가리킨다.
	node* head = (node*)malloc(sizeof(node));
	head->next = NULL;


	// 첫 번째 노드
	node* node1 = (node*)malloc(sizeof(node));	// (node*) 생략 가능 > 자료형
	node1->data = 10;
	node1->next = NULL;
	head->next = node1;

	// 두 번째 노드
	node* node2 = (node*)malloc(sizeof(node));
	node2->data = 20;
	node2->next = NULL;

	// node1의 next에 node2의 주소를 저장
	node1->next = node2;	// 두 번째 노드를 연결한다.

	// 세 번째 노드
	node* node3 = malloc(sizeof(node));
	node3->data = 30;
	node3->next = NULL;
	node2->next = node3;

	// 첫 번째 노드를 가리키게 한다.
	node* curr = head->next;

	// 마지막 node의 next 값이 NULL 일 때 반복문 종료
	while(curr != NULL){
		printf("%d\n", curr->data);
		curr = curr->next;
	}

	free(node1);
	free(node2);
	free(node3);
}
