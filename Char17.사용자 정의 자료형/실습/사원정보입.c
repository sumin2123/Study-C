#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <st>

typedef struct employee {
	int id;		//��� ��ȣ
	char* name;	// ��� �̸�
	int salary;	// �޿�
}Employee;

//void printf_list(struct employee* lp);

int main()
{	
	Employee s1;
	char str[20] = { '\0' };
	printf("�����ȣ, �̸�, �޿��� �Է��ϼ��� : \n");
	printf("$ ");
	scanf("%d %s %d", &s1.id, str, &s1.salary);
	s1.name = (char*)malloc(strlen(str) + 1);
	if (s1.name !=  NULL) strcpy(s1.name, str);
	printf("%d %s %d", s1.id, s1.name, s1.salary);

}




//void printf_list(struct employee* lp)
//{
//	printf("=========== ��� ���̵�, �̸�, ���� ��� ===============");
//
//
//}

/*
	5���� ��� ���̵�, ��� �̸�, �Ѵ� �޿��� �Է¹޾� ����� ��
	5���� ����� �޿� �Ѿװ� ��� �޿����� ���Ͻÿ�.
	(�̸��� �����Ҵ翡 �����Ѵ�.)
*/

/* �޸� ���� ������ ���� �����Ҵ� ( �ϳ��Է� �ϳ���� )
int main()
{	
	Employee s1;
	char str[20];
	printf("�����ȣ, �̸�, �޿��� �Է��ϼ��� : \n");
	printf("$ ");
	scanf("%d %s %d", &s1.id, str, &s1.salary);
	s1.name = (char*)malloc(strlen(str) + 1);
	strcpy(s1.name, str);
	printf("%d %s %d", s1.id, s1.name, s1.salary);

}
*/