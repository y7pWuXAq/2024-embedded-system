#include <stdio.h>

typedef struct node{
	int data;
	struct node *next;	// 자기 자신을 가리키는 구조체 변수(자기 참조 구조체)
}Node;

void main()
{
	Node *node1	 = malloc(sizeof(Node));
	node1 -> data = 10;
	node1 -> next = NULL;
	printf("data : %d, next : %d\n", node1->data, node1->next);

	Node *node2 = malloc(sizeof(Node));
	node2 -> data = 11;
	node2 -> next = NULL;
	printf("data : %d, next : %d\n", node2->data, node2->next);

	node1 -> next = node2;

	printf("node2-data : %d\n", node2);
	free(node1);
	free(node2);

}
