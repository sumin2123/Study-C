#include <stdio.h> 

int main(void)
{
	int a = 10, b = 20;
	const int *pa = &a; // �����Ͱ� ����Ű�� ���� �����͸� ���ȭ ( �ּҺ��� O)
	int* const pb = &b; // ������ ��ü�� ���ȭ ( �ּҺ��� X )

	printf("���� a�� : %d\n", *pa);
	pa = &b;
	b = 50;

	printf("���� b�� : %d\n", *pa);
	pa = &a;
	a = 20;

	printf("���� a�� : %d\n", *pa);
	printf("���� b�� : %d\n", *pb);

	return 0;
}