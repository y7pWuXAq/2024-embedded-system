## 2024-embedded-system
IoT 개발자과정 임베디드시스템 학습 리포지토리



### DAY 01

- 개발환경 설치
	- 라즈베리파이 설치 : https://www.raspberrypi.com/software/
	- sd card formatter 설치 : https://www.sdcard.org/downloads/formatter/sd-memory-card-formatter-for-windows-download/
		- sd카드 리더기를 usb포트에 삽입 후 포맷작업
		
	- putty 설치 : https://www.chiark.greenend.org.uk/~sgtatham/putty/latest.html

	- <업데이트>
		- sudo apt update
		- sudo apt upgrade -y
		- clear

	- 환경설정
		- 편집기 : 코드 작업할 때 사용하는 프로그램(nano)
		- 한글
			- 기존 PC와 같이 사용해서는 안된다.
			- 순서에 맞춰서 사용 (동작중 다른 명령어 처리 X)
			
- 기본 명령어
	- <흰색은 파일 , 파란색은 폴더, 초록색은 실행파일>
	- ls : 현재 위치의 디렉토리 안의 내용(디렉토리, 파일 등)목록을 보여줌
		- -a : 숨겨진 파일을 모두 보여줌
		- -l : 상세하게 보여줌
		- /etc : 환경(기본 설정)에 관련된 디렉토리
		
	- pwd : 현재 내 위치
	- mkdir : 새로운 디렉토리 생성
	- rm -fr : 디렉토리 삭제
	- clear : 화면 초기화
	- cd : 해당 위치로 이동
	- cd .. : 상위 디렉토리로 빠져나옴
	- ctrl + c : 실행취소
	- ctrl + x : 종료(빠져나옴)
	- cp 원본 복사본 : 파일 복사
	
- sudo nano /etc/nanorc -> 관리자 권한(sudo)으로 실행
	- 주석제거
		- autoindent 
		- linenumbers
		- tabsize 8 -> tabsize 2



### DAY 02


		
### DAY 03
- list 예제
	- 전위 삽입 : test19.list03.c
	```C
		void pre_addNode(node* pnode, int pdata)  // 전위삽입 : 새로 만든 node가 head와 연>
		{
			node* newNode = (node*)malloc(sizeof(node));
			newNode->data = pdata;
			newNode->next = pnode->next;
			pnode->next = newNode;
		}

	```

	- 후위 삽입 : test19.list03.c

	```C
		void rear_addNode(node* pnode, int pdata) // 후위삽입 : 새로 만든 node가 마지막 no>
		{
		   node* newNode = (node*)malloc(sizeof(node));
		   newNode->data = pdata;
		   newNode->next = NULL;
		
		   while(pnode->next != NULL)
		   {
		     pnode = pnode->next;
		   }
		
		   pnode->next = newNode;
		}

	```



### DAY 04

- 전체 메모리 해제 함수 : test20_list04.c
- head 노드를 만드는 함수 
	- test20_list04_v2.c (형변환 사용) #주석 안적음 주석 적어야 함!	
	- test20_list04_v3.c 형변환 사용 안하고 함수 수정



### DAY 05

- sudo apt update
- sudo apt upgrade
- 노드 검색 함수 ./day05/test20_list04_v4.c > 30줄 에러남 못고침
- Stack : test21_stack01.c
	- 후입선출 : LIFO 구조
	- test22_stack02.c
- queue : test23_queue01.c
	- 선입선출 : FIFO 구조



### DAY 06

- make : 프로그램 빌드 도구  
   &rarr; makefile 생성 후 make 컴파일 -> 실행은 ./

- makefile
   - 각각의 소스파일을 컴파일하여 오브젝트(Object)파일(.o)을 생성
   - 생성한 오브젝트 파일을 하나로 묶어(링크과정) 실행파일 생성  
   &rarr; 반복되는 컴파일 작업을 자동화
   &rarr; 수정된 소스파일만 컴파일 -> 재컴파일 시간 단축
   
   ```C
		makefile
		test: main.o inputf.o printf.o
			gcc -o test main.c printf.c inputf.c

		main.o: main.c
			gcc -c main.c

		inputf.o: inputf.c
			gcc -c inputf.c

		printf.o: printf.c
			gcc -c printf.c
   ```

 - 연결 자료 구조를 이용한 queue
	- /day06/test26_queue03.c
	
- 파일분할 (Queue 폴더)



### DAY 07



### DAY 08



### 미니프로젝트
