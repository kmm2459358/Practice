//==========================================================
//	����b-a
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // sscanf(),scanf(),printf()
// �֐��v���g�^�C�v

int main(int argc, char* argv[])
{
	int a, b;
	do {
		printf("a�̒l:");
		scanf("%d", &a);
	} while (a <= 0);

	do {
		printf("b�̒l:");
		scanf("%d", &b);
	} while (b <= 0 || a >= b);

	printf("%d - %d = %d\n", b, a, b - a);
	return 0;
}