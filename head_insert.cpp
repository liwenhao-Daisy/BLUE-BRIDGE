#include  <stdio.h>//--------链表头插法
#include <stdlib.h>

typedef struct Lnode{
	int data;
	struct Lnode * pNext;
}Lnode,*Linklist; 

//Link_head_insert(LinkList &L);
//void print_list(LinkList &L);
void  Link_head_insert(LinkList &L){
	
	Lnode *s;
	int x; 
	Lnode p=(LinkList)malloc(sizeof(Lnode));//建立一个头节点 ，申请空间 
	p->data=NULL;
	scanf("%d",&x);
	while(x!999){//控制输入值的有效性 
	Lnode s=(LinkList)malloc(sizeof(Lnode))	;//申请一个空间存放输入的值
	s->data=x;
	s->pNext=p->pNext;
	p->pNext=s; 
	scanf("%d",&x);
	}
	return 0; 
}
void print_list(LinkList &L){
	p=p->pNext;
	while(p!=NULL){
		printf("%3d",p->pNext);
	}
	printf("\n");
	return 0;
}
int main(){
	Linklist L;//链表头，结构体指针 
	
	Link_head_insert(L);//头插法建立指针
	
	print_list(L);
	
	return 0; 
}


