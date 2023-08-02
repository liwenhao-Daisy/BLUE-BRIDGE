#include <stdio.h>//-----------队列（循环队列） 
#include <stdlib.h>

#define maxsize 5
typedef struct {//--------定义结构体数组 
	int data[maxsize];
	int front,rear;
}SqQueue;


//void init_queue(SqQueue *);//因为要传参进去，所以要加* 
is_empty(SqQueue Q){
	return Q.front=Q.rear;
}

int main(){
	SqQueue Q;
	Init_queue(Q);
	bool ret;
	ret=is_empty(Q);
	int val;
	if(ret){
		printf("是空的\n");
	}else{
		printf("不是空的\n");
		
	}
	en_queu(&Q,3);
	en_queu(&Q,2);
	en_queu(&Q,6);
	en_queu(&Q,7);
	if(ret){
		printf("入队成功\n");
	}
	else{
		printf("入队不成功\n");
	}
	ret=de_queue(SqQueue *Q,int *pval) 
	if(ret){
		printf("出队成功，出队元素为%d\n",val);
	}
	else{
		printf("出队失败\n");
	}
	
	return 0;
}


void Init_queue(SqQueue *Q){
	
		Q.front=Q.rear=0; 
}
bool en_queue(SqQueue *Q,int val){//入队 
	if((Q.rear +1)%maxsize==Q.front){
		return false;
	}
	Q.data[Q.rear]=val;
	Q.rear=(Q.rear+1)%maxsize;
	return true;
}

//出队
bool de_queue(SqQueue *Q,int *pval) {
	if(Q.rear=Q.front){
		return false;
	}
	*pval=Q.data[Q.front]
	Q.front=(Q.front+1)%maxsize;
	return true;
	
}
