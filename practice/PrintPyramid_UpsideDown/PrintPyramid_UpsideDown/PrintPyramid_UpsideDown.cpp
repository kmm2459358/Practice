//==========================================================
//	�s���~�b�h��\������ �|�u
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()
// �֐��v���g�^�C�v
void PrintPyramid_UpsideDown(int n);

int main()
{
	while (true) {
		int n;
		do {
			printf("���i�̃s���~�b�h�ł���? ");
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