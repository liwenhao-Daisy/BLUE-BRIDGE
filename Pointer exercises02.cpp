#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//��ϰʹ��malocʹ�� 
int main(){
	int i;
	char *p;
	scanf("%d",&i);
	p=(char*)malloc(i);//mallocǰ�����ŵ�ʹ����Ҫ��Ϊ��ǿ������ת�� 
	//p=(int *)malloc(100*sizeof(int));//��i����һ����̬���ڴ�ռ�
	char c;
	scanf("%c",&c); //��Ϊ֮ǰ�ڻ������ﻹ����һ�����������д����Ŀ�ľ���Ϊ���������뻺�����е�\n 
	gets(p);
	puts(p);
	free(p);
	return 0;
} 
//���ڱ������⣬��Ҫע��Ļ��У�
//1.��ʹʹ����malloc����Ҳ�����д��ڷ���Խ��Ŀ����ԣ����ڹ������Ǿ��Բ����Ե� 
//2. ע������ڻ�������\n��������
//3.��ͬ������������ͷ�ļ� 
