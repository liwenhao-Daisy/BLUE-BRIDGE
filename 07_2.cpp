#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

//������һ���������ͣ����ֽ���struct arr 
 struct Arr{
	int *pBase;//�����һ�������Ԫ�� 
	int len;//�����������ɵ����Ԫ�صĸ��� 
	int cnt;//��ǰ������ЧԪ�صĸ��� 
};
void init_arr(struct Arr *parr,int length);//��ʼ������
bool append_arr(struct Arr *parr,int val) ;//׷��һ��Ԫ�� 
bool insert_arr(struct Arr *parr,int pos,int val);//����һ��Ԫ�� 
bool delete_arr(struct Arr *parr,int pos,int *pval);//ɾ��һ��Ԫ�� 
bool is_empty(struct Arr *parr);//�ж��Ƿ�Ϊ�� 
bool is_full(struct Arr *parr);//�ж��Ƿ����� 
void sort_arr(struct Arr *parr);//���� 
void show_arr(struct Arr *parr);//չʾ 
void invension_arr(struct Arr *parr);//���� 

int main(void){
	struct Arr arr;
	int val;
	
	init_arr(&arr,6);
	show_arr(&arr);
	append_arr(&arr,1);
	append_arr(&arr,2); 
	if(delete_arr(&arr,1,&val)){
		printf("ɾ���ɹ�\n");
		printf("ɾ����Ԫ��%d\n",val); 
	}
	else{
		printf("ɾ��ʧ��\n");
	}
/*	append_arr(&arr,3); 
	append_arr(&arr,4); 
*/	append_arr(&arr,5); 
//	append_arr(&arr,6); 
    insert_arr(&arr,1,73);
//�����Ƿ����ɹ�
if(append_arr(&arr,8)){
	printf("׷�ӳɹ�\n");
} 
else{
	printf("׷��ʧ�ܣ�\n");
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
	if (is_empty(parr)){      //ע����empty�ڲ��ܼ�&�������Ļ��ͱ����ͨ��ָ���ַ�ˣ����������������ʱ���Ѿ��������*���͵��� 
		//��ʾ�û�����Ϊ�� 
		printf("����Ϊ�ա�������Ч����\n"); 
		printf("-----------------\n");
	}
	else{
		  for(int i=0;i<parr->cnt;++i){
		  	printf("%d\n",parr->pBase[i]);   //���������ԭ��ʱ��ΪpBase��ŵľ��Ǹýṹ������ĵ�ַ  �������ÿ��Ԫ�صĵ�ַ 
		  }
		 //	printf("���鳤��Ϊ%d,��ʱ�������Ч��%d\n",parr->len,parr->cnt);
	}
//	printf("���鳤��Ϊ%d,��ʱ�������Ч��%d\n",parr->len,parr->cnt);
}
bool is_full(struct Arr *parr){
	if(parr->len=parr->cnt)
	   return true;
	else
	   return false;
}
bool  append_arr (struct Arr  *parr,int val){
	if (is_full(parr)){      
		return false;//�����д���ʱ�˴��г��ִ�����Ϊ��append����д����void���� 
	}
	
	parr->pBase[parr->cnt]=val;
	(parr->cnt)++;          //ע��������ȼ������⣬Ҫ���С���ţ� 
	return true;
		
}
bool insert_arr(struct Arr *parr,int pos,int val){
     if(is_full(parr))//�ж��Ƿ�����Ȼ�����  
	   return false;

     if(pos<1||pos>parr->cnt-1)
       return false;
    for(int i=parr->cnt-1;i>=pos-1;--i){//�����˶�posֵ�Ŀ��� 
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
	    *pval= parr->pBase[pos-1];//����ɾ����ֵ 
	for(int i=pos;i<parr->cnt;++i){//��дɾ��ѭ��ʱ����������ȥ�ͷţ�ֻ��Ҫ�Ѻ�һ����ǰ���ɣ����Զ����� 
	//���Ϊʲô��pos��ʼ 
      parr->pBase[i]= parr->pBase[i-1];
    return true; 
}

void init_arr(struct Arr *parr,int length)
{
  parr->pBase = (int*)malloc(sizeof(int)*length);
  if(NULL==parr->pBase){
  	printf("����ʧ�ܣ�\n");
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
		for(j=i+1;j<parr->cnt;++j){//����ð������ 
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
////malloc ��̬�����ڴ�
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
//	printf("%d,%s,%c\n", st.num, st.name, st.sex);//�������һ
//
//	return 0;
//}
////ע��ṹ�岻�ܼӼ��˳����������໥��ֵ
//void g2(struct student st)//���������ֵ�����������
//{
//	printf("%d,%s,%c\n", st.num, st.name, st.sex);
//}
//void f(struct student* pst) {
//	pst->num = 99;
//	pst->name, "zdd";
//	pst->sex = 'm';
//}
