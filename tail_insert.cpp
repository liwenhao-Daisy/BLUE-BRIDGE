#include <stdio.h>//-------β�巨�������� 
#include <stdlib.h>

typedef struct Lnode{
	int data;
	struct Lnode * pNext;
}Lnode,*LinkList; 

//����Ų��ҽڵ�ֵ
Lnode *Getelem(LinkList L,int pos){
	
	int j=0;
	if(pos<0){
		return NULL;
	}
	while(L&&j<pos){
		L=L->pNext;
		j++;	
	} 
	return L;
}
//��ֵ����
LinkList locatelem(LinkList L,int poaval,int *pval){
	while(L){
		if(L->data=posval){
			return L;
		}
			L=L->pNext;
	}
	return NULL;
} 



//β�巨�������� 

void list_tail_insert(Lnode* &L);
int main(){
	LinkList L;
	
	list_tail_insert(L);
	
	print_list(L);
	 
	return 0;
}

void list_tail_insert(Lnode* &L){
	L=(LinkList)malloc(sizeof(Lnode));//����ͷ�ڵ�ռ�
	L->pNext=NULL;
	int x;
	scanf("%d",&x);
	Lnode *s,*r=L;
	while(x!=999){
		s=(LinkList)malloc(sizeof(Lnode));
		s->data=x;
		r->pNext=s;
		r=s;
		scanf("%d",&x);
	} 
	r->pNext=NULL;
	printf("\n");
	return ;
}

void print_list(LinkList l){
	L=L->pNext;
	while(L!=NULL){
		printf("%3d",L->pNext);
		L=L->pNext;
	}
	printf("\n");
}
