#include<stdio.h>
int main() {
	int n;
	scanf_s("%d", &n);
	int i,j,first=1;//��С������ʼ��
	for (i = 1; i < n; i++) { first *= 10; }
	i = first;
	while (i<first*10) {
		int t = i;
		int sum = 0;
		while (t > 0) {
			int a = t % 10;
			t /= 10;
			int b = a;
			for (j = 1; j < n; j++) { b *= a; }
			sum += b;
		}
		if (sum == i) { printf("%d��ˮ�ɻ���\n", i); }
		i++;
	}
	return 0;
}