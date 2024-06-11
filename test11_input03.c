/*
	1. 이름 입력 후 나이 입력하여 출력
	2. 이름, 나이 한 줄로 출력
*/

#include <stdio.h>

void main()
{
	char name[10];
	int age;

	printf("이름 : ");
	scanf("%s", name);	// 배열은 & 사용 x 배열 이름은 배열 시작의 주소

	printf("나이 : ");
	scanf("%d", &age);

	printf("이름 : %s, 나이 : %d 입니다.\n", name, age);
}
