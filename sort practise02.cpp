#include <stdio.h>
#include <math.h> 
//������
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





//�ж���100~200֮�������
int main(){
	int i,k,n;
	for(n=100;n<=200;n++){
		k=sqrt(n);
	  for (i=2;i<=k;i++)
		   if(n%i==0) break;
		if(i>=k) printf("%5d\n",n); //˼������ο���һ�����10���� 
		if(i<=k) printf("������������������������"); 
		else printf("%d",n);
	}
	printf("-----------\n");
	return 0;
	
} 







//����һ������3�������ж��Ƿ�Ϊ����
int main(){
	int n;
	int i;
	int k;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
		if(n%i==0) break;
		if(i<n) printf("������������������������"); 
		else printf("%d",n);
//			printf("%d",n);
        break;
        	printf("%d",n);}
        else{
		
		printf("������������������������"); }

//1�Ľ���------ʹ����ƽ�����жϣ����Լ���ѭ�����������Ч�� 
    int k;
    k=sqrt(n);
	for (i=2;i<=k;i++)
		if(n%i==0) break;
		if(i<=k) printf("������������������������"); 
		else printf("%d",n);
	 
	}
	return 0;
} 






////��쳲���������-------��ѧ��ģ�黯����������һ�� 
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
//�󦰵Ľ���ֵ
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
 //�����֪ʶ�㣺
 //1��������ѧ�⺯����ʹ��-----fabs��x)�е�x��˫���ȵ����������ڶ����ʱ���ע�� 
 //2���ڼ�������з�������ȡ�� 

//���һ��4*5�ľ���
int main(){
	int i,j;
	int n=0;
	for(i=1;i<=4;i++)
	   for(j=1;j<=5;j++,n++){//����ȫ�����һ��δ���� 
	   if(n%5==0) printf("\n");//����취1������ģ 
	   	printf("%5d",i*j);      
	   }
	return 0;
} 
������ܱ�3�������� 
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
