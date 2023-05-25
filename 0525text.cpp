#include <stdio.h>
#include <math.h>
int main(){
	double sum=0.0;
	double pf=0.0;
	double fs=0.0;
	double total=0.0;
	for(int i=1;i<=100;i++){
		sum=sum+i;
//		if(i>=50){
//		pf+=i*i;
//		}
//		 if(i>=10){
//			fs+=1.0/i;
//		}
	}
	for(int a=1;a<=50;a++){
		pf+=a*a;
	}
	for (int n=1;n<=10;n++){
		fs=fs+(1.0/n);//之前犯了一个错，关于浮点数的乘除，导致结果中小数点的计算不在了 
	}
	total=sum+pf+fs;
	printf("%1f\n",total);
	return 0;
} 


int main(){
	//int i;
	int a,b,c;
	for(int i=100;i<1000;i++)
	{
	   a=i%100;//百位数的处理 
	   b=(i%10)%10;//十位数的处理 
	   c=i%10;//个位数的处理 
	   if(a*a*a+b*b*b+c*c*c==i){
				printf("%d\n",i);
		}
		}
	
	return 0;
} 

求阶乘 ------思考方向错了，这求的是某一个数的阶乘，而题目要求的是和+循环
int main(){
	double total=0.0;
	int i,j;
	for (i=1;i<=20;i++){
		double sum=1.0;
		for(j=i;j>0;j--){
			sum*=j;
		}
		total=+total+sum;
	}
	printf("%1f\n",total);
	return 0;
}
 
int main (){//题目所要求的范围超过int可以表示的了 
	int n=20;
	int i;
//	double sum=1;
	double total=0.0;
//	scanf("%d",&n);
	for(i=1;i<=n;i++){
		double sum=1.0;
		for (int j=i;j>0;j--){
			sum=sum*j;//返回一个累加值 ,关键步骤在这里了，我自己的思考写成if语句了 
		}
		total=total+sum;
	}
	printf("%1f\n",total);
	return 0; 
}
