#include <stdio.h>
#include <malloc.h>
struct student {
	int num;
	//	char name[100]; 
	int age;
};
struct student* creatstudent(void);//��������
void showstudent(struct student*);

int main(void) {
	struct student* ps;
	ps = creatstudent();
	showstudent(ps);

	return 0;
}
void showstudent(struct student* pst) {
	printf("���ѧ����ѧ��=%d,���=%d\n ", pst->num, pst->age);
	printf("\n");
}
struct student* creatstudent(void) {
	struct student* p = (struct student*)malloc(sizeof(struct student));//�����ʼ�ռ� 
	p->num = 73;
	//	p->name="neulwh";
	p->age = 22;
	return p;
}
