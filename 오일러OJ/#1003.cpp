#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main(void) {
	int n;
	scanf("%d", &n);
	int OddSum = 0, EvenSum = 0;
	for (int i = 1;i <= n;i++) {
		if (i % 2 == 1) {
			OddSum += i;
		}
		else {
			EvenSum += i;
		}
	}
	printf("%d\n%d", EvenSum, OddSum);
	return 0;
}
