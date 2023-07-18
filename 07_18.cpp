#include <stdio.h>
#include <math.h>

void change(int *j)//此时的j===&i
{
	*j=*j/2;//开始运行不正确的地方 
}
int main(){
	int i;
	//  int *p=&i;如果定义一个指针变量，么有初始化，即使空的藏宝图 
	printf("请输入一个数 "); 
	scanf("%d",&i);
	change(&i);
	printf("整除后的值为 ：%d ",i);
	return 0;
}


//使用malloc函数申请空间 
#include <string.h>
#include <stdlib.h>
int main(){
	int n;
	char *p;
	scanf("%d",&n);
//	p=(char *)malloc(n);
	char c;
	scanf("%c",&c);//清除标准缓冲区的\n 
	p=(char *)malloc(n);//要进行强制类型转换 
//	fgets(p,n,stdin);
	gets(c);//gets被去掉时因为不安全，会出现访问越界 
	puts(c);
	return 0;
}
