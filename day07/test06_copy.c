#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void main()
{
	char data[30] = "SUJIN!!\n";
	char copydata[100];


	FILE* fp;
	fp = fopen("SUJIN.txt", "w");
	if(fp == NULL) {
		fprintf(stderr, "ERROR!");
		exit(1);
	}
	fprintf(fp, "%s", data);
	printf("%s", data);
	fclose(fp);


	FILE* cpfp;
	cpfp = fopen("SUJIN_copy.txt", "w");
	if(cpfp == NULL) {
		fprintf(stderr, "ERROR!");
		exit(1);
	}
	fprintf("%s", copydata);
	printf("%s", copydata);
	fclose(cpfp);
}
