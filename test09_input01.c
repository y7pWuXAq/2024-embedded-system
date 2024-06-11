#include <stdio.h>

void main()
{
	int n;
	printf("정수 한 개 입력 : ");
	scanf("%d", &n);	// scanf : C의 입력 == C++ cin
	// 변수를 입력하는 게 아니라 변수의 주소 입력

	if (n == 1)
	{
		printf("입력 한 숫자 : 1\n");
	}
	if (n == 2)
	{
		printf("입력 한 숫자 : 2\n");
	}
	if (n == 3)
	{
		printf("입력 한 숫자 : 3\n");
	}
	if (n == 4)
	{
		printf("입력 한 숫자 : 4\n");
	}
	if (n == 5)
	{
	 printf("입력 한 숫자 : 5\n");
	}
}
