#include <stdio.h>//---------栈的相关知识 
#include <stdlib.h>
#include <malloc.h>

typedef struct Node {
	int data;
	struct Node* pNext;
}NODE, * PNODE;

typedef struct Stack {//----	栈的定义 
	PNODE pTop;
	PNODE pBot;

}STACK, * PSTACK;
//函数声明 
void init(PSTACK);
void push(PSTACK, int);
void traverse(PSTACK);
//bool pop(PSTACK);
void clear(PSTACK );

int main() {
	STACK S;//声明一个栈
	init(&S);
	int val;
	push(&S, 1);
	push(&S, 2);
	push(&S, 3);
	push(&S, 17);
	push(&S, 16);
	traverse(&S);
	/*	if(pop(&S,&val)){
			printf("出栈成功，出栈的元素是%d\n",val);
		}
		else{
			printf("出栈失败\n!");
		}
		traverse(&S);*/
	return 0;
}
void init(PSTACK pS) {//初始化要做什么？ ，给top和bot赋值，一开始的栈肯定是一个空状态 
	pS ->pTop= (PNODE)malloc(sizeof(PNODE));
	if (NULL == pS->pTop) {
		printf("动态内存分配失败！\n");
		exit(-1);
	}
	else {
		pS->pBot = pS->pTop;
		pS->pTop->pNext = NULL;//会优先考虑top的重要性 
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

void clear(PSTACK pS) {//清空 
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
