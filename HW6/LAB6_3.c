//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	char grade;
	int score;

	printf("Enter your grade : ");
	scanf("%c", &grade);
	
	if (grade == 'A')	 
	{
		printf("Enter your score : ");
        scanf("%d", &score);

		printf("%d 점이면 %c를 받는군요", score, grade);
	}
}