#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main() {
	int n;
	int sum = 0;
	scanf("%d", &n);
	for (int i = 0;i <= 100;i++) {
		sum += n * i;
	}
	printf("%d", sum);
	return 0;
}


