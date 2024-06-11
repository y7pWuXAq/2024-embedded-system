#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void main()
{
	char data[100] = "ID PW\n";

	FILE* fp;
	fp = fopen("myidpw.txt", "w");
	if(fp == NULL) {
	fprintf(stderr, "ERROR!");
	exit(1);
	}

	fprintf(fp, "%s", data);
	printf("%s", data);

	fclose(fp);
}
