#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score[5][4];
	int i, j, total; //반복 제어변수, 총점
	double avg;	//평균
	int snumber;	// 학생수
	char  kor, eng, mat, spt;

	kor = "국어";
	eng = "영어";
	mat = "수학";
	spt = "체육";


	for (snumber = 1; snumber < 6; snumber++)
	{
		for (i = 1; i < 6; i++)
		{
			printf("%d번 국어, 영어, 수학, 체육 순으로 점수를 입력하세요: ", snumber++);
			for (j = 0; j < 4; j++)
			{
				scanf("%d", &score[i][j]);
			}
		}
	}
		printf("입력한 성적의 학생별 점수와 평균\n");

//		for (snumber = 1; snumber < 6; snumber++)
//		{
//			printf("%d번 학생 ", snumber);
//			total = 0;
//			for (score = 0;  score< 4; score++)
//			{
//				printf("%4d", score[i][j]);
//			}
//
//			total += score[i][j];
//		}
//		// 현재 학생의 총점 평균
//		avg = total / 4.0;
//		printf(": %4d, %.1lf\n", total, avg);
//
	return 0;
}
