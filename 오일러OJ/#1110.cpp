#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int ChessLogic1(int x) {
	int res = 2;
	for (int i = 2;i <= x;i++) {
		res = res + (i / 2 + 1);
	}
	return res;
}

int main(void) {
	int A;
	scanf("%d", &A);
	printf("%d", ChessLogic1(A));
	return 0;
}