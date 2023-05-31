#include <stdio.h>
#include <math.h>
//第十题：算出分数序列的和-----第一遍结果没出来的原因是因为写成int型了， 没写对型号 
int main(){
    double sum=0.0;
	double i=1.0;
	double ep=0.0;
	double j=2.0;
	for(int n=1;n<21;n++){
		sum+=(j/i);
		ep=j;
	    j=i+j;
	    i=ep;
	}
	printf("%f\n",sum);
	return 0;
} 


//第九题：找出1000内所有的 完数
//完数定义：
//一个数如果恰好等于它的因子之和，则这个数就是完数。例如6的因子为1，2，3，而
//6=1+2+3，因此6是“完数”。
//# include <stdio.h>------显然第一种更简洁 

//int main (void)
//{
//	int i,j,sum;   //i存放的是数字，j是因子，sum是因子的和
//	for(i=1;i<=1000;i++)
//	{
//		sum=0;                //sum为0
//		for(j=1;j<i/2;j++)
//		{
//			if(i%j==0)		  //如果i是j的因子则i%j为0
//				sum+=j;		  //则sum加上这个因子
//		}
//		if(sum==i)			  //如果i这个数值的因子相加等于i则输出
//			printf("%d\n",i);
//	}	
//
//	return 0;
//}
//


//第九题：找出1000内所有的 完数
//int main() {
//	//int sum;
//	for (int i = 2; i <= 1000; i++) {
//		int sum=0;
//		for (int j = 1; j < i ; j++) {//这里不能写成i/2，会与标准答案不一样，如果换成这样，
//			                         //出来的结果就为24：1，2，3，4，6，8，没有包括12，这个结果是错误的
//			if (i % j == 0) {
//				sum += j;
//			}
//		}
//		if (sum == i) {
//			printf("%d 是完数\n", sum);
//			for (int j = 1; j < i / 2; j++) {
//				if (i % j == 0) {
//					printf("%d\n", j);
//				}
//			}
//		}
//	}
//	return 0;
//}

