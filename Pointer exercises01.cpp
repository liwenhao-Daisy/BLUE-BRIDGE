#include <stdio.h>
//���Ӻ����иı���������ֵ 
int change(int *p){
	*p=*p/2;//�Ӷ�����֪���Ҹոյķ����ǲ���ȷ�� 
	return *p;
//	int p;
//	int p=i/2;
//	return p;
}
int main(){
	int i;
	scanf("%d",&i);//֮ǰ�������д���������scanf����%%d���Ҽ��˻��� 
	change(&i);//�������ָ��Ļ�������Ҫ�õ�ȡ��ַ������һ��д��ʱ������� 
	printf("number is =%d \n",i);
	return 0;
}
