#include <stdio.h>
#include <math.h>

void change(int *j)//��ʱ��j===&i
{
	*j=*j/2;//��ʼ���в���ȷ�ĵط� 
}
int main(){
	int i;
	//  int *p=&i;�������һ��ָ�������ô�г�ʼ������ʹ�յĲر�ͼ 
	printf("������һ���� "); 
	scanf("%d",&i);
	change(&i);
	printf("�������ֵΪ ��%d ",i);
	return 0;
}


//ʹ��malloc��������ռ� 
#include <string.h>
#include <stdlib.h>
int main(){
	int n;
	char *p;
	scanf("%d",&n);
//	p=(char *)malloc(n);
	char c;
	scanf("%c",&c);//�����׼��������\n 
	p=(char *)malloc(n);//Ҫ����ǿ������ת�� 
//	fgets(p,n,stdin);
	gets(c);//gets��ȥ��ʱ��Ϊ����ȫ������ַ���Խ�� 
	puts(c);
	return 0;
}
