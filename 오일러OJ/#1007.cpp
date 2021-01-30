#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main() {
	int n;
	int sum = 0;
	scanf("%d", &n);
	for (int i = 1;i <= n;i++) {
		sum += i * (n - i + 1);
	}
	printf("%d", sum);
	return 0;
}


