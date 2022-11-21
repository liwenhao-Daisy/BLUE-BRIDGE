#include <stdio.h>
#include <math.h>
//第四题 修建灌木
int main(){
	void max(int a,int b);
	int N;
	scanf("%d",&N);
	int count=0;
	int mid=N/2;
	int i;
	for(int i=1;i<=N;i++);
	
	{
		if(i<=mid){
			count=(N-i)*2; 
		}
		else
		{
			count=(i-1)*2;
		}
	}
    //count=max(i-1,N-i);
	printf("最大的高度为：%d\n",count); 
	return 0;
} 
//void max(int a,int b){
//	if(int a>int b){
//		return a;
//	}
//	else
//	   return b;
//}
//刷题统计 
//int main(){
//    int day[]={31,28,31,30,31,30,31,31,30,31,30,31};
////    int month[]={1,2,3,4,5,6,7,8,9,10,11,12};
//    int count=0;
//    int a[2];
//    int b[2];
//    int j,m;
//    for(int m=1;m<13;m++)//在1~12月份之间遍历 
//    {
//        a[0]=m/10;//得出月份的高位 
//        a[1]=m%10;//得出月份的低位 
//        for(int j=1;j<=day[m];j++)
//        {
//        	b[0]=j/10;//保存日期的高位 
//        	b[1]=j%10;//得出日期的低位 
//		}
//    if((b[0]==a[1]+1&&a[1]==a[0]+1)||(b[1]==b[0]+1&&b[0]==a[1]+1) );
//    {
//    	count++;
//	}
//}
//    printf("顺子日期有%d ",count);
//    return 0;
//}
