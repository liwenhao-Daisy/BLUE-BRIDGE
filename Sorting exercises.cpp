//�����£�ѭ���ṹ�������
//��1��ͳ��1+100�ĺ�
#include <stdio.h>
//int main(){
//��������������ȷ���������в�������ȷ�Ľ�� 
//	int i=1;
//	int sum=0;
//	do{
//		int sum=sum+i;
//		i++;
////		printf("%d",i++);
//	}while(i<=100);
//	printf("%d",sum);
//	return 0;
//����һ 
//	int sum=0;
//	int i;
//	for(i=1;i<=100;i++){
//		sum=sum+i;
//	}
//	printf("%d",sum);
	
	
// } 

//������������Լ�ƽ��ÿ�˾�����Ŀ
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
	printf("�����˹��� %d,ƽ��ÿ�˾��%.5f\n",i,averg);
//	while(sum<100001){
//		printf("give me money ");
//		scanf("%d",&sum);
//		count++;
//	}break;
//	averg==sum/count;
//	printf("һ����%d ���˾��"��count);
//     printf("ƽ��ÿ�˾���%5f ��Ǯ",averg);
	return 0;
} 
 
