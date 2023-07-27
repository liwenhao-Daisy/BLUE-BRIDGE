#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

//定义了一个数据类型，名字叫做struct arr 
 struct Arr{
	int *pBase;//数组第一个数组的元素 
	int len;//数组所能容纳的最大元素的个数 
	int cnt;//当前数组有效元素的个数 
};
void init_arr(struct Arr *parr,int length);//初始化数组
bool append_arr(struct Arr *parr,int val) ;//追加一个元素 
bool insert_arr(struct Arr *parr,int pos,int val);//插入一个元素 
bool delete_arr(struct Arr *parr,int pos,int *pval);//删除一个元素 
bool is_empty(struct Arr *parr);//判断是否为空 
bool is_full(struct Arr *parr);//判断是否满了 
void sort_arr(struct Arr *parr);//排序 
void show_arr(struct Arr *parr);//展示 
void invension_arr(struct Arr *parr);//倒置 

int main(void){
	struct Arr arr;
	int val;
	
	init_arr(&arr,6);
	show_arr(&arr);
	append_arr(&arr,1);
	append_arr(&arr,2); 
	if(delete_arr(&arr,1,&val)){
		printf("删除成功\n");
		printf("删除的元素%d\n",val); 
	}
	else{
		printf("删除失败\n");
	}
/*	append_arr(&arr,3); 
	append_arr(&arr,4); 
*/	append_arr(&arr,5); 
//	append_arr(&arr,6); 
    insert_arr(&arr,1,73);
//检验是否插入成功
if(append_arr(&arr,8)){
	printf("追加成功\n");
} 
else{
	printf("追加失败！\n");
}
	show_arr(&arr);
	inversion_arr(&arr);
	show_arr(&arr);
	sort_arr(&arr);
	show_arr(&arr);
//	printf("%d\n",arr.len) ;
	return 0;
}
bool is_empty(struct Arr *parr){
	if(parr->cnt==0)
	   return true;
	else
		return false;
	
}
void show_arr(struct Arr *parr){
	if (is_empty(parr)){      //注意在empty内不能加&，这样的话就变成普通的指针地址了，在运用这个函数的时候，已经被定义成*类型的了 
		//提示用户数组为空 
		printf("数组为空。输入有效数据\n"); 
		printf("-----------------\n");
	}
	else{
		  for(int i=0;i<parr->cnt;++i){
		  	printf("%d\n",parr->pBase[i]);   //这样输出的原因时因为pBase存放的就是该结构体变量的地址  输出数组每个元素的地址 
		  }
		 //	printf("数组长度为%d,此时数组的有效数%d\n",parr->len,parr->cnt);
	}
//	printf("数组长度为%d,此时数组的有效数%d\n",parr->len,parr->cnt);
}
bool is_full(struct Arr *parr){
	if(parr->len=parr->cnt)
	   return true;
	else
	   return false;
}
bool  append_arr (struct Arr  *parr,int val){
	if (is_full(parr)){      
		return false;//在运行代码时此处有出现错误，因为把append函数写成了void类型 
	}
	
	parr->pBase[parr->cnt]=val;
	(parr->cnt)++;          //注意代码优先级的问题，要添加小括号； 
	return true;
		
}
bool insert_arr(struct Arr *parr,int pos,int val){
     if(is_full(parr))//判断是否满，然后插入  
	   return false;

     if(pos<1||pos>parr->cnt-1)
       return false;
    for(int i=parr->cnt-1;i>=pos-1;--i){//忽视了对pos值的控制 
	parr->pBase[i+1]=parr->pBase[i];
    }
    parr->pBase[pos-1]=val;
    (parr->cnt)++;
    return true;

}
bool delete_arr(struct Arr *parr,int pos,int *pval){
	if(is_empty(parr))
		return false;
	int i;
	if(pos<i||pos>parr->cnt)
	    return false;
	    *pval= parr->pBase[pos-1];//返回删掉的值 
	for(int i=pos;i<parr->cnt;++i){//在写删掉循环时，不用特意去释放，只需要把后一个提前即可，会自动覆盖 
	//理解为什么从pos开始 
      parr->pBase[i]= parr->pBase[i-1];
    return true; 
}

void init_arr(struct Arr *parr,int length)
{
  parr->pBase = (int*)malloc(sizeof(int)*length);
  if(NULL==parr->pBase){
  	printf("分配失败！\n");
  	exit(-1);
  }
  else{
  	parr->len=length;
  	parr->cnt=0;
  }

//    (*parr).len=73;	
}
void invension_arr(struct Arr *parr){
	int i=0;
	int j=cnt-1;
	int m;
	while(i<j){
		m=parr->pBase[i];
		parr->pBase [i]=parr->pBase [j];
		parr->pBase [j]=m;
		++i;
		--j;
	}
	return;
}

void sort_arr(struct Arr *parr){
	for(int i=0;i<cnt-1;++i){
		int m,j;
		for(j=i+1;j<parr->cnt;++j){//采用冒泡排序 
			if(parr->pBase[i]>parr->pBase[j]){
			m=parr->pBase[i];
		    parr->pBase [i]=parr->pBase [j];
	     	parr->pBase [j]=m;	
			}
		}
	//	if(parr->pBase[i]<parr->pBase[i+1])
//	    m=parr->pBase[i];
//		parr->pBase [i]=parr->pBase [j];
//		parr->pBase [j]=m;
	}
}







//
////malloc 动态分配内存
//#include <malloc.h>
//int main(){
//	int a[5]={1,2,3,4,5};
//	int len;
//	printf("inputs array length :");
//	scanf("%d",&len);
//	int *parr=(int *)malloc(sizeof(int)*len);
//	for(int i=0;i<len;++i){
//		scanf("%d",7&parr[i]);
//	}
//	for(int i=0;i<len;++i){
//		printf("%d\n",*(parr+1));
//	}
//	free(parr);
//	return 0;
//}
// 
//struct student{
//	int num;
//	char name[100];
//	int age;
//};
//struct student {
//	int num;
//	char name[100];
//	char sex;
//};
//void f(struct student* pst);
//void g(struct student st);
//void g2(struct student* pst);
//
//int main() {
//	struct student st;
//	f(&st);
//	g2(&st);
//	printf("%d,%s,%c\n", st.num, st.name, st.sex);//输出方法一
//
//	return 0;
//}
////注意结构体不能加减乘除，但可以相互赋值
//void g2(struct student st)//整体变量赋值。输出方法二
//{
//	printf("%d,%s,%c\n", st.num, st.name, st.sex);
//}
//void f(struct student* pst) {
//	pst->num = 99;
//	pst->name, "zdd";
//	pst->sex = 'm';
//}
