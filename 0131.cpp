�ṹ������ʵ�ֵ�������
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
		nodes[n].next_id=1;//ѭ���б�
	}
		int now=1,prev=1;//�ӵ�һ���ڵ㿪ʼ 
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
//�ýṹ������ʵ��˫��̬�б� 
#include <bits/stdc++.h>
const int N=105;
struct node{
	int id; 
	//int data;��
	int qian,hou; 
}nodes[N]; 
int main(){
	int n,m;
	scanf("%d,%d",&n,&m);
	nodes[0].hou=1;
	for(int i=1;i<=n;i++){
		nodes[i].id=i;
		nodes[i].qian=i+1;//ǰ�ڵ� 
		nodes[n].hou=1;//��ڵ� 
	}
	    nodes[n].hou=1;//ѭ���б��Ӻ���ǰ 
	    nodes[1].qian =n;//ѭ���б���ǰ���� 
		int now=1;//�ӵ�һ���ڵ㿪ʼ 
		while((n--)>1){
			for(int i=1;i<m;i++){
				now=nodes[now].hou ;//��ӡֹͣ�ı�׼ 
				printf("%d",nodes[now].id);
				int prev=nodes[now].qian ,next=nodes[now].hou ;
				nodes[prev].hou =nodes[now].hou ; //ɾ���ո� 
				nodes[next].qian =nodes[now].qian ;
				now=next;
//				nodes[prev].next_id=nodes[now].next_id;
//				now= nodes[prev].next_id;
			} 
			printf("%d",nodes[now].hou );//��ӡ���һ���ո񣬺��治���ո� 
			return 0;
		 
}
}

//��һά����ʵ�ֵ���̬����
#include <bits/stdc++.h>
int nodes[150 ];
int main(){
	int n,m;
	scanf("%d,%d",&n,&m);
	//nodes[0].next_id=1;
	for(int i=1;i<=n-1;i++)
		nodes[i]=i+1;
		nodes[n]=1;
		int now=1,prev=1;//�ӵ�һ���ڵ㿪ʼ 
		while((n--)>1){
			for(int i=1;i<m;i++){
				prev=now;
				now=nodes[now];
			} 
			printf("%d",now);// ���ո� 
			nodes[prev]=nodes[now];//����now�ڵ�
			now=nodes[prev]; 	 
}
    printf("%d",now);//��ӡ���һ���ڵ㣬�����ո� 
			return 0;
} 

