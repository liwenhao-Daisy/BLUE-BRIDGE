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
		fs=fs+(1.0/n);//֮ǰ����һ�������ڸ������ĳ˳������½����С����ļ��㲻���� 
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
	   a=i%100;//��λ���Ĵ��� 
	   b=(i%10)%10;//ʮλ���Ĵ��� 
	   c=i%10;//��λ���Ĵ��� 
	   if(a*a*a+b*b*b+c*c*c==i){
				printf("%d\n",i);
		}
		}
	
	return 0;
} 

��׳� ------˼��������ˣ��������ĳһ�����Ľ׳ˣ�����ĿҪ����Ǻ�+ѭ��
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
 
int main (){//��Ŀ��Ҫ��ķ�Χ����int���Ա�ʾ���� 
	int n=20;
	int i;
//	double sum=1;
	double total=0.0;
//	scanf("%d",&n);
	for(i=1;i<=n;i++){
		double sum=1.0;
		for (int j=i;j>0;j--){
			sum=sum*j;//����һ���ۼ�ֵ ,�ؼ������������ˣ����Լ���˼��д��if����� 
		}
		total=total+sum;
	}
	printf("%1f\n",total);
	return 0; 
}
