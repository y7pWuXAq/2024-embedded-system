/*
	계산기
*/

#include <stdio.h>

int main()
{
	int a, b;
	char op;

	printf("두 개의 정수를 입력하세요(띄어쓰기로 구분)\n");
	scanf("%d %d", &a, &b);
	printf("연산 기호를 입력하세요 (+ - * /)\n");
	scanf(" %c", &op);

	if(op == '+')
	{
		printf("%d %c %d = %d\n", a, op, b, a + b);
	}
	else if(op == '-')
	{
		printf("%d %c %d = %d\n", a, op, b, a - b);
	}
	else if(op == '*')
 {
		printf("%d %c %d = %d\n", a, op, b, a * b);
 }
	else if(op == '/')
	{
		printf("%d %c %d = %d\n", a, op, b, a / b);
	}
	else
	{ }
}
