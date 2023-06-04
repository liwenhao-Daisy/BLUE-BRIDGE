#include <stdio.h>
#include <string.h>

第十一题
int main(){
	double hight;
//	scanf("%f",&hight);------请注意若要实现更具有通用性，应该要采取那些手段：1-直接定义全局变量
//2--scanf函数要如何使用或者说getchar函数？该问题没有解决 
	double sum=hight/2;//注意题目中的条件，不能简单设置为sum=0.0 
	for(int i=1;i<=10;i++){
		hight=hight/2;
		sum=sum+2*hight;//为什么要写成2*hight，是因为有往返两次 
	}
	printf("%f\n",hight);
	printf("一个经过了%f 米\n",sum);
	return 0;
} 


//第十二题-----猴子吃桃1534个 
int main(){//-------方法一：采用的是for循环 
	int n=1;//桃子的总数
	for(int i=1;i<10;i++){//此处的循环条件不能写出<=10,因为还剩了一天，不是完完整整的10天 
		n=(n+1)*2;
} 
	printf("第一天一共摘了%d个桃子\n",n);
	return 0;
} 

int main(){//方法2-----采用while循环，先把天数给固定了
           //注意自己对while循环的掌握比较弱 
	int day,x1;
	int x2=1;
	day=9;
	while(day>0){
		x1=(x2+1)*2;  //----第一天的桃子是第二天的桃子数加1 
		x2=x1;
		day--;
	}
		printf("第一天一共摘了%d个桃子\n",x1);
	return 0;
}

//第十七题——————输出一个比赛名单 
int main(){
	//列出A的所有对战对象
	for(int A='X';A<='Z';A++){
		for(int B='X';B<='Z';B++){
			for(int C='X';C<='Z';C++){
				if(A!='X'&&C!='X'&&C!='Z'&&A!=B&&A!=C&&B!=C){
					
					printf("A的作战%c,B的作战%c，C的作战%c\n",A,B,C);
				}
				
			}
		}
	} 
	return 0;
}

//第十六题 
 int main(){
 	for(int i=0;i<4;i++){
 		
 		for(int j=3-i;j>0;j--){
 			printf(" ");
		 }
		for(int j=2*i+1;j>0;j--){
			printf("*");	
//			puts("*"); ---不能使用puts函数的原因是？ 
		} 
		printf("\n");
	 }
	 for(int a=0;a<3;a++){
	 	for(int b=a+1;b>0;b--){
	 		printf(" ");
		 }
		 for (int b=7-2*(a+1);b>0;b--){
		   printf("*");	
		
		 }
		 printf("\n");
	 }
	 //	printf("\n");
 	return 0;
 } 
