#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main() {
	int W;
	scanf("%d", &W);
	if (W > 2 && W % 2 == 0) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	return 0;
}