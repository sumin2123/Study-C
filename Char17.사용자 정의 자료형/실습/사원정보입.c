#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <st>

typedef struct employee {
	int id;		//사원 번호
	char* name;	// 사원 이름
	int salary;	// 급여
}Employee;

//void printf_list(struct employee* lp);

int main()
{	
	Employee s1;
	char str[20] = { '\0' };
	printf("사원번호, 이름, 급여를 입력하세요 : \n");
	printf("$ ");
	scanf("%d %s %d", &s1.id, str, &s1.salary);
	s1.name = (char*)malloc(strlen(str) + 1);
	if (s1.name !=  NULL) strcpy(s1.name, str);
	printf("%d %s %d", s1.id, s1.name, s1.salary);

}




//void printf_list(struct employee* lp)
//{
//	printf("=========== 사원 아이디, 이름, 월급 출력 ===============");
//
//
//}

/*
	5명의 사원 아이디, 사원 이름, 한달 급여를 입력받아 출력한 뒤
	5명의 사원의 급여 총액과 평균 급여액을 구하시오.
	(이름은 동적할당에 저장한다.)
*/

/* 메모리 낭비 방지를 위해 동적할당 ( 하나입력 하나출력 )
int main()
{	
	Employee s1;
	char str[20];
	printf("사원번호, 이름, 급여를 입력하세요 : \n");
	printf("$ ");
	scanf("%d %s %d", &s1.id, str, &s1.salary);
	s1.name = (char*)malloc(strlen(str) + 1);
	strcpy(s1.name, str);
	printf("%d %s %d", s1.id, s1.name, s1.salary);

}
*/