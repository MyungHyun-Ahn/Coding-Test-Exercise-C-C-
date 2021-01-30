#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main(void) {
	int A, B, C;
	scanf("%d %d", &A, &B);
	scanf("%d", &C);
	int D, F, G;
	D = B + C;
	F = D / 60;
	A = A + F;
	C = D - 60 * F;

	G = A / 24;
	A = A - 24 * G;
	printf("%d %d", A, C);

	return 0;
}