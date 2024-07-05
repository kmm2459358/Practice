//==========================================================
//	‚Q•ª’Tõ 
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()
#include <stdlib.h> // srand(),rand()
#include <time.h>
// ŠÖ”ƒvƒƒgƒ^ƒCƒv
int BinarySearch(int data[], int dataSize, int key);
int getRandRange(int min, int max);

#define SEARCH_FAIL (-1)

int main()
{
	srand(time(nullptr));
	int dataSize;

	while (true) {
		printf("—v‘f”:");
		do {
			scanf("%d", &dataSize);
		} while (dataSize <= 0);

		int* data = (int*)calloc(dataSize, sizeof(int));
		if (data == nullptr) {
			printf("calloc()¸”s");
			exit(1);
		}
		const int DATA_RANGE = 100;
		int tmp = 0;
		for (int i = 0; i < dataSize; i++) {
			tmp += getRandRange(1, DATA_RANGE / dataSize);
			data[i] = tmp;
			printf("data[%d]:%d\n", i, data[i]);
		}
		int key = getRandRange(1, tmp);
		printf("’T‚·’l:%d\n", key);

		int idx = BinarySearch(data, dataSize, key);
		if (idx == SEARCH_FAIL) {
			puts("’Tõ‚É¸”s‚µ‚Ü‚µ‚½");
		}
		else {
			printf("%d ‚Í data[%d] ‚É‚ ‚è‚Ü‚·\n", key, idx);
		}
		free(data);
	}
	return 0;
}

int BinarySearch(int data[], int dataSize, int key)
{
	int i = 0;
	while (i < dataSize)
	{
		if (data[i] == key)
			return i;
		i++;
	}
	return -1;
}

int getRandRange(int min, int max)
{
	int wid = max - min + 1;
	return min + rand() % wid;
}