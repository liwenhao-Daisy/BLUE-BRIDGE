#include <stdio.h>
int main(){
	int n ;
	int a,b;
//	long long int day;//
	int sum;
	printf("����ֱ���ˢ������������....");
	scanf("%d,%d,%d",&a,&b,&n);
//	day=0;
	sum=0;//��������� 
	int count=0;//��������� 
	while(sum<n){
		int temp=count%7; //����һ����ʱ���� 
		if(temp>=1&&temp<=5)
		    sum+=a;
		if(temp==6||temp==0)
		    sum+=b;
		count++;
	}
	printf("%d",count);
	return 0;
}


