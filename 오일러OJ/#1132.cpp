#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main(void) {
	int K, N, M, X;
	scanf("%d %d %d", &K, &N, &M);
	X = K * N - M;
	if (X < 0) {
		printf("0");
	}
	else {
		printf("%d", X);
	}
	return 0;
}