#include <stdio.h>
#include <math.h>
//������ �޽���ľ
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
	printf("���ĸ߶�Ϊ��%d\n",count); 
	return 0;
} 
//void max(int a,int b){
//	if(int a>int b){
//		return a;
//	}
//	else
//	   return b;
//}
//ˢ��ͳ�� 
//int main(){
//    int day[]={31,28,31,30,31,30,31,31,30,31,30,31};
////    int month[]={1,2,3,4,5,6,7,8,9,10,11,12};
//    int count=0;
//    int a[2];
//    int b[2];
//    int j,m;
//    for(int m=1;m<13;m++)//��1~12�·�֮����� 
//    {
//        a[0]=m/10;//�ó��·ݵĸ�λ 
//        a[1]=m%10;//�ó��·ݵĵ�λ 
//        for(int j=1;j<=day[m];j++)
//        {
//        	b[0]=j/10;//�������ڵĸ�λ 
//        	b[1]=j%10;//�ó����ڵĵ�λ 
//		}
//    if((b[0]==a[1]+1&&a[1]==a[0]+1)||(b[1]==b[0]+1&&b[0]==a[1]+1) );
//    {
//    	count++;
//	}
//}
//    printf("˳��������%d ",count);
//    return 0;
//}
