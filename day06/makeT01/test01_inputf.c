#include <stdio.h>

char* input()
{
	static char str[10];
	static char* pstr = str;

	printf("입력 > ");
	scanf("%s", str);

	return pstr;
}
