//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int weight, height;

	printf("Enter your height : ");
	scanf("%d", &height);
	printf("Enter your weight : ");
	scanf("%d", &weight);

	if (height <= weight + 110)
	{
			printf("You need a diet\n");
	}
	printf("BYE");
}