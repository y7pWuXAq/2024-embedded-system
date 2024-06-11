/* 이진 탐색 */

#include <stdio.h>

int binarySearch(int ary[], int size, int target) {
	int first = 0;
	int last = size;
	int middle;

	while (first <= last) {
		middle = (first + last) / 2;
		if (target == ary[middle]) printf("%d\n", ary[middle]); 
		else {
			if(target > ary[middle]) first = middle +1;
			else last = middle = 1;
		}
	}
	return -1
}


void main()
{
	int ary[] = {1, 2, 3, 4, 5, 6, 7};
	int size = sizeof(ary) / sizeof(ary[0]);
	int first = 0;
	int last = size;
	int middle = 0;

	while(first <= last){
		middle = (first + last) / 2;
		if(target == ary[middle]) printf("%d\n", ary[middle]);
		else {
			if(target > ary[middle]) first = middle + 1;
			else last = middle -1;
		}
	}
}
