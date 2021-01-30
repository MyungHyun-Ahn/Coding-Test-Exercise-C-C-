#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main() {
	int A, B;
	scanf("%d", &A);
	scanf("%d", &B);
	if (A % 2 == 0 || B % 2 == 1) {
		printf("1");
	}
	else {
		printf("0");
	}
	return 0;
}