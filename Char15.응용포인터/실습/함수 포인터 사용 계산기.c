#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func(int (*fp)(int, int));
int sum(int a, int b);	//µ¡¼À
int sub(int a, int b);	//»¬¼À
int mul(int a, int b);	//°ö¼À
int div(int a, int b);	//³ª´°¼À

int main(void)
{
	int sel;

	printf("01 µ¡¼ÀÀÇ °ª\n");
	printf("02 »¬¼ÀÀÇ °ª\n");
	printf("03 °ö¼ÀÀÇ °ª\n");
	printf("04 ³ª´°¼ÀÀÇ °ª\n");
	printf("¿øÇÏ´Â ¿¬»êÀ» ¼±ÅÃÇÏ¼¼¿ä : ");
	scanf("%d", &sel);
	
	switch (sel)
	{
	case 1: func(sum); break;
	case 2: func(sub); break;
	case 3: func(mul); break;
	case 4: func(div); break;

	}

	return 0;
}

void func(int (*fp)(int, int))
{
	int a, b;
	int res;

	printf("µÎ Á¤¼öÀÇ °ªÀ» ÀÔ·ÂÇÏ¼¼¿ä : ");
	scnaf("%d%d", &a, &b);
	res = fp(a, b);
	printf("°á±£°ªÀº : %d\n", res);
}

int sum(int a, int b)
{
	return (a + b);
}

int sub(int a, int b)
{
	return (a - b);
}

int mul(int a, int b)
{
	return (a * b);
}

int div(int a, int b)
{
	return (a / b);
}




