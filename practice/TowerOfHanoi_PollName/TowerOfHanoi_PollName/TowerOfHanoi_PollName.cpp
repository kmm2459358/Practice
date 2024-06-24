//=========================================================
//	ハノイの塔　解法
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>   // printf(),scanf()

typedef enum {
	A = 1,
	B = 2,
	C = 3,
} POS;

// 関数プロトタイプ
void move(int no, POS from, POS to);

int main()
{
	while (true) {
		int n;
		do {
			printf("ハノイの塔\a円盤の数:");
			scanf("%d", &n);
		} while (n < 1);

		move(n, A, C);
	}
	return 0;
}

void move(int no, POS from, POS to)
{
	POS tmp = (POS)((A + B + C) - from - to);
	if (no > 1) {
		move(no - 1, from, tmp);
	}

	//関数を作ったほうがいいんだってさ

	//printf("円盤[%d]を ", no);

	//if (from == A)
		//printf("A軸から ");
	//else if (from == B)
		//printf("B軸から ");
	//else if (from == C)
		//printf("C軸から ");

	//if (to == A)
		//printf("A軸へ移動\n");
	//else if (to == B)
		//printf("B軸へ移動\n");
	//else if (to == C)
		//printf("C軸へ移動\n");

	if (no > 1) {
		move(no - 1, tmp, to);
	}
}
	//printf("円盤[%d]を %d軸から %d軸へ移動\n", no, from, to);
const char* getPollName(POS poll)
{

}