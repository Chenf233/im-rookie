#include<stdio.h>
int main() {
	int n, m,cnt=0,now;
	scanf_s("%d %d", &n, &m);
	now = n;
	for (; m > 0; m--) {
		cnt += now;
		now = now * 10 + n;
	}
	printf("%d", cnt);
	return 0;
}