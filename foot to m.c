#include<stdio.h>
int main()
{
	double foot;
	double inch;
	printf("������Ҫת���ĳ��룬��/6 7/����6��7��");
	scanf_s("%lf %lf", &foot, &inch);
	printf("%lf�� %lf����%lf m",foot, inch,(foot+inch/12)*0.3048);
	return 0;
}