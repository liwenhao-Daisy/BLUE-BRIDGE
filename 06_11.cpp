#include <stdio.h>
//用选择法来排序
#include<stdio.h>//头文件 
int main()//主函数 
{
  int i,j,min,temp,array[11];//定义整型变量和数组 
  printf("输入数据：\n");//提示语句 
  for(i=1;i<=10;i++)//依次键盘录入10个数据 
  {
    printf("array[%d]=",i-1);//数组下标从0开始 
    scanf("%d",&array[i]);
  }
  printf("\n");//换行 
  printf("原样输出：\n");//提示语句 
  for(i=1;i<=10;i++)//将键盘录入的10个数原样输出 
  {
    printf("%5d",array[i]);
  }
  printf("\n");//换行
  for(i=1;i<=9;i++)
  {
    min=i;//把第一个数作为最小的 
    for(j=i+1;j<=10;j++)
    { 
      if(array[min]>array[j])//判断大小，小的为min 
      {
        min=j;
      } 
    }
      temp=array[i]; //大小交换 
      array[i]=array[min];
      array[min]=temp; 
  } 
  printf("排序输出：\n");//提示语句 
  for(i=1;i<=10;i++)//输出排序后的10个数 
  {
    printf("%5d",array[i]);
  }
  printf("\n");//换行
  return 0;//主函数返回值为0 
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







//筛选在100内的素数
//明确什么是素数，只能被一或者本身整除的整数
//了解什么是筛选法！！！非常重要 
int main(){
	int i;
	int a[100];
	int count=0;
    for(i=0;i<100;i++){
    	a[i]=i+1;//将填充的数据放到数组中 
	}
	//1不是素数，要将其剔除————>使用0填充
	a[0]=0;
	for(int i=1;i<100;++i) {
		if(0==a[i])//此处的设计是为了已经被模过的数据不再参与计算 
		  continue;
		for(int j=i+1;j<100;++j){
		
		if(0!=a[j]&&a[j]%a[i]==0){//只有a[j]不为0 且除以a[i]=0时才能进行下一步 
			a[j]=0;
		}
	}
	}
	for(i=0;i<100;i++){//思考最后这个循环在最后所加的巧妙 
		if(0!=a[i]){
			printf("%d\n",a[i]);
			count++;
		}
	}
	printf("共有%d个素数\n",count);
	printf("-----------");
	return 0;
}
