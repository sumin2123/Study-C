#include <stdio.h> 

int main(void)
{
	int a = 10, b = 20;
	const int *pa = &a; // 포인터가 가리키는 곳의 데이터를 상수화 ( 주소변경 O)
	int* const pb = &b; // 포인터 자체가 상수화 ( 주소변경 X )

	printf("변수 a값 : %d\n", *pa);
	pa = &b;
	b = 50;

	printf("변수 b값 : %d\n", *pa);
	pa = &a;
	a = 20;

	printf("변수 a값 : %d\n", *pa);
	printf("변수 b값 : %d\n", *pb);

	return 0;
}