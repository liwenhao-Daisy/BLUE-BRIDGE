#include <stdio.h>
#include <string.h>

��ʮһ��
int main(){
	double hight;
//	scanf("%f",&hight);------��ע����Ҫʵ�ָ�����ͨ���ԣ�Ӧ��Ҫ��ȡ��Щ�ֶΣ�1-ֱ�Ӷ���ȫ�ֱ���
//2--scanf����Ҫ���ʹ�û���˵getchar������������û�н�� 
	double sum=hight/2;//ע����Ŀ�е����������ܼ�����Ϊsum=0.0 
	for(int i=1;i<=10;i++){
		hight=hight/2;
		sum=sum+2*hight;//ΪʲôҪд��2*hight������Ϊ���������� 
	}
	printf("%f\n",hight);
	printf("һ��������%f ��\n",sum);
	return 0;
} 


//��ʮ����-----���ӳ���1534�� 
int main(){//-------����һ�����õ���forѭ�� 
	int n=1;//���ӵ�����
	for(int i=1;i<10;i++){//�˴���ѭ����������д��<=10,��Ϊ��ʣ��һ�죬��������������10�� 
		n=(n+1)*2;
} 
	printf("��һ��һ��ժ��%d������\n",n);
	return 0;
} 

int main(){//����2-----����whileѭ�����Ȱ��������̶���
           //ע���Լ���whileѭ�������ձȽ��� 
	int day,x1;
	int x2=1;
	day=9;
	while(day>0){
		x1=(x2+1)*2;  //----��һ��������ǵڶ������������1 
		x2=x1;
		day--;
	}
		printf("��һ��һ��ժ��%d������\n",x1);
	return 0;
}

//��ʮ���⡪�������������һ���������� 
int main(){
	//�г�A�����ж�ս����
	for(int A='X';A<='Z';A++){
		for(int B='X';B<='Z';B++){
			for(int C='X';C<='Z';C++){
				if(A!='X'&&C!='X'&&C!='Z'&&A!=B&&A!=C&&B!=C){
					
					printf("A����ս%c,B����ս%c��C����ս%c\n",A,B,C);
				}
				
			}
		}
	} 
	return 0;
}

//��ʮ���� 
 int main(){
 	for(int i=0;i<4;i++){
 		
 		for(int j=3-i;j>0;j--){
 			printf(" ");
		 }
		for(int j=2*i+1;j>0;j--){
			printf("*");	
//			puts("*"); ---����ʹ��puts������ԭ���ǣ� 
		} 
		printf("\n");
	 }
	 for(int a=0;a<3;a++){
	 	for(int b=a+1;b>0;b--){
	 		printf(" ");
		 }
		 for (int b=7-2*(a+1);b>0;b--){
		   printf("*");	
		
		 }
		 printf("\n");
	 }
	 //	printf("\n");
 	return 0;
 } 
