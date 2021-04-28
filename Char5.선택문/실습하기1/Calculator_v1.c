#include <stdio.h>

int main(void)
{
	int a, b;
	int sum, sub, mul, miu;

	a = 9;
	b = 3;

	sum = a + b;
	sub = a - b;
	mul = a * b;
	miu = a / b;

	printf("sum : %d\n", sum);
	printf("sub : %d\n", sub);
	printf("mul : %d\n", mul);
	printf("miu : %d\n", miu);


	return 0;
}