#include <stdio.h>
int main(){
	int n ;
	int a,b;
//	long long int day;//
	int sum;
	printf("输入分别所刷题数和总题数....");
	scanf("%d,%d,%d",&a,&b,&n);
//	day=0;
	sum=0;//输入的题数 
	int count=0;//输出的天数 
	while(sum<n){
		int temp=count%7; //定义一个临时变量 
		if(temp>=1&&temp<=5)
		    sum+=a;
		if(temp==6||temp==0)
		    sum+=b;
		count++;
	}
	printf("%d",count);
	return 0;
}


