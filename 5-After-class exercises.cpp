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
//	int count=0;//������ĸ�ĸ���
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
//    printf("Ӣ���ַ���%d ���ո������%d �����ָ�����%d �������ַ���%d \n",count,space,num,other);
//  //  printf("Ӣ���ַ���%d ���ո������%d �����ָ�����%d \n",count,space,num);
//    printf("----------------\n");
//    
//	return 0;
//} 





//���������������Լ������С������ 
int main(){
	int m,n;
	int i;
	scanf("%d,%d",&m,&n);
	if(n>m){//Ϊ�˱�֤���ֵʼ����m�� 
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
	}//�����֪�����Լ���Ѿ�������m����
	int num=sum/m;
	printf("���Լ��Ϊ%d,��С������Ϊ%d \n",m,num); 
	
	return 0;
}
//����շת������ļ���������
//��С�����������������ĳ˻��������Լ�� 
