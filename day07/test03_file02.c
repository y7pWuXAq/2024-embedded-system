#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>	// 헤더파일 필요
#include <unistd.h>

void main()
{
	char msg[]= "Linux Test!!\n";
	int fd;

	open("file02.txt", O_CREAT | O_WRONLY);
	if(fd == -1) {
		printf("file open ERROR!");
		exit(1);
	}
	printf("file descriptor : %d\n", fd);

	if(write(fd, msg, sizeof(msg)) == -1) {
		printf("file write ERROR!");
	}
	close(fd);
}
