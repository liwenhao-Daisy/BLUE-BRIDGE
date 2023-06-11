#include<stdio.h>//头文件 
int main()//主函数 
{
  int i,a[10];
  for(i=0;i<10;i++){
  	a[i]=i;
  }
  for(i=9;i>=0;i--){
  	printf("%5d",a[i]);   //数组逆序输出值 
  }
  printf("\n");
  return 0;//主函数返回值为0 
}

int main(){
	int i;
	int f[20]={1,1};
	for(i=2;i<20;i++){
		f[i]=f[i-1]+f[i-2];//   本题考察对斐波那契数列的处理 
	}
	for(i=0;i<20;i++){
		if(i%5==0) 	
		printf("\n");//起到换行的作用----我从来不注意换行 
		{
		printf("%12d",f[i]) ;
		}

	}
	printf("\n");
	return 0;
} 

int main(){
	int a[10];
	int i ,j ,t;
	printf("请输入10个数：");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	} 
	printf("\n");
	for(j=0;j<9;j++)
	{for(i=0;i<9-j;i++){
	
		if(a[i]>a[i+1]){
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
		printf("排序后的数如下：\n");
		for(i=0;i<10;i++){
			printf("%d",a[i]);
					}
	}
		printf("\n");
	return 0;
}



