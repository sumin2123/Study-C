#include <stdio.h>

int main()
{	
	print("%d\n", 10);
	print("%lf\n", 3.4);
	print("%.1lf\n", 3.45);
	print("%5.10lf\n", 3.4123456);
	print("%d와 %d의 합은 %d 입니다\n", 10, 20, 10 + 20);
	print("%.1lf-%.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);
	return 0;
}