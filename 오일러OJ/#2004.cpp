#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main() {
	int N, K;
	scanf("%d %d", &N, &K);
	if (N <= K) {
		printf("2");
	}
	else if (N * 2 % K == 0) {
		printf("%d", N * 2 / K);
	}
	else {
		printf("%d", N * 2 / K + 1);
	}
	return 0;
}


