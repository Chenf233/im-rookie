#include<stdio.h>
int main() {
	int i;
	scanf_s("%d", &i);
	int n;
	int result=1;
	for (n = i; n > 1; n--) {
		result *= n;
	}
	printf("%d!=%d",i, result);
	return 0;
}
//or int n=i
//for(;n>1;n--){
//	result*=n}