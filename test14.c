/*
	배열 입력으로 받기, 역순 출력
*/

#include <stdio.h>
#define MAX 20

void main()
{
	int arr[MAX];
	int num;

	printf("Input Data(20 이하의 정수 입력) : ");
	scanf("%d", &num);

	// 출력
	for(int i = 0; i < num; i++)
	{
		printf("%d번째 방 배열 입력\n",i);
		scanf("%d", &arr[i]);
	}

	printf("입력 된 배열 : ");
	for(int i = 0; i < num; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");

	// 역순 출력
	printf("입력 된 배열의 역순 출력 : ");
	for(int i = num -1; i >= 0; i--)
	{
		printf("%d", arr[i]);
	}
	printf("\n");

}
