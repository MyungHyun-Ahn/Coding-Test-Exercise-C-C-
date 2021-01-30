#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int sum(int x, int y) {
	return x + y;
}

int main(void) {
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%d", sum(a, b));
	return 0;
}