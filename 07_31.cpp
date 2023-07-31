#include <stdio.h>//---------ջ�����֪ʶ 
#include <stdlib.h>
#include <malloc.h>

typedef struct Node {
	int data;
	struct Node* pNext;
}NODE, * PNODE;

typedef struct Stack {//----	ջ�Ķ��� 
	PNODE pTop;
	PNODE pBot;

}STACK, * PSTACK;
//�������� 
void init(PSTACK);
void push(PSTACK, int);
void traverse(PSTACK);
//bool pop(PSTACK);
void clear(PSTACK );

int main() {
	STACK S;//����һ��ջ
	init(&S);
	int val;
	push(&S, 1);
	push(&S, 2);
	push(&S, 3);
	push(&S, 17);
	push(&S, 16);
	traverse(&S);
	/*	if(pop(&S,&val)){
			printf("��ջ�ɹ�����ջ��Ԫ����%d\n",val);
		}
		else{
			printf("��ջʧ��\n!");
		}
		traverse(&S);*/
	return 0;
}
void init(PSTACK pS) {//��ʼ��Ҫ��ʲô�� ����top��bot��ֵ��һ��ʼ��ջ�϶���һ����״̬ 
	pS ->pTop= (PNODE)malloc(sizeof(PNODE));
	if (NULL == pS->pTop) {
		printf("��̬�ڴ����ʧ�ܣ�\n");
		exit(-1);
	}
	else {
		pS->pBot = pS->pTop;
		pS->pTop->pNext = NULL;//�����ȿ���top����Ҫ�� 
	}
}

void push(PSTACK pS, int val) {
	PNODE pNew = (PNODE)malloc(sizeof(PNODE));
	pNew->data = val;
	pNew->pNext = pS->pTop;
	pS->pTop = pNew;

	return;
}

void traverse(PSTACK pS) {
	PNODE P = pS->pTop;
	while (P != pS->pBot) {
		printf("%3d", P->data);
		P = P->pNext;
	}
	printf("\n");
	return;
}

bool empty(PSTACK pS) {
	if (pS->pBot = pS->pTop) {
		return true;
	}
	else
		return false;
}
bool pop(PSTACK pS, int* pval) {
	if (empty(pS)) {
		return false;
	}
	else {
		PNODE r = pS->pTop;
		*pval = r->data;
		pS->pTop = r->pNext;
		free(r);
		r = NULL;
	}
	return true;
}

void clear(PSTACK pS) {//��� 
	if (empty(pS)) {
		return ;
	}
	else {
		PNODE p = pS->pTop;
		PNODE q = NULL;
		while (p != pS->pBot) {
			q = p->pNext;
			free(p);
			p = q;
		}
		pS->pBot = pS->pTop;
	}
}
