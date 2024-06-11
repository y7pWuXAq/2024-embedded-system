/* 연결 리스트로 구현 */

#include <stdio.h>
#define STACK_SZ 10


typedef struct STACK{
	int buf[STACK_SZ];
	int top;
}stack;


void push(stack* st, int data)
{
	st->top++;
	st->buf[st->top] = data;
	printf("%d SUCCESS PUSH\n", data);
}

int pop(stack* st)
{
	int data = st->buf[st->top];
	st->top--;
	return data;
}


void main()
{
	// stack* newSt = (stack*)malloc(sizeof(stack));
	// newSt -> top = -1

	stack newSt.top = -1;

	push(&newSt, 10);
	push(&newSt, 20);
	push(&newSt, 30);

	printf("%d POP!\n", pop(&newSt));
	printf("%d POP!\n", pop(&newSt));
	printf("%d POP!\n", pop(&newSt));

}
