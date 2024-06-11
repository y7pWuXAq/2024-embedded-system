#include <stdio.h>

void main()
{
	char ch, ch2;
	int n;

	printf("문자 : ");
	scanf("%c", &ch);

	printf("숫자 : ");
	scanf("%d", &n);

	printf("%c, %d\n", ch, n);

	// 숫자 입력 이후 엔터키 남아 있어서 띄어쓰기 넣거나
	// getchar();로 받아서 없애주기
	printf("문자 : ");
	scanf(" %c", &ch2);
	printf("%c, %d, %c\n", ch, n, ch2);
}
