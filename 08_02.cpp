#include <stdio.h>//-----------���У�ѭ�����У� 
#include <stdlib.h>

#define maxsize 5
typedef struct {//--------����ṹ������ 
	int data[maxsize];
	int front,rear;
}SqQueue;


//void init_queue(SqQueue *);//��ΪҪ���ν�ȥ������Ҫ��* 
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
		printf("�ǿյ�\n");
	}else{
		printf("���ǿյ�\n");
		
	}
	en_queu(&Q,3);
	en_queu(&Q,2);
	en_queu(&Q,6);
	en_queu(&Q,7);
	if(ret){
		printf("��ӳɹ�\n");
	}
	else{
		printf("��Ӳ��ɹ�\n");
	}
	ret=de_queue(SqQueue *Q,int *pval) 
	if(ret){
		printf("���ӳɹ�������Ԫ��Ϊ%d\n",val);
	}
	else{
		printf("����ʧ��\n");
	}
	
	return 0;
}


void Init_queue(SqQueue *Q){
	
		Q.front=Q.rear=0; 
}
bool en_queue(SqQueue *Q,int val){//��� 
	if((Q.rear +1)%maxsize==Q.front){
		return false;
	}
	Q.data[Q.rear]=val;
	Q.rear=(Q.rear+1)%maxsize;
	return true;
}

//����
bool de_queue(SqQueue *Q,int *pval) {
	if(Q.rear=Q.front){
		return false;
	}
	*pval=Q.data[Q.front]
	Q.front=(Q.front+1)%maxsize;
	return true;
	
}
