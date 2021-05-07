#include <stdio.h> 

int main()
{	
	printf("1. 일반변수 포인터\n");
	int a = 10;
	int *pa = &a;
	printf("%p %p\n", &a, pa);
	// 결과는 동일한 주소값이 나온다

	printf("==================================\n\n");

	printf("2. 1차원 배열 포인터\n");
	int ary1[2] = { 1, 2 };
	int* pary1 = ary1; //포인터가 배열을 가리킴
	printf("%p %p\n", ary1, pary1);
	printf("%p %p\n\n", ary1 + 1, pary1 + 1);
	// 포인터를 사용하기에 이 두개의 값은 같아야한다.
	// 이건 포인터를 바꾸게 되어도 값은 변하지 않는다.
	
	/* 결론, 일반 변수와 배열 변수는 차이가 발생한다.*/

	printf("=================================\n\n");

	printf("3. char 함수\n"); 
	char ary2[2] = { 'a', 'b' };
	char pary2 = ary2;
	printf("%p %p\n", ary2, pary2);
	printf("%p %p\n\n", ary2 + 1, pary2 + 1);

	printf("=================================\n\n");

	printf("4. 2차원 배열 포인터\n");
	int ary3[][2] = { {1, 2}, {3,4} };
	int(* pary3)[2] = ary3;
	printf("%p %p\n", ary3, pary3);
	printf("%p %p\n\n", ary3 + 1, pary3 + 1);
	printf(" [ 설명 ] \n +1 했을 경우 값이 달라진다.\n Why?\n 포인터를 통해서 접근해보면 우리가 다른 데이터를 건들고 있기때문에 다른값이 출력된다.\n\n 그럼 어떻게 같은 값이 출력할까?\n  두개의 int형을 가지는 배열입니다 라고 표시를 해줘야한다\n");
	printf("int *pary3 = ary3; → int(* pary3)[2] = ary3; 으로 변경 (35행)\n\n");

	printf("=================================\n\n");

	printf("5. 이중 포인터\n");
	char *ary4[2] = { "hi", "good"};
	char* *pary4 = ary4;
	printf("%p %p\n", ary4, pary4);
	printf("%p %p\n\n\n\n", ary4 + 1, pary4 + 1);


	return 0;
}
