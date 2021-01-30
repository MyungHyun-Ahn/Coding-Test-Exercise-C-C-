#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main(void) {
	int n;
	scanf("%d", &n);
	int Sum = 0;
	for (int i = 1;i < n;i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			Sum += i;
		}
	}
	printf("%d", Sum);
	return 0;
}