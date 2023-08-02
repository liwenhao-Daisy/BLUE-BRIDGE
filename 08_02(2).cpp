#include <stdio.h>//-----------队列（链表） 
#include <stdlib.h>

typedef struct LinkNode {//--------定义结构体数组 
	int data;//指针域 
    struct LinkNode *next;
}LinkNode;

typedef struct{
	LinkNode *front,*rear;//链表头和链表尾 
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

void init(LinkQueue *Q){//队列初始化，二者相等并且为空 
	Q.front=(LinkNode *)malloc(sizeof(LinkNode));
	Q.front=Q.rear=NULL;
}
void  en_queue(LinkQueue *Q,int val) {//入队 
	LinkNode *r=(LinkNode *)malloc(sizeof(LinkNode));
	r->data=val;
	r->next=NULL;//要让r的next指针指向null 
	Q.rear->next=r;
	Q.rear=r;
}

//void traverse(LinkQueue *Q){
//		int i= Q.front;//获取队头
//		while(i!=Q.rear){
//			printf("%d",p->pbase[i])
//		} 
//	
//}
bool de_queue(LinkQueue *Q,int *pval){//出队 
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
