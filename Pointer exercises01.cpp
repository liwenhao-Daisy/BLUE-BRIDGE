#include <stdio.h>
//在子函数中改变主函数的值 
int change(int *p){
	*p=*p/2;//从而可以知道我刚刚的方法是不正确的 
	return *p;
//	int p;
//	int p=i/2;
//	return p;
}
int main(){
	int i;
	scanf("%d",&i);//之前两次运行错误都是由于scanf函数%%d后我加了换行 
	change(&i);//如果运用指针的话，这里要用到取地址符，第一次写的时候忽略了 
	printf("number is =%d \n",i);
	return 0;
}
