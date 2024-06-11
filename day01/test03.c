#include <stdio.h>

void main()
{

	printf("%d\n", 29);	// 정수출력
	printf("%d\n", 0313);	// 정수 앞의 0은 8진수
	printf("%d\n", 0xACC);	// 16진수
	printf("%f\n", 3.14);	//

	printf("int : %d\n", sizeof(int));
	printf("float : %d\n", sizeof(float));
	printf("double : %d\n",  sizeof(double));

	printf("%c\n", 'A');
	printf("%d\n", 'A');	// 문자를 정수로 출력
	printf("%d\n", 'a');	// 문자를 정수로 출력
	printf("%c\n", 97);	// 정수를 문자로 출력

	printf("%s\n", "RaspberryPi\n");

}
