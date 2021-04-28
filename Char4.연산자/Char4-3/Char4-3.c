#include <stdio.h>

int main(void)
{
	int a = 10, b = 10;
	int c = 10, d = 10;

	++a;	//값을 1만큼 증가
	--b;	//값을 1만큼 감소
	c++;
	d--;

	printf("a, b : %d\t%d\n", a,b);
	printf("c, d : %d\t%d\n", c,d);


	return 0;
}