#include <stdio.h> 

int main()
{	
	printf("1. �Ϲݺ��� ������\n");
	int a = 10;
	int *pa = &a;
	printf("%p %p\n", &a, pa);
	// ����� ������ �ּҰ��� ���´�

	printf("==================================\n\n");

	printf("2. 1���� �迭 ������\n");
	int ary1[2] = { 1, 2 };
	int* pary1 = ary1; //�����Ͱ� �迭�� ����Ŵ
	printf("%p %p\n", ary1, pary1);
	printf("%p %p\n\n", ary1 + 1, pary1 + 1);
	// �����͸� ����ϱ⿡ �� �ΰ��� ���� ���ƾ��Ѵ�.
	// �̰� �����͸� �ٲٰ� �Ǿ ���� ������ �ʴ´�.
	
	/* ���, �Ϲ� ������ �迭 ������ ���̰� �߻��Ѵ�.*/

	printf("=================================\n\n");

	printf("3. char �Լ�\n"); 
	char ary2[2] = { 'a', 'b' };
	char pary2 = ary2;
	printf("%p %p\n", ary2, pary2);
	printf("%p %p\n\n", ary2 + 1, pary2 + 1);

	printf("=================================\n\n");

	printf("4. 2���� �迭 ������\n");
	int ary3[][2] = { {1, 2}, {3,4} };
	int(* pary3)[2] = ary3;
	printf("%p %p\n", ary3, pary3);
	printf("%p %p\n\n", ary3 + 1, pary3 + 1);
	printf(" [ ���� ] \n +1 ���� ��� ���� �޶�����.\n Why?\n �����͸� ���ؼ� �����غ��� �츮�� �ٸ� �����͸� �ǵ�� �ֱ⶧���� �ٸ����� ��µȴ�.\n\n �׷� ��� ���� ���� ����ұ�?\n  �ΰ��� int���� ������ �迭�Դϴ� ��� ǥ�ø� ������Ѵ�\n");
	printf("int *pary3 = ary3; �� int(* pary3)[2] = ary3; ���� ���� (35��)\n\n");

	printf("=================================\n\n");

	printf("5. ���� ������\n");
	char *ary4[2] = { "hi", "good"};
	char* *pary4 = ary4;
	printf("%p %p\n", ary4, pary4);
	printf("%p %p\n\n\n\n", ary4 + 1, pary4 + 1);


	return 0;
}
