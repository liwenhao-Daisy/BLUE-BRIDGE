#include <stdio.h>
/*第三章习题*/ 
//#include <math.h>
//int main(){
//	float r=.07;
//	int n=10;
//	float p; 
//	p=pow(1+r,n);//可以用三种方法，四方法和循环还有使用pow函数 
//	printf("增长了%f ",p);
//	return 0;
//}
//求两个数m 和n 的最大公约数——欧几里得算法
//int main(){
//	int a,b;
//	printf("输入两个数 ");
//	scanf("%d,%d",&a,&b);
//	int ojld(int a,int b);
//	int r=ojld(a,b);
//	printf("输出最大公约数%d ",r);
//    return 0;
//} 
//int ojld(int a,int b)
//{
//	int z=b;
//	while(a%b!=0)
//	{
//		z=a%b;
//		a=b;
//		b=z;
//	}
//	return z;
// } 
////将100~200之间的素数输出
//int main()
//{
// int m,i;
// for(m=100;m<=200;m++)
//    {
//    for(i=2;i<m;i++)//偶数不可能是素数 
//      if(m%i==0)  //用m去初一除1以外的数 
//           break;
//       if(i==m)
//         printf("%d ",m);
//     }
// printf("\n");
// return 0;
//}

 
//判断一个数能否被3和5整除
//int main(){
//	int a;
//	printf("请输入一个数");
//	scanf("%d",&a);
//	if (a%3==0&&a%5==0){
//		printf("该数可以被3和5整除 ",a);
//	} 
//	else {
//		printf("该数不能被整除 "); 
//	}
//} 
//第一题 
 
//int main(void)
//{
//    int a ;
//    int b ;
//    scanf("%d,%d",&a,&b);
//    int tmp = 0;//临时变量
//    printf("a = %d b = %d\n",a,b);//交换前
//    tmp = a;
//    a = b;
//    b = tmp;
//    printf("a = %d b = %d\n",a,b);//交换后
//    return 0;
//}
//第二题
//int main(){
//	int a[10];
//	int i;
//	for(int i=0;i<10;i++)
//    {
//    	scanf("%d",a[i]);
//		}	
//	int max;
//	for(i=0;i<10;i++){
//		if(a[i>a[i+1]]){
//			int temp;
//			temp=a[i];
//			a[i]=a[i+1];
//			a[i+1]=a[i]; 
//			
//		}
//		printf("最大数%d\n",a[i]);
//	}
//	
//	return 0;
//} 
