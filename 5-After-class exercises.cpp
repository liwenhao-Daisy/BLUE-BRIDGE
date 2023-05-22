#include <stdio.h>
#include <math.h>
int main(){
	int i,n=0;
	double a;
	double sum=0;
	double total=0;
	scanf("%f,%d",&a,&n);
	for(i=0;i<n;i++){
		sum=sum+a*pow(10,i);
		total=total+sum;
		
	} 
	printf("%1f\n",total);
	return 0;
} 





//
//int main(){
//	char c;
//	int count=0;//计算字母的个数
//	int space=0;
//	int num=0;
//	int other=0; 
//	//c=getchar();
//	while(c=getchar()!='\n'){
//		if(c>='A'&&c<='Z'||c>='a'&&c<='z'){
//			 count++; 
//		}
//		  else if(c==' '){
//		space++;
//     	}else if(c>='0'&&c<='9'){
//		num++;
//	}  else {
//    	 other++;
//	}
//}
////	int total=count+sum+num;
//    printf("英文字符：%d ，空格个数：%d ，数字个数：%d ，其他字符：%d \n",count,space,num,other);
//  //  printf("英文字符：%d ，空格个数：%d ，数字个数：%d \n",count,space,num);
//    printf("----------------\n");
//    
//	return 0;
//} 





//输入两个数求最大公约数和最小公倍数 
int main(){
	int m,n;
	int i;
	scanf("%d,%d",&m,&n);
	if(n>m){//为了保证最大值始终在m上 
		int temp;
		temp=n;
		n=m;
		m=temp;
	}
	int sum=n*m;
	int r=-1;
	while(n!=0){
		r=m%n;
		m=n;
		n=r;
	}//则可以知道最大公约数已经保持在m中了
	int num=sum/m;
	printf("最大公约数为%d,最小公倍数为%d \n",m,num); 
	
	return 0;
}
//关于辗转相除法的计算忘记了
//最小公倍数等于两个数的乘积除以最大公约数 
