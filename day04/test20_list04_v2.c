#include <stdio.h>
#include <stdlib.h>

typedef struct NODE{
	int data;
	struct NODE* next;
}node;

typedef struct{
	node* head;
}headNode;

// headNode 생성 함수
headNode* CreateHeadNode(void)
{
	headNode* newhead = (headNode*)malloc(sizeof(headNode));
	return newhead;

	//  
}

void pre_addNode(node* pnode, int pdata)	// 전위 삽입
{
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data = pdata;
	newNode->next = pnode->next;
	pnode->next = newNode;
}

void rear_addNode(node* pnode, int pdata)	//후위 삽입
{
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data = pdata;
	newNode->next = NULL;

	while(pnode->next != NULL)
	{
		pnode = pnode->next;
	}
	pnode->next = newNode;
}

void ShowNode(node* pnode)	// 노드를 보여주는 함수
{
	node* curr = pnode->next;

	while(curr != NULL)
	{
		printf("%d\n", curr->data);
		curr = curr->next;
	}
}

void AllFreeNode(node* pnode)	// 전체 메모리 해제하는 함수
{
	node* curr = pnode->next;

	while(curr != NULL)
	{
		pnode->next = curr->next;
		free(curr);
		curr = pnode->next;
	}
	free(pnode);
}


void main()
{
/*
	// head 선언
	node* head = (node*)malloc(sizeof(node));
	head->next = NULL;
*/

	node* head = (node*)CreateHeadNode();	// 함수 앞에 형변환 필요
	pre_addNode(head, 10);
	pre_addNode(head, 20);
	rear_addNode(head, 30);
	rear_addNode(head, 40);
	pre_addNode(head, 50);

	ShowNode(head);
	AllFreeNode(head);
	printf("메모리 삭제 완료\n");
}
