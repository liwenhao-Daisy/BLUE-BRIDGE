#include <stdio.h> 

struct Student {
	int num;
	char name[100];
	char sex;
};

int main() {
	struct Student st { 1000, "zdd", 'm' };
	struct Student* pst;
	printf("%d,%s,%c\n",st.num,st.name,st.sex );
	st.num = 73;
	printf("%d,%s,%c\n", st.num, st.name, st.sex);
	pst = &st;
	pst->num = 99;
	printf("%d,%s,%c\n", st.num, st.name, st.sex);
	return 0;
}

#include <stdio.h> 


struct student {
	int num;
	char name[100];
	char sex;
};
void f(struct student* pst);
void g(struct student st);
void g2(struct student* pst);

int main() {
	struct student st;
	f(&st);
	g2(&st);
	printf("%d,%s,%c\n", st.num, st.name, st.sex);//�������һ

	return 0;
}
//ע��ṹ�岻�ܼӼ��˳����������໥��ֵ
void g2(struct student *pst)//���������ֵ�����������
{
	printf("%d,%s,%c\n", *pst->num, *pst->name, *pst->sex);
}
void f(struct student *pst) {
	pst->num = 99;
	pst->name, "zdd";
	pst->sex = 'm';
