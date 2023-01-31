结构体数组实现单向链表
#include <bits/stdc++.h>
const int N=105;
struct node{
	int id,next_id;
	//int data;
}nodes[N]; 
int main(){
	int n,m;
	scanf("%d,%d",&n,&m);
	nodes[0].next_id=1;
	for(int i=1;i<=n;i++){
		nodes[i].id=i;
		nodes[i].next_id=i+1;
		nodes[n].next_id=1;//循环列表
	}
		int now=1,prev=1;//从第一个节点开始 
		while((n--)>1){
			for(int i=1;i<m;i++){
				prev=now;now=nodes[now].next_id;
				printf("%d",nodes[now].id);
				nodes[prev].next_id=nodes[now].next_id;
				now= nodes[prev].next_id;
			} 
			printf("%d",nodes[now].next_id);
			return 0;
		 
}
}
//用结构体数组实现双向静态列表 
#include <bits/stdc++.h>
const int N=105;
struct node{
	int id; 
	//int data;、
	int qian,hou; 
}nodes[N]; 
int main(){
	int n,m;
	scanf("%d,%d",&n,&m);
	nodes[0].hou=1;
	for(int i=1;i<=n;i++){
		nodes[i].id=i;
		nodes[i].qian=i+1;//前节点 
		nodes[n].hou=1;//后节点 
	}
	    nodes[n].hou=1;//循环列表，从后往前 
	    nodes[1].qian =n;//循环列表，从前往后 
		int now=1;//从第一个节点开始 
		while((n--)>1){
			for(int i=1;i<m;i++){
				now=nodes[now].hou ;//打印停止的标准 
				printf("%d",nodes[now].id);
				int prev=nodes[now].qian ,next=nodes[now].hou ;
				nodes[prev].hou =nodes[now].hou ; //删除空格 
				nodes[next].qian =nodes[now].qian ;
				now=next;
//				nodes[prev].next_id=nodes[now].next_id;
//				now= nodes[prev].next_id;
			} 
			printf("%d",nodes[now].hou );//打印最后一个空格，后面不带空格 
			return 0;
		 
}
}

//用一维数组实现单向动态链表
#include <bits/stdc++.h>
int nodes[150 ];
int main(){
	int n,m;
	scanf("%d,%d",&n,&m);
	//nodes[0].next_id=1;
	for(int i=1;i<=n-1;i++)
		nodes[i]=i+1;
		nodes[n]=1;
		int now=1,prev=1;//从第一个节点开始 
		while((n--)>1){
			for(int i=1;i<m;i++){
				prev=now;
				now=nodes[now];
			} 
			printf("%d",now);// 带空格 
			nodes[prev]=nodes[now];//跳过now节点
			now=nodes[prev]; 	 
}
    printf("%d",now);//打印最后一个节点，不带空格 
			return 0;
} 

