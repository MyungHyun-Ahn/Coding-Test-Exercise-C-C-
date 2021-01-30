#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int Mul(int x, int y) {
	return x * y;
}

int main(void) {
	int a;
	scanf("%d", &a);
	for (int i = 1;i <= 9;i++) {
		printf("%d*%d=%d\n\n", a, i, Mul(a, i));
	}
	return 0;
}