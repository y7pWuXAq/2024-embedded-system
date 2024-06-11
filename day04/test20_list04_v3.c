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
}

void pre_addNode(headNode* pnode, int pdata)	// 전위 삽입
{
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data = pdata;
	newNode->next = pnode->head;	// headNode
	pnode->head = newNode;
}

void rear_addNode(headNode* pnode, int pdata)	//후위 삽입
{
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data = pdata;
	newNode->next = NULL;

/*
	pnode의 타입이 headNode 타입이기 때문에 next와 data에 접근 X
	node 타입의 curr 생성 해서 next와 data에 접근
*/
	node* curr = pnode->head;

	while(curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = newNode;
}

void ShowNode(headNode* pnode)	// 노드를 보여주는 함수
{
	node* curr = pnode->head;

	while(curr != NULL)
	{
		printf("%d\n", curr->data);
		curr = curr->next;
	}
}

void AllFreeNode(headNode* pnode)	// 전체 메모리 해제하는 함수
{
	node* curr = pnode->head;

	while(curr != NULL)
	{
		printf("%d > 노드 삭제\n", curr->data);
		node* temp = curr;
		curr = curr->next;
		free(temp);

//	pnode->next = curr->next;
//	free(curr);
//	curr = pnode->next;
	}
	printf("헤드 삭제\n");
	free(pnode);
}


void main()
{
/*
	// head 선언
	node* head = (node*)malloc(sizeof(node));
	head->next = NULL;
*/

	headNode* newhead = CreateHeadNode();
	pre_addNode(newhead, 10);
	pre_addNode(newhead, 20);
	rear_addNode(newhead, 30);
	rear_addNode(newhead, 40);
	pre_addNode(newhead, 50);

	ShowNode(newhead);
	AllFreeNode(newhead);
	printf("메모리 삭제 완료\n");
}
