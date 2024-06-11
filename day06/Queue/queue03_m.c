/* 연결 자료 구조를 이용한 Queue  */

#include "queue03_h.h"

void main()
{
	linkQ* nQ = CreateLinkQ();
	enQueue(nQ, 10);
	enQueue(nQ, 20);
	enQueue(nQ, 30);
	deQueue(nQ);
	PrintQ(nQ);
	enQueue(nQ, 40);
	deQueue(nQ);
	enQueue(nQ, 50);
	PrintQ(nQ);
}

