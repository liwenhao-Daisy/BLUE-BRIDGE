//第五章：循环结构程序设计
//例1；统计1+100的和
#include <stdio.h>
//int main(){
//方法二；代码正确，但是运行不出来正确的结果 
//	int i=1;
//	int sum=0;
//	do{
//		int sum=sum+i;
//		i++;
////		printf("%d",i++);
//	}while(i<=100);
//	printf("%d",sum);
//	return 0;
//方法一 
//	int sum=0;
//	int i;
//	for(i=1;i<=100;i++){
//		sum=sum+i;
//	}
//	printf("%d",sum);
	
	
// } 

//计算捐款的人数以及平均每人捐款的数目
//#define sum 100000;
#include <math.h>
int main(){
	float sum=0;
//	float count=0;
	float money;
	float averg;
	int i;
	for(int i=1,sum=0;i<=1000;i++){
		scanf("%d",&money);
		sum=sum+money;
		if(sum>=1000)break;
	}
	averg=sum/i;
	printf("捐款的人共有 %d,平均每人捐款%.5f\n",i,averg);
//	while(sum<100001){
//		printf("give me money ");
//		scanf("%d",&sum);
//		count++;
//	}break;
//	averg==sum/count;
//	printf("一共有%d 的人捐款"，count);
//     printf("平均每人捐了%5f 的钱",averg);
	return 0;
} 
 
