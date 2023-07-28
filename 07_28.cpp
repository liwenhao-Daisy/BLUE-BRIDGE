#include <malloc.h>
#include <stdlib.h>
#include <stdio.h>
typedef struct Node{
	int data;
	struct Node * pNext;
}NODE,*PNODE;
//函数声明 
PNODE creat_list(void);//设置的返回类型时一个地址 
void bl_list(PNODE PHead);
bool is_empty(PNODE PHead);//是否为空 
int length_list(PNODE PHead);//求链表长度 
bool insert_list(PNODE ,int pos,int val);
bool delete_list(PNODE ,int pos,int *pval);
void sort_list(PNODE PHead);

int main(void){
	PNODE PHead=NULL;
	PHead=creat_list();
	bl_list(PHead);
	int len=length_list(PHead);
	printf("链表的长度是%d\n",len);
	insert_list(PHead,1,73);
/*	if(is_empty(PHead))
	   printf("链表为空！\n");
	else
	    printf("链表不空\n");
	return 0; */
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
	PTail->pNext=NULL;//定义尾指针更好处理插入的问题 
	printf("请输入链表个数 len= ");
	scanf("&d",&len);
	for(int i=0;i<len;++i){
		printf("请输入第%d个节点的值 ",i+1);
		scanf("%d",&i);
		PNODE PNew=(PNODE)malloc(sizeof(NODE));//定义一个pnew指针代表新输入的指针地址 
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
  PNODE p=PHead->pNext;  //p是在phead之后的第一个指针 
  
  while(NULL!=p){//-----------------比较while循环和for循环的好处 
  	printf("%d ",	p->date);
  	p=p->pNext;//注意指针中到下一个的改变，与数组的区别 
  
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
int length_list(PNODE PHead){//遍历一个节点就加一 
	PNODE P=PHead->pNext;  
    int cnt=0;
  while(NULL!=P){//-----------------比较while循环和for循环的好处 
  	p=p->pNext;//注意指针中到下一个的改变，与数组的区别 
    ++cnt;
  }
  printf("------------\n");
  return cnt ;	
}
	
}
void sort_list(PNODE PHead){//---------------类比到线性结构很多代码逻辑相似，在写链表时，与数组进行对比  
	int i,j,t;
	int len=length_list(PHead);
	PNODE p,q;
	for(i=0,p=pHead->PNext;i<len-1;p=p->pNext){
			for(j=i+1,q=p->pNext;j<len;++j,q=q->pNext){
				if(p->data >q->data)//类似与a[i]>a[j]
				{
					t=p->data;
					p->data=q->data;
					q->data=t;
				 } 
			}
	}

	return;
}
bool insert_list(PNODE ,int pos,int val){//不需要判断是否为空，只需要知道pos的范围是否合理 
	PNODE p=PHead;
	while(NULL !=p &&i<pos-1){
		p=p->pNext;
		++i;	
	}
	if(int i>pos-1||NULL==p)
	  return false;
	PNODE PNew=(PNODE)malloc(sizeod(PNODE));
	if(NULL==PNew)
	  printf("动态内存分配失败！\n");
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
	PNODE q=p->pNext;//定义一个节点存储删除的值
	*pval=q->data;
	//删除节点
	p->pNext=p->pNext ->pNext;
	free(q);
	q=NULL;
	return true; 
}
