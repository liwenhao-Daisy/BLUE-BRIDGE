#include <stdio.h>
//���������Ժ����� 

int main()
{
	int a[11]={1,2,3,4,5,7,8,9,10,11};
	int i,t,m;
	printf("����һ����:\n");
		scanf("%d",&m);
	for(i=0;i<11;i++)
	{
		if(m<a[i])
		{
			t=m;m=a[i];a[i]=t;
		}
	else if(m>a[9])
			a[10]=m;
	}
	  printf("�����:\n");
    for(i=0;i<11;i++)
		printf("%d ",a[i]);
return 0;
}

//int main(){
//	int mid,high,low;
//	int i,j;
//	int a[5];
//	int temp;
//	for(int i=0;i<=4;i++){
//		scanf("%d",&a[i]);
//	}
//   printf("ԭ������Ϊ�� \n");	
//   for(int i=0;i<5;i++){
//   	low=a[0];
//   	high=a[4];
//   	mid=(high+low)/2;
//   }
//   scanf("%d",&temp);
//   
//	return 0;
//}





//�����������
int main(){
//	int n=5;
	int a[5];
	int temp;
	for(int i=0;i<=4;i++){
		scanf("%d",&a[i]);
	}
	printf("���������Ϊ�� \n"); 
	for(int i=0;i<=4;i++){
	printf("%4d\n",a[i]);
	}
	for(int i=0;i<=(4/2);i++){
		temp=a[i];
		a[i]=a[4-i];
		a[4-i]=temp;
	}
	printf("�޸ĺ������Ϊ�� ");
	 for(int i=0;i<=4;i++){
	printf("%d\t",a[i]);
	}
	printf("\n");
    return 0;
}



//�����;�������Խ�Ԫ�صĺ� 

int main()                 // ����main����
{
    int a[3][3];
    int i,j,sum1,sum2,sum;
    for(i=0;i<=2;i++)
    {for(j=0;j<=2;j++)
    {
    scanf("%d",&a[i][j]);    
    }
    }
    sum1=a[0][0]+a[1][1]+a[2][2];
    sum2=a[0][2]+a[1][1]+a[2][0];   //���ǵ������ԽǺ͸��Խ� 
    sum=sum1+sum2;
    printf("sum= %d",sum);
    return 0;
}


//int main(){
//	int a[3][3];
//	int sum=0;
//	int i,j;
//	printf("�������ݣ� ");
//	for(int i=0;i<3;i++){
//		for(int j=0;j<=3;j++){
//			scanf("%d",&a[i][j]);
//		}
//	}
//	//if(i==j),ʹ�ø��������������
//	//for(i=0;i<3;i++) 
//	//{
//		sum=a[0][0]+a[1][1]+a[2][2];
//	//}
//	printf("sum=%d\n",sum);
//	return 0;
//}
