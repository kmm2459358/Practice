//==========================================================
//	�����`��\������
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()
// �֐��v���g�^�C�v
void PrintRectangle(int w, int h);

int main()
{
    while (true) {
        int h, w;
        puts("�����`��\�����܂�");
        do {
            printf("������: ");
            scanf("%d", &h);
        } while (h <= 0);
        do {
            printf("������: ");
            scanf("%d", &w);
        } while (w <= 0);
        PrintRectangle(w, h);
    }
    return 0;
}

void PrintRectangle(int w, int h)
{
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++)
            printf("*");
        printf("\n");
    }
}