#include <malloc.h>
#include <stdlib.h>
#include <stdio.h>
typedef struct Node{
	int data;
	struct Node * pNext;
}NODE,*PNODE;
//�������� 
PNODE creat_list(void);//���õķ�������ʱһ����ַ 
void bl_list(PNODE PHead);
bool is_empty(PNODE PHead);//�Ƿ�Ϊ�� 
int length_list(PNODE PHead);//�������� 
bool insert_list(PNODE ,int pos,int val);
bool delete_list(PNODE ,int pos,int *pval);
void sort_list(PNODE PHead);

int main(void){
	PNODE PHead=NULL;
	PHead=creat_list();
	bl_list(PHead);
	int len=length_list(PHead);
	printf("����ĳ�����%d\n",len);
	insert_list(PHead,1,73);
/*	if(is_empty(PHead))
	   printf("����Ϊ�գ�\n");
	else
	    printf("������\n");
	return 0; */
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
	PTail->pNext=NULL;//����βָ����ô����������� 
	printf("������������� len= ");
	scanf("&d",&len);
	for(int i=0;i<len;++i){
		printf("�������%d���ڵ��ֵ ",i+1);
		scanf("%d",&i);
		PNODE PNew=(PNODE)malloc(sizeof(NODE));//����һ��pnewָ������������ָ���ַ 
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
  PNODE p=PHead->pNext;  //p����phead֮��ĵ�һ��ָ�� 
  
  while(NULL!=p){//-----------------�Ƚ�whileѭ����forѭ���ĺô� 
  	printf("%d ",	p->date);
  	p=p->pNext;//ע��ָ���е���һ���ĸı䣬����������� 
  
  }
  printf("------------\n");
  return ;	
}
bool is_empty(PNODE PHead){
   if(NULL==PHead->pNext)
      return true;
   else
      return false;	

}
int length_list(PNODE PHead){//����һ���ڵ�ͼ�һ 
	PNODE P=PHead->pNext;  
    int cnt=0;
  while(NULL!=P){//-----------------�Ƚ�whileѭ����forѭ���ĺô� 
  	p=p->pNext;//ע��ָ���е���һ���ĸı䣬����������� 
    ++cnt;
  }
  printf("------------\n");
  return cnt ;	
}
	
}
void sort_list(PNODE PHead){//---------------��ȵ����Խṹ�ܶ�����߼����ƣ���д����ʱ����������жԱ�  
	int i,j,t;
	int len=length_list(PHead);
	PNODE p,q;
	for(i=0,p=pHead->PNext;i<len-1;p=p->pNext){
			for(j=i+1,q=p->pNext;j<len;++j,q=q->pNext){
				if(p->data >q->data)//������a[i]>a[j]
				{
					t=p->data;
					p->data=q->data;
					q->data=t;
				 } 
			}
	}

	return;
}
bool insert_list(PNODE ,int pos,int val){//����Ҫ�ж��Ƿ�Ϊ�գ�ֻ��Ҫ֪��pos�ķ�Χ�Ƿ���� 
	PNODE p=PHead;
	while(NULL !=p &&i<pos-1){
		p=p->pNext;
		++i;	
	}
	if(int i>pos-1||NULL==p)
	  return false;
	PNODE PNew=(PNODE)malloc(sizeod(PNODE));
	if(NULL==PNew)
	  printf("��̬�ڴ����ʧ�ܣ�\n");
	  exit(-1);
	PNew->data=val;
	PNODE q=p->pNext;
	p->pNext=PNew;
	PNew->pNext=q;
 
   return true;
}
bool delete_list(PNODE ,int pos,int *pval){
	PNODE p=PHead;
	while(NULL !=p &&i<pos-1){
		p=p->pNext;
		++i;	
	}
	if(int i>pos-1||NULL==p)
	  return false;
	PNODE q=p->pNext;//����һ���ڵ�洢ɾ����ֵ
	*pval=q->data;
	//ɾ���ڵ�
	p->pNext=p->pNext ->pNext;
	free(q);
	q=NULL;
	return true; 
}
