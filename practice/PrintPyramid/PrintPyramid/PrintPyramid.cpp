//==========================================================
//	ピラミッドを表示する
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()
// 関数プロトタイプ
void PrintPyramid(int n);

int main()
{
	while (true) {
		int n;
		do {
			printf("何段のピラミッドですか? ");
			scanf("%d", &n);
		} while (n <= 0);
		PrintPyramid(n);
	}
	return 0;
}

void PrintPyramid(int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = n - i - 1; j > 0; j--)
			printf(" ");
		for (int m = i * 2 + 1; m > 0; m--)
			printf("*");
		printf("\n");
	}
}