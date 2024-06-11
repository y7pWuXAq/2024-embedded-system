#include <stdio.h>

void bubSort(int* ary, int n)
{
	int temp;
	for(int i = 0; i < size -1; i++){
		for(int i = j; j < size -1; j++){
			if(ary[0] > ary[1]){
				temp = ary[0];
				ary[0] = ary[1];
				ary[1] = temp;
			}
		}
	}
}


void main()
{
	int ary[] = {9, 4, 8, 15, 3, 7, 2, 1};
	int size = sizeof(ary) / sizeof(ary[0]);
	bubSort(ary, size);

// 오름 차순으로 정리하기

/* 상단에 함수로 정리
	int temp;

	for(int i = 0; i < size -1; i++){
		for(int i = j; j < size -1; j++){
			if(ary[0] > ary[1]){
				temp = ary[0];
				ary[0] = ary[1];
				ary[1] = temp;
			}
		}
	}
*/

}
