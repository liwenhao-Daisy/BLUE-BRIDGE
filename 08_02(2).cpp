#include <stdio.h>//-----------���У����� 
#include <stdlib.h>

typedef struct LinkNode {//--------����ṹ������ 
	int data;//ָ���� 
    struct LinkNode *next;
}LinkNode;

typedef struct{
	LinkNode *front,*rear;//����ͷ������β 
}LinkQueue;

int main()
{
     LinkQueue Q;
     init(&Q);
     int val;
     en_queue(&Q,2);
     en_queue(&Q,2);
     en_queue(&Q,2);
     en_queue(&Q,2);
     en_queue(&Q,2);
   //  traverse(&Q);
   bool ret;
     de_enque(&Q,&val);
     
 	
 	return 0;
}

void init(LinkQueue *Q){//���г�ʼ����������Ȳ���Ϊ�� 
	Q.front=(LinkNode *)malloc(sizeof(LinkNode));
	Q.front=Q.rear=NULL;
}
void  en_queue(LinkQueue *Q,int val) {//��� 
	LinkNode *r=(LinkNode *)malloc(sizeof(LinkNode));
	r->data=val;
	r->next=NULL;//Ҫ��r��nextָ��ָ��null 
	Q.rear->next=r;
	Q.rear=r;
}

//void traverse(LinkQueue *Q){
//		int i= Q.front;//��ȡ��ͷ
//		while(i!=Q.rear){
//			printf("%d",p->pbase[i])
//		} 
//	
//}
bool de_queue(LinkQueue *Q,int *pval){//���� 
	if(Q.front=Q.rear){
		return false;
	}
	LinkNode *q=Q.front->next;
	*pval=q->data;
	Q.front->next=q->next;
	if(Q.rear=q){
		Q.front=Q.rear;
	}
	free(q);
	return true;
	
}
