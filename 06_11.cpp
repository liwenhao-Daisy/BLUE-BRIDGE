#include <stdio.h>
//��ѡ��������
#include<stdio.h>//ͷ�ļ� 
int main()//������ 
{
  int i,j,min,temp,array[11];//�������ͱ��������� 
  printf("�������ݣ�\n");//��ʾ��� 
  for(i=1;i<=10;i++)//���μ���¼��10������ 
  {
    printf("array[%d]=",i-1);//�����±��0��ʼ 
    scanf("%d",&array[i]);
  }
  printf("\n");//���� 
  printf("ԭ�������\n");//��ʾ��� 
  for(i=1;i<=10;i++)//������¼���10����ԭ����� 
  {
    printf("%5d",array[i]);
  }
  printf("\n");//����
  for(i=1;i<=9;i++)
  {
    min=i;//�ѵ�һ������Ϊ��С�� 
    for(j=i+1;j<=10;j++)
    { 
      if(array[min]>array[j])//�жϴ�С��С��Ϊmin 
      {
        min=j;
      } 
    }
      temp=array[i]; //��С���� 
      array[i]=array[min];
      array[min]=temp; 
  } 
  printf("���������\n");//��ʾ��� 
  for(i=1;i<=10;i++)//���������10���� 
  {
    printf("%5d",array[i]);
  }
  printf("\n");//����
  return 0;//����������ֵΪ0 
}
//int main(){
//	int a[10]={8,6,4,5,1,2,3,9,7,10};
//	int temp;
//	for(int i=0;i<10;i++){
//		if(a[i]<a[i+1]){
//			temp=a[i];
//			a[i]=a[i+1];
//			a[i+1]=temp;
//		}
//	}
//	return 0;
//} 







//ɸѡ��100�ڵ�����
//��ȷʲô��������ֻ�ܱ�һ���߱�������������
//�˽�ʲô��ɸѡ���������ǳ���Ҫ 
int main(){
	int i;
	int a[100];
	int count=0;
    for(i=0;i<100;i++){
    	a[i]=i+1;//���������ݷŵ������� 
	}
	//1����������Ҫ�����޳���������>ʹ��0���
	a[0]=0;
	for(int i=1;i<100;++i) {
		if(0==a[i])//�˴��������Ϊ���Ѿ���ģ�������ݲ��ٲ������ 
		  continue;
		for(int j=i+1;j<100;++j){
		
		if(0!=a[j]&&a[j]%a[i]==0){//ֻ��a[j]��Ϊ0 �ҳ���a[i]=0ʱ���ܽ�����һ�� 
			a[j]=0;
		}
	}
	}
	for(i=0;i<100;i++){//˼��������ѭ����������ӵ����� 
		if(0!=a[i]){
			printf("%d\n",a[i]);
			count++;
		}
	}
	printf("����%d������\n",count);
	printf("-----------");
	return 0;
}
