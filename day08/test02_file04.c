#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

void main()
{
	int fd1, fd2;
	char str[] = "WONDERFUL DAY!!";
	char buf[1024];

	fd1 = open("mytest01.txt", O_RDWR | O_CREAT | O_TRUNC, 00600);
	if(fd1 < 0) printf("OPEN ERROR!!\n");
	if(write(fd1, str, strlen(str)) < 0) printf("WRITE ERROR!!\n");
	close(fd1);

	fd1 = open("mytest01.txt", O_RDONLY);
	if(read(fd1, buf, 1024) < 0) printf("READ ERROR!!");

	printf("%s\n", buf);
	close(fd1);

	fd2 = open("mytest01_copy.txt", O_RDWR | O_CREAT | O_TRUNC, 00600);
	if(fd2 < 0) printf("OPEN ERROR!!\n");
	if(write(fd2, buf, strlen(str)) < 0) printf("WRITE ERROR!!\n");

	close(fd2);

}
