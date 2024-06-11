/*
	File : project01_Login.c
	Created : 24-03-22
	Author : 노수진

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>


#define ID_LENGTH 50
#define PASSWORD_LENGTH 50
#define FILENAME "myinfo.txt"

// 유저 정보를 담는 구조체
struct User {
	char id[ID_LENGTH];
	char password[PASSWORD_LENGTH];
};

// 파일에서 유저 정보를 읽어오는 함수
struct User* readUserInfo() {
	FILE *file = fopen("myidpw.txt", "r");
		if (file == NULL) {
			printf("파일을 열 수 없습니다.\n");
			exit(1);
		}

	// 구조체 포인터 동적 할당
	struct User *user = (struct User*)malloc(sizeof(struct User));
	if (user == NULL) {
		printf("메모리를 할당할 수 없습니다.\n");
		exit(1);
	}

	// 파일에서 아이디와 비밀번호 읽어오기
	fscanf(file, "%s %s", user->id, user->password);
	fclose(file);
	return user;
}

// 유저 정보를 검증하는 함수
int validateUser(struct User* user, char* input_id, char* input_password) {
	if (strcmp(user->id, input_id) == 0 && strcmp(user->password, input_password) == 0) {
		return 1; // 아이디와 비밀번호가 일치함
	}
	else {
		return 0; // 아이디와 비밀번호가 일치하지 않음
	}
}

int main() {

	char input_id[ID_LENGTH];
	char input_password[PASSWORD_LENGTH];
	char data[100] = "NAME : SUJIN\nBIRTHDAY : 0421\n";

	printf("아이디를 입력하세요 : ");
	scanf("%s", input_id);
	printf("비밀번호를 입력하세요 : ");
	scanf(" %s", input_password);

	// 파일에서 유저 정보 읽어오기
	struct User* user = readUserInfo();

	// 유저 정보 검증
	if (validateUser(user, input_id, input_password)) {
		printf("로그인 성공!\n");

		// 파일 열기
		FILE *myinfo = fopen("myinfo.txt", "w");

		if (myinfo == NULL) {
			printf("파일을 열 수 없습니다.\n");
			exit(1);
		}

		// 파일 내용 출력
		fprintf(myinfo, "%s", data);
		printf("%s", data);

		fclose(myinfo);

	}	else {
			printf("아이디 또는 비밀번호가 잘못되었습니다.\n");
	}

		// 동적 할당 해제
		free(user);

		return 0;
}
