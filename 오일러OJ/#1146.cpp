#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main() {
	int n;
	int sum = 1;
	scanf("%d", &n);
	for (int i = 2;i <= n;i++) {
		sum += i * 3 + (i - 2) * 3;
	}
	printf("%d", sum);
	return 0;
}

