#include <stdio.h>
#include <string.h>
//字符串的反转与对比
int main(){
	char T[100];
	char S[100]={0};//初始化的意义是为了在对比时不出现乱码 
	gets(T);
	int i,j;
	for(i=0, j=strlen(T)-1;i<strlen(T);i++,j--)//多个函数不可以在for中初始化 
	{
		S[j]=T[i];
	}
	puts(S); 
//	puts(T);
    int result=strcmp(T,S);
//	printf("%d\n",result);  
    if(result>0){
    	printf("%d\n",1);
	}
	else if(result<0){
			printf("%d\n",-1);
	}else{
			printf("%d\n",0);
	}
	return 0;
} 
