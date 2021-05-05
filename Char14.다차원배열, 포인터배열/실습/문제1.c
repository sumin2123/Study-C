#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char ch[100];	
		int i; 
		int res = 0;

		printf("원하는 문자열을 입력하세요 : ");
		scanf("%s", ch);
		
		int count = strlen(ch);
		printf("%s의 길이는 %d이다.\n", ch, count);

		for (i = 0; i < count / 2; i++)			//문자 길이 만큼반복 
		{
			if (ch[i] != ch[count - i - 1])		//홀수면 가운데는 같은 문자로 친다.
				res += 1;
		}
		if (res == 0) printf("회문\n");
		else printf("회문 아니댱\n");


	return 0;
}







// 맨 앞 글자랑 맨 뒤랑 비교 ,그다음 두번째 끼리 비교, 가운데끼리 비교
// 문자를 입력받기
// 문자 길이 만큼반복 / 홀수면 가운데는 같은 문자로 친다.
// 문자 첫번째와 마지막을 비교 / 그 두번째끼리 비교