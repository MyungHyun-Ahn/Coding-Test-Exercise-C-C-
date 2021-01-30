#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main() {
	int a, b, c, d;
	int e, f, g, h;
	int S, T;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	scanf("%d %d %d %d", &e, &f, &g, &h);
	S = a + b + c + d;
	T = e + f + g + h;
	int MAX = S > T ? S : T;
	printf("%d", MAX);
	return 0;
}