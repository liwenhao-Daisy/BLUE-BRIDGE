#include <stdio.h>
//ͳ������ 
int main(){
	int elem;
	int a[100];
	int count=0;//ͳ������2���ֵĴ��� 
	scanf("%d",&elem);
	for(int i=0;i<=elem;i++){
		scanf("%d",&a[i]);//��ȡ������ÿ������ֵ�� 

	}
	for(int i=0;i<=elem;i++){
		if(a[i]==2){
			count++;
//			i++;
		}
}
    printf("һ���ж��ٸ�%d 2",count);
    return 0;
}
