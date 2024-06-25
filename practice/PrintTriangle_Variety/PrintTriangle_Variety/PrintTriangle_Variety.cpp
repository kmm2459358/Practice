//==========================================================
//	�O�p�`��\������ �o���G�e�B
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()
// �֐��v���g�^�C�v
void PrintTriangleLB(int n);
void PrintTriangleLU(int n);
void PrintTriangleRB(int n);
void PrintTriangleRU(int n);

int main()
{
	while (true) {
		int n;
		do {
			printf("���i�̎O�p�`�ł���? ");
			scanf("%d", &n);
		} while (n <= 0);
		PrintTriangleLB(n); printf("\n");
		PrintTriangleLU(n); printf("\n");
		PrintTriangleRU(n); printf("\n");
		PrintTriangleRB(n); printf("\n");
	}
	return 0;
}

void PrintTriangleLB(int n)
{
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}
void PrintTriangleLU(int n)
{
	for (int i = 1; i <= n; i++) {
		for (int j = n; j >= i; j--) {
			printf("*");
		}
		printf("\n");
	}
}
void PrintTriangleRU(int n)
{
	for (int i = 1; i <= n; i++) {
		for (int j = n; j >= i; j--) {
			printf("*");
		}
		printf("\n");
		for (int m = 0; m < i; m++)
			printf(" ");
	}
}
void PrintTriangleRB(int n)
{
	for (int i = 1; i <= n; i++) {
		for (int m = n; m > i; m--)
			printf(" ");
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}