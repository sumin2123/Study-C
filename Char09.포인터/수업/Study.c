#include <stdio.h>

int main()
{
	int a = 10, b = 20;
	int temp;
	printf("바꾸기전 a,b : %d, %d\n", a, b);

	swqp(a, b);
	printf("바뀐 후 a, b : %d, %d\n", a, b);
	return 0;
}

void swap(int a, int b);
{

}