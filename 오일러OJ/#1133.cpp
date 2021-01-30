#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a == b && b == c && a == c) {
		printf("%d", 10000 + a * 1000);
	}
	else if (((a == b) && (a != c)) || ((b == c) && (b != a)) || ((a == c) && (a != b))) {
		int same = a == b ? a : b;
		same = b == c ? b : same;
		same = a == c ? c : same;
		printf("%d", 1000 + same * 100);
	}
	else {
		int max = a > b ? a : b;
		max = max > c ? max : c;
		printf("%d", max * 100);
	}
	return 0;
}

