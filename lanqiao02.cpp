#include <stdio.h>
//汉诺塔
int main(){
    void hanoi(int n,char a,char b,char c);
    int m;
    printf("输入盘子数：");
	scanf("%d",&m);
	printf("一个需要多少步：");
	hanoi(m,'A','B','C');
	return 0; 
} 

void hanoi(int n,char a,char b,char c){
	void move(char x,char y);
	if(n==1)//当只有一个盘时 
	 move(a,b);
	else{//如果有多个盘，可以将其看成两个，n-1和1个 
		hanoi(n-1,a,c,b);//先把n-1个盘移到b盘，借助c盘 
		move(a,c);//最后a剩一个盘，移到c 
		hanoi(n-1,b,a,c);//最后b盘的所有盘，移到c盘，借助a盘 
	}
	
}
void move(char x,char y)
{
	printf("%c->%c\n",x,y);
}
//门牌制作
/*int main(){
	int count=0;
	for(int i=1;i<=2021;i++){
		if(i%10==2){
			count++;
		}		
		 if(i%100/10==2)
		{
			count++;
		}
		if(i%1000/100==2);
		{
			count++;
		}
	}
//	    count=count+1;
	    printf("一共有%d个2 。",count);
	    return 0;
} */
// 卡片
/*#include <stdlib.h>
//另外一种思路，从记录用1的数量，什么时候被用完就可以 
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;//记录已经用掉的1的数量
	while (i)//非0就为真 
	{
		int temp = i;
		while (tmp)
		{
			if (temp % 10 == 1)
			{
				sum++;
			}
			temp /= 10;
		}
		if (sum == 2021)
		{
			break;
		}
		i++;//所表示的数字 
	}
	printf("%d", i);
	return 0;
}
*/
//思路：枚举1~n，直到剩下的卡片不能凑出这个数 ，停止循环，输出n-1 
//实际上我没懂 
/* int main(){
 	int kp[]={0,1,2,3,4,5,6,7,8,9};
 	for(int i=0;i<=9;i++)
 		kp[i]=2021
	 
	for(int i=1;;i++){
		int temp=i;
		while(temp!=0){
			int t=temp%10;
			if(kp[t]<=0){
				i=i-1;
				return 0;
			}
			kp[t]--;
			temp=temp/10;
		}
	}
 	return 0;
 	
 }*/
//空间 
/*int main(){
    int n;
    n=256*1024*1024;
	printf("输出多少位%d",n/4);
	 
	return 0;
}*/
