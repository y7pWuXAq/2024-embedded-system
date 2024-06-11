/*
	두 정수를 입력 받고 크기 비교하기
*/

#include <stdio.h>

// if를 사용해서 출력
/*
void main()
{
	int a, b;
	printf("두 정수를 입력하세요(같은 수 X).");
	scanf("%d %d", &a, &b);

	if (a > b)
	{
		printf("%d\n", a);
	}

	if (a < b)
	{
		printf("%d\n", b);
	}
}
*/

// 삼항 연산자를 사용해서 출력

void main()
{
	int a, b;
	printf("첫 번째 정수를 입력하세요 : ");
	scanf("%d", &a);
	printf("두 번째 정수를 입력하세요 : ");
	scanf("%d", &b);

	int num;
	num = (a > b) ? a : b;
	printf("큰 수는 %d입니다.\n", num);
}
