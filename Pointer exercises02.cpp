#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//练习使用maloc使用 
int main(){
	int i;
	char *p;
	scanf("%d",&i);
	p=(char*)malloc(i);//malloc前面括号的使用主要是为了强制类型转换 
	//p=(int *)malloc(100*sizeof(int));//给i开辟一个动态的内存空间
	char c;
	scanf("%c",&c); //因为之前在缓冲区里还存在一个整数，这行代码的目的就是为了消除输入缓冲区中的\n 
	gets(p);
	puts(p);
	free(p);
	return 0;
} 
//对于本类问题，需要注意的还有：
//1.即使使用了malloc函数也还是有存在访问越界的可能性，这在工作中是绝对不可以的 
//2. 注意关于在缓冲区中\n符的消除
//3.不同函数所包含的头文件 
