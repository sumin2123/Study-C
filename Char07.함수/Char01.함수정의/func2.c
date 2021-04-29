#include<stdio.h>

void func();
int main()
{
	func();
	return 0;
}

void func()
{
	int a = 10, b = 20;
	int res;

	res = a + b;
	printf("res: %d", res);
	
}
