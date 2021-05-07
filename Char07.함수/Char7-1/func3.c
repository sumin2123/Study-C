#include<stdio.h>

int func(int, int);

int main()
{
	int a, b;
	int result;
	a = 10, b = 20;

	result = func(a, b);
	printf("result : %d\n", result);
	return 0;
}

void func(int aa, int ab)
{
	int res;
	res = aa + ab;
	return res;
	\\
}
