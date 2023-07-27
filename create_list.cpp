#include <stdio.h>
////链表的插入
//
////写法1 
//r=p-next;
//p-next=q;
//q-next=r;
////写法2； 
//q->next=p->next
//p->next=q;
//
////------------链表的删除
//r=p->next;//为了保留被删除的值 
//p->next=p->next->next;
//free(r); 

#include <malloc.h>
#include <stdlib.h>
typedef struct Node{
	int data;
	struct Node*pNext;
}NODE,*PNODE;
//函数声明 
PNODE creat_list(void);//设置的返回类型时一个地址 
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
	PNODE PHead=(PNODE)malloc(sizeof(NODE));//生成一个不带数据的头节点
	if(NULL==PHead){
			printf("分配失败！\n");
			exit(-1);
		}
	PNODE PTail=PHead;
	PTail->pNext=NULL;
	printf("请输入链表个数 len= ");
	scanf("&d",&len);
	for(int i=0;i<len;++i){
		printf("请输入第%d个节点的值 ",i+1);
		scanf("%d",&i);
		PNODE PNew=(PNODE)malloc(sizeof(NODE));
		if(NULL==PNew){
			printf("分配失败！\n");
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
