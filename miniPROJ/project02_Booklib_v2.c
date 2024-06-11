/*
	File : project02_Booklib_v2.c
	Created : 24-03-25
	Author : 노수진
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 도서 정보를 담는 구조체
typedef struct Book {
	char title[100];
	char author[100];
	float price;
	int is_borrowed; // 대출 여부(0: 대출 가능, 1: 대출 중)
	struct Book *next;
} Book;

// 연결 리스트의 헤드 포인터
Book *head = NULL;

// 도서를 등록하는 함수
void addBook() {
	printf("\n **-** 도서 등록 **-** \n");
	Book* newBook = (Book*)malloc(sizeof(Book));
	printf("TITLE : ");
	scanf("%s", newBook->title);
	printf("WRITER : ");
	scanf("%s", newBook->author);
	printf("PRICE : ");
	scanf("%f", &newBook->price);
	newBook->is_borrowed = 0; // 초기에는 대출되지 않음
	newBook->next = head;
	head = newBook;
	printf("\n **-** 도서가 등록되었습니다. **-** \n");
}

// 도서를 검색하고 대출 여부를 확인하는 함수
void searchBook() {
	char title[100];

	printf("검색할 도서 제목을 입력하세요 : ");
	scanf("%s", title);
	Book *curr = head;
	int found = 0;
	while (curr != NULL) {
		if (strcmp(curr->title, title) == 0) {
			printf("\n **-** 검색 도서 정보 **-** \n");
			printf("BOOK TITLE : %s\n", curr->title);
			printf("WRITER : %s\n", curr->author);
			printf("PRICE : %.2f\n", curr->price);
			if (curr->is_borrowed)
				printf("이 도서는 현재 대출 중입니다.\n");
			else
				printf("이 도서는 현재 대출 가능합니다.\n");
			found = 1;
			break;
		}
		curr = curr->next;
	}
	if (!found)
		printf("도서를 찾을 수 없습니다.\n");
}

// 도서를 삭제하는 함수
void deleteBook() {
    char title[100];
    printf("삭제할 도서 제목을 입력하세요 : ");
    scanf("%s", title);
    Book *curr = head;
    Book *prev = NULL;
    int found = 0;
    while (curr != NULL) {
        if (strcmp(curr->title, title) == 0) {
            if (prev == NULL)
                head = curr->next;
            else
                prev->next = curr->next;
            free(curr);
            printf("\n **-** 도서가 삭제되었습니다. **-**\n");
            found = 1;
            break;
        }
        prev = curr;
        curr = curr->next;
    }
    if (!found)
    	printf("\n **-** 도서를 찾을 수 없습니다. **-**\n");
}

// 등록된 모든 도서를 출력하는 함수
void printBooks() {
	if (head == NULL) {
		printf("\n **-** 등록된 도서가 없습니다. **-** \n");
		return;
	}

	printf("\n **-** 도서 리스트 **-** \n");
	Book* curr = head;
	while (curr != NULL) {
		printf("BOOK TITLE : %s\n", curr->title);
		printf("WRITER : %s\n", curr->author);
		printf("PRICE : %.2f\n", curr->price);
		if (curr->is_borrowed)
			printf("대출 상태 : 대출 중\n");
		else
			printf("대출 상태 : 대출 가능\n");
		curr = curr->next;
	}
}

int main() {

	int choice;

	printf("\n **-** 도서관리 프로그램 시작 **-** \n");
	printf("\n");

	while(choice != 0) {
	printf("\n **-** 도서관리 프로그램 작업 메뉴 **-**\n");
	printf("\n");
	printf("1. 도서 등록\n");
	printf("2. 도서 검색\n");
	printf("3. 도서 삭제\n");
	printf("4. 도서 목록\n");
	printf("0. 종료\n");
	printf("\n");
	printf("작업 할 프로그램 번호를 선택하세요 : ");
	scanf("%d", &choice);

	switch(choice) {
		case 1:
			addBook();
			break;
		case 2:
			searchBook();
			break;
		case 3:
			deleteBook();
			break;
		case 4:
			printBooks();
			break;
		case 0:
			printf("\n **-** 도서관리 프로그램을 종료합니다. **-**\n");
			break;
		default:
			printf("\n **-** 메뉴 번호를 다시 확인하고 선택해주세요. **-**\n");
	}
}

// 등록된 도서들을 삭제하고 메모리 해제
	Book *curr = head;
	Book *next;
	while (curr != NULL) {
		next = curr->next;
		free(curr);
		curr = next;
   }

   return 0;
}
