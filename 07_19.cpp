#include <stdio.h>
//7.1
//int  f(int n) {
//	if (n == 1 || n ==2) {
//		return n;
//	}
//	return  f(n-2) + f(n - 1);
//}
//int main() {
//	int i;
//	scanf("%d", &i);
//	//	int n;
//	int result;
//	result=f(i);
//	printf("�м����߷��� %d\n", result);
//	return 0;
//}

//8.1--�ṹ��ʹ�� 
// struct student{
// 	int  num;
// 	char name[20];
// 	char sex;
// };
// int main(){
// //	struct student s={2001,"lihua",'m'};
// 	struct student s={0};
// 	printf("����һ��ѧ����ѧ�ţ��������Ա�\n");
//	scanf("%d %s %s",&s.num,&s.name,&s.sex);
//	printf("���ѧ����ѧ��%d������%s���Ա�%s",&s.num,s.name,&s.sex);
//	return 0; 
//	 }
//	 
//8.2	C++������
#include <stdlib.h>
void change(char *&p){
		p=(char *)malloc(100) ;
		fgets(p,100,stdin);
}
int main(){
	char c;
	//int n=20;
	scanf("%s",&c);
	char *p=NULL;
	//p=(char *)malloc(n) ;
	change(p);
	puts(p);
	free(p);
	return 0;
} 
