#include <stdio.h>
//计算n个台阶有多少种走法 
int f(int n){
	if(n==1||n==2){
	//	return 1;//判断结束条件 
	    return n;
	}
	else{
		return (n-1)+(n-2);// 写出本题公式 
		//在开始运行时，一直报错 ,不需要写返回值等于这个公式 
	}
}

int main(){
	int n;
	scanf("%d",&n);
	f(n);//在写了函数体后，一定要记得调用 
	printf("最后走了%d步", f(n));//这里不能写成n，在第一次写代码时搞错了 
	return 0;
}
