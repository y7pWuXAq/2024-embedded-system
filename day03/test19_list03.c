#include <stdio.h>
#include <stdlib.h>

typedef struct NODE{
	int data;
	struct NODE* next;
}node;

void pre_addNode(node* pnode, int pdata)	// 전위삽입 : 새로 만든 node가 head와 연결
{
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data = pdata;
	newNode->next = pnode->next;
	pnode->next = newNode;
}

void rear_addNode(node* pnode, int pdata)	// 후위삽입 : 새로 만든 node가 마지막 node가 된다.
{
	// newNode 생성
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data = pdata;
	newNode->next = NULL;

	// 반복문으로 node->next 값이 NULL을 찾기
	while(pnode->next != NULL)
	{
		pnode = pnode->next;
	}
	// node->next 의 값이 NULL인 node에 새로 만든 newNode 삽입
	pnode->next = newNode;
}

// node 출력 함수
void showNode(node* pnode)
{
 node* curr = pnode->next;

 while(curr != NULL)
 {
 	printf("%d\n", curr->data);
 	curr = curr->next;
 }
}


void main()
{
	node* head = (node*)malloc(sizeof(node));	// (node*) 자료형 생략 무관
	head->next = NULL;

	pre_addNode(head, 10);	// 첫 번째 노드로 삽입
	pre_addNode(head, 20);
	rear_addNode(head, 30);
	rear_addNode(head, 40);
	pre_addNode(head, 50);

	showNode(head);

/* showNode() 함수로 만듬
	node* curr = head->next;

	while(curr != NULL){
		printf("%d\n", curr->data);
		curr = curr->next;
	}

	printf("\n");
	curr = head;
*/

/*
// 임시 변수 만들어서 지우기
	while(curr != NULL){
		node* temp = curr;
		curr = curr->next;

		if(curr != NULL){
			printf("%d 삭제\n", curr->data);
		}
		free(temp);
	}
*/

/*	메모리 할당 지우는 코드
	while(curr != NULL)
	{
		head->next = curr->next;
		free(curr);
		curr = head->next;
	}

	printf("%d, %d\n", head->next, curr);
	free(head);	// 마지막 head 까지 삭제

*/
}
