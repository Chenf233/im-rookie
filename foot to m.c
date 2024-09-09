#include<stdio.h>
int main()
{
	float foot;
	float inch;
	printf("请输入要转换的尺码，如/6 7/代表6尺7寸");
	scanf_s("%f %f", &foot, &inch);
	printf("%f尺 %f寸是%lf m",foot, inch,(foot+inch/12)*0.3048);
	return 0;
}
//从英尺转换成米
