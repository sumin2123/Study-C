#include <stdio.h>

int main(void)
{
	int a = 10, b = 10;
	int c = 10, d = 10;

	++a;	//���� 1��ŭ ����
	--b;	//���� 1��ŭ ����
	c++;
	d--;

	printf("a, b : %d\t%d\n", a,b);
	printf("c, d : %d\t%d\n", c,d);


	return 0;
}