//基本数据结构——队列 
#include <stdio.h>
#include<bits/stdc++.h>
//定义队列
//const int N=105;
// int que[N],head,tail;
// head++；
// que[head];
// que[++tail]=data;

 
//STL队列---洛谷1540
using namespace std;
int hash[1003]={0};
queue<int>mem;
int main(){
	int m,n;
	scanf("%d,%d",&m,&n);
	int cnt=0;
	while(n--){
		int en;
		scanf("%d",&en);
		if(!hash[en]){
			++cnt;
			mem.push(en);
			hash[en]=1;
			while(mem.size()>m){
				hash[mem.front()]=0;
				mem.pop();
			}
		}
	}
	printf("%d\n",cnt);
	return 0;
} 
