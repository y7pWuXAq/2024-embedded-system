/*
	이중 for문 활용 별찍기
*/

#include <stdio.h>

void main()
{
	int num;
	
	printf ("출력할 별의 단 갯수를 입력 ");
	scanf("%d", &num);

	for(int i = 0; i < num; i++){
		for(int j = 1; j <= num-i+1; j++){
			printf(" ");
		}

		for(int j = 0; j <= i*2; j++){
			printf("*");
		}
		printf("\n");
	}

}
