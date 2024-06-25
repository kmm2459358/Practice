//==========================================================
//	ピラミッドを表示する 倒置
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()
// 関数プロトタイプ
void PrintPyramid_UpsideDown(int n);

int main()
{
	while (true) {
		int n;
		do {
			printf("何段のピラミッドですか? ");
			scanf("%d", &n);
		} while (n <= 0);
		PrintPyramid_UpsideDown(n);
	}
	return 0;
}

void PrintPyramid_UpsideDown(int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = i; j > 0; j--)
			printf(" ");
		for (int m = n * 2 - 1 - i * 2; m > 0; m--)
			printf("%d",i + 1);
		printf("\n");
	}
}