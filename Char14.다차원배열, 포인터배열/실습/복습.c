#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score[5][4];
	int i, j, total; //�ݺ� �����, ����
	double avg;	//���
	int snumber;	// �л���
	char  kor, eng, mat, spt;

	kor = "����";
	eng = "����";
	mat = "����";
	spt = "ü��";


	for (snumber = 1; snumber < 6; snumber++)
	{
		for (i = 1; i < 6; i++)
		{
			printf("%d�� ����, ����, ����, ü�� ������ ������ �Է��ϼ���: ", snumber++);
			for (j = 0; j < 4; j++)
			{
				scanf("%d", &score[i][j]);
			}
		}
	}
		printf("�Է��� ������ �л��� ������ ���\n");

//		for (snumber = 1; snumber < 6; snumber++)
//		{
//			printf("%d�� �л� ", snumber);
//			total = 0;
//			for (score = 0;  score< 4; score++)
//			{
//				printf("%4d", score[i][j]);
//			}
//
//			total += score[i][j];
//		}
//		// ���� �л��� ���� ���
//		avg = total / 4.0;
//		printf(": %4d, %.1lf\n", total, avg);
//
	return 0;
}
