#include <stdio.h>
//��ŵ��
int main(){
    void hanoi(int n,char a,char b,char c);
    int m;
    printf("������������");
	scanf("%d",&m);
	printf("һ����Ҫ���ٲ���");
	hanoi(m,'A','B','C');
	return 0; 
} 

void hanoi(int n,char a,char b,char c){
	void move(char x,char y);
	if(n==1)//��ֻ��һ����ʱ 
	 move(a,b);
	else{//����ж���̣����Խ��俴��������n-1��1�� 
		hanoi(n-1,a,c,b);//�Ȱ�n-1�����Ƶ�b�̣�����c�� 
		move(a,c);//���aʣһ���̣��Ƶ�c 
		hanoi(n-1,b,a,c);//���b�̵������̣��Ƶ�c�̣�����a�� 
	}
	
}
void move(char x,char y)
{
	printf("%c->%c\n",x,y);
}
//��������
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
	    printf("һ����%d��2 ��",count);
	    return 0;
} */
// ��Ƭ
/*#include <stdlib.h>
//����һ��˼·���Ӽ�¼��1��������ʲôʱ������Ϳ��� 
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;//��¼�Ѿ��õ���1������
	while (i)//��0��Ϊ�� 
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
		i++;//����ʾ������ 
	}
	printf("%d", i);
	return 0;
}
*/
//˼·��ö��1~n��ֱ��ʣ�µĿ�Ƭ���ܴճ������ ��ֹͣѭ�������n-1 
//ʵ������û�� 
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
//�ռ� 
/*int main(){
    int n;
    n=256*1024*1024;
	printf("�������λ%d",n/4);
	 
	return 0;
}*/
