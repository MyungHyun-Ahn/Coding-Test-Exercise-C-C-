#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main() {
	int n;
	int sum = 1;
	scanf("%d", &n);
	for (int i = 1;i <= n + 1;i++) {
		sum += i;
	}
	printf("%d", sum);
	return 0;
}

