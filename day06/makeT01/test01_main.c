#include <stdio.h>

extern char* input();
extern void showf();
void main()
{
	char* str = input();

	showf(str);
	showf("\n");
}
