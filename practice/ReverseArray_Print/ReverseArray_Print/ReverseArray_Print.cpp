//==========================================================
//	�z��̔��] �o�ߕ\��
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()
#include <stdlib.h>  // srand(),rand()
#include <time.h>    // time()
// �֐��v���g�^�C�v
void ReverseArray(int array[], int arraySize);
void dumpArray(int array[], int arraySize);
// �֐��}�N�� 
#define SWAP(type, x, y) do{type tmp=x; x=y; y=tmp; }while(false)

int main()
{
    int nx;
    srand(time(nullptr));

    do {
        printf("�v�f��:");
        scanf("%d", &nx);
    } while (nx <= 0);

    int* x = (int*)calloc(nx, sizeof(int));
    if (x == nullptr) {
        printf("calloc()���s");
        exit(1);
    }

    for (int i = 0; i < nx; i++) {
        x[i] = rand() % 100;
        //printf("x[%d] = %d\n", i, x[i]);
    }

    ReverseArray(x, nx);

    printf("\n�v�f�̕��т𔽓]���܂���\n");
    dumpArray(x, nx);

    free(x);
    return 0;
}

void ReverseArray(int array[], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
        printf("%d ", array[i]);
    printf("\n");
    for (int i = 0; i < arraySize / 2; i++)
    {
        printf("array[%d]��array[%d]���������܂��B\n", i, arraySize - 1 - i);
        int tmp = array[i];
        array[i] = array[arraySize - 1 - i];
        array[arraySize - 1 - i] = tmp;
        for (int j = 0; j < arraySize; j++)
            printf("%d ", array[j]);
        printf("\n");
    }
    printf("���]���I���܂����B\n");
}

void dumpArray(int array[], int arraySize)
{
    for (int i = 0; i < arraySize; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}