// 컴퓨터학과 20210820 한민주 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int radius;
	double area;

	printf("Enter a radius : ");
	scanf("%d", &radius);

	area = 3.141592 * radius * radius;

	printf("The area of a circle with %d : %f", radius , area);
}