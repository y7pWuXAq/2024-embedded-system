/* 순차 탐색 */

#include <stdio.h>

int lSerch(int* arr, int n, int valeu)
{
	for(int i = 0; i < n; i++){
		if(arr[i] == value)
		return i;
	}
}

void main()
{
	int ary[] = {3, 5, 2, 4, 9, 8, 1};
	int ridx;
	ridx = lSeach(ary, size, 9);

	if(ridx == -1) printf("찾는 원소가 없습니다.\n");
	else {
		printf("찾은 인덱스 : %d\n", ridx);
	}
}
