#include  <stdio.h>//--------����ͷ�巨
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
	Lnode p=(LinkList)malloc(sizeof(Lnode));//����һ��ͷ�ڵ� ������ռ� 
	p->data=NULL;
	scanf("%d",&x);
	while(x!999){//��������ֵ����Ч�� 
	Lnode s=(LinkList)malloc(sizeof(Lnode))	;//����һ���ռ��������ֵ
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
	Linklist L;//����ͷ���ṹ��ָ�� 
	
	Link_head_insert(L);//ͷ�巨����ָ��
	
	print_list(L);
	
	return 0; 
}


