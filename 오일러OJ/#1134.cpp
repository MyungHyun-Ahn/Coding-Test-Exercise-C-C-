#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main(void) {
	int n;
	scanf("%d", &n);
	printf("%d", (n - 1) / 4);
	return 0;
}
//for문 사용시 시간초과 EX)최대 정수 20억 쯤을 넣는다면 1초 이상의 시간이 걸린다.