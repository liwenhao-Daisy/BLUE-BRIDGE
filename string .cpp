#include <stdio.h>
#include <string.h>
//�ַ����ķ�ת��Ա�
int main(){
	char T[100];
	char S[100]={0};//��ʼ����������Ϊ���ڶԱ�ʱ���������� 
	gets(T);
	int i,j;
	for(i=0, j=strlen(T)-1;i<strlen(T);i++,j--)//���������������for�г�ʼ�� 
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
