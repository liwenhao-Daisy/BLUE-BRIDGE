#include <stdio.h>
//统计数字 
int main(){
	int elem;
	int a[100];
	int count=0;//统计数字2出现的次数 
	scanf("%d",&elem);
	for(int i=0;i<=elem;i++){
		scanf("%d",&a[i]);//读取数组里每个数的值； 

	}
	for(int i=0;i<=elem;i++){
		if(a[i]==2){
			count++;
//			i++;
		}
}
    printf("一共有多少个%d 2",count);
    return 0;
}
