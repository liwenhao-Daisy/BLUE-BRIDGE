#include <stdio.h>
////����Ĳ���
//
////д��1 
//r=p-next;
//p-next=q;
//q-next=r;
////д��2�� 
//q->next=p->next
//p->next=q;
//
////------------�����ɾ��
//r=p->next;//Ϊ�˱�����ɾ����ֵ 
//p->next=p->next->next;
//free(r); 

#include <malloc.h>
#include <stdlib.h>
typedef struct Node{
	int data;
	struct Node*pNext;
}NODE,*PNODE;
//�������� 
PNODE creat_list(void);//���õķ�������ʱһ����ַ 
void bl_list(PNODE PHead);
bool is_empty();
bool length_list();

int main(){
	PNODE PHead=NULL;
	PHead=creat_list();
	bl_list(PHead);
	
	return 0; 
}
PNODE creat_list(void){
	int len;
	int i,val;
	PNODE PHead=(PNODE)malloc(sizeof(NODE));//����һ���������ݵ�ͷ�ڵ�
	if(NULL==PHead){
			printf("����ʧ�ܣ�\n");
			exit(-1);
		}
	PNODE PTail=PHead;
	PTail->pNext=NULL;
	printf("������������� len= ");
	scanf("&d",&len);
	for(int i=0;i<len;++i){
		printf("�������%d���ڵ��ֵ ",i+1);
		scanf("%d",&i);
		PNODE PNew=(PNODE)malloc(sizeof(NODE));
		if(NULL==PNew){
			printf("����ʧ�ܣ�\n");
			exit(-1);
		}
		PNew->data=val;
		PTail->pNext=PNew;
		PNew->pNext=NULL;
		PTail=PNew;
	}
	return PHead;
}
void bl_list(PNODE PHead)
{
  PNODE P=PHead->pNext;
  
  while(NULL!=P){
  	printf("%d ",p->date);
  	p=p->pNext;
  
  }
  printf("------------\n");
  return ;
  
		
}
