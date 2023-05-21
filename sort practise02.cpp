#include <stdio.h>
#include <math.h> 
//译密码
int main(){
	char c;
	while ((c=getchar())!='\n'){
		if((c>='A'&&c<='Z')||(c>='a'&&c<='z')){
			c=c+4;
			if(c>'Z'&&c<='Z'+4||c>'z')
			c=c-26;
		}
		printf("%c",c);
	}
	printf("\n---------------------\n");
	return 0;
} 





//判断在100~200之间的素数
int main(){
	int i,k,n;
	for(n=100;n<=200;n++){
		k=sqrt(n);
	  for (i=2;i<=k;i++)
		   if(n%i==0) break;
		if(i>=k) printf("%5d\n",n); //思考：如何控制一行输出10个数 
		if(i<=k) printf("该数不是素数，请重新输入"); 
		else printf("%d",n);
	}
	printf("-----------\n");
	return 0;
	
} 







//输入一个大于3的数，判断是否为素数
int main(){
	int n;
	int i;
	int k;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
		if(n%i==0) break;
		if(i<n) printf("该数不是素数，请重新输入"); 
		else printf("%d",n);
//			printf("%d",n);
        break;
        	printf("%d",n);}
        else{
		
		printf("该数不是素数，请重新输入"); }

//1改进版------使用了平方来判断，可以减少循环次数，提高效率 
    int k;
    k=sqrt(n);
	for (i=2;i<=k;i++)
		if(n%i==0) break;
		if(i<=k) printf("该数不是素数，请重新输入"); 
		else printf("%d",n);
	 
	}
	return 0;
} 






////求斐波那契数列-------等学了模块化函数后，再试一次 
int main(){
	int f1=1,f2=1,f3;
	int i;
	printf("%5d\n %5d\n",f1,f2);
	for(i=1;i<=6;i++){
		f3=f1+f2;
		printf("%5d\n",f3);
		f1=f2;
		f2=f3;
	}
	return 0;
}




int f(n){
	if(n==1||n==2){
		f(n)=1;
		printf("%d",f(n));
	}
	else{
		f(n)=f(n-1)+f(n-2);
		printf("%d",f(n));
	}
}
int main(){
	int n;
	//int f;
	scanf("%d",&n);
	int f(n);
//	if(n==1||n==2){
//		f=1;
//		printf("%d",f);
//	}
//	else {
//		f=f(n-1)+f(n-2);
//		printf("%d",f);
//		 //printf("-1");
//	}
	   //return -1; 
	return 0;
}
 



//#include <math.h>
//求Π的近似值
 int main(){
 	int sign=1;
 	double pi=0.0,n=1.0,temp=1.0;
 	while(fabs(temp)>=1e-6){
 		pi=pi+temp;
 		n=n+2;
 		sign=-sign;
 		temp=sign/n;	
	 }
	 pi=pi*4;
	 printf("%f",pi);
 	return 0;
 } 
 //导入的知识点：
 //1；关于数学库函数的使用-----fabs（x)中的x是双精度的数，所以在定义的时候得注意 
 //2；在计算过程中符号问题取反 

//输出一个4*5的矩阵
int main(){
	int i,j;
	int n=0;
	for(i=1;i<=4;i++)
	   for(j=1;j<=5;j++,n++){//出现全部黏在一起，未换行 
	   if(n%5==0) printf("\n");//解决办法1：采用模 
	   	printf("%5d",i*j);      
	   }
	return 0;
} 
输出不能被3整除的数 
int main(){
	for(int i=100;i<=200;i++){
		if(i%3==0){
			continue;
		//	printf("%d",i);
		}
		printf("%d\n",i);
	}
	printf("\n");
	return 0;
	
}
