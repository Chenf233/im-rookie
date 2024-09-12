#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	srand(time(0));
	int a = rand();
	int g;
	int t=0;
	a %= 100;
	do {
		printf("猜0到99之间的数:");
		scanf_s("%d", &g);
		t++;
		if (g > a) { printf("猜的数较大\n"); }
		else if (g < a) { printf("你猜的数较小\n"); }
	} while (g != a);
	printf("你用了%d次猜出了数", t);
	return 0;
}