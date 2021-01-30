#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main(void) {
	int A, B;
	scanf("%d %d", &A, &B);
	char C;
	if (A > B) {
		C = '>';
	}
	else if (A < B) {
		C = '<';
	}
	else if (A = B) {
		C = '=';
	}
	printf("%c", C);
	return 0;
}