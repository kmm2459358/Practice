//==========================================================
//	��ϊ� �o�ߕ\��
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()
#include <stdlib.h>  // srand(),rand()
#include <time.h>    // time()
// �֐��v���g�^�C�v
int card_convert(char* buff, int num, int radix);
// �֐��}�N��
#define SWAP(type, x, y) do{ type tmp=x; x=y; y=tmp; }while(false) 

int main()
{
    srand(time(nullptr));
    const int BUFF_SIZE = 128;
    char buff[BUFF_SIZE];
    int yes;
    do {
        int num = rand();
        int radix = rand() % 34 + 2;  // radix=2�`36
        card_convert(buff, num, radix);

        printf("%d ���%3d �ŕ\������� %s\n", num, radix, buff);

        printf("\n������x���܂���?(1:�͂�/0:������)");
        scanf("%d", &yes);
    } while (yes == 1);
    return 0;
}

int card_convert(char* buff, int num, int radix)
{
    for(int i = 0; i < buff; i++)
}