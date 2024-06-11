/* 배열로 구현 */

#include <stdio.h>
#define STACK_SZ 10
#define TRUE 1
#define FALSE 0

int stack[STACK_SZ];
int top = -1;

void push();
int pop();
int isFull();
int isEmpty();

void main()
{
	push(3);
	push(5);
	push(10);

	printf("%d\n", pop());

}

int isFull()
{
	if(top == STACK_SZ -1){
		return 1;	// 0이 아니면 모두 참
	}
	else return 0;
}

int isEmpty()
{
	if(top <= -1){
		return 1;
	}
	else return 0;
}

void push(int data)
{
/*
	if(top == STACK_SZ -1){
		printf("STACK OVERFLOW!!\n");
		return;
	}
*/
	if(isFull()){
		printf("STACK OVERFLOW!!\n");
		return;
	}
	stack[++top] = data;
}

int pop()
{
/*
if(top == -1){
		printf("STACK UNDERFLOWER\n");
		return -1;
	}
*/
	if(isEmpty())
	{
		printf("STACK UNDERLOWER\n");
		return -1;
	}
	return stack[top];
//	top--;
}
