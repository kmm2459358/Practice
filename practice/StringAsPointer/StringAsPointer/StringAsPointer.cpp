//=========================================================
//	ポインターによる文字列
//=========================================================
#include <stdio.h> // printf()

int main()
{
	// C++は型が厳格なので const をつけないとNG
	const char* pt = "12345";
	printf("ポインターptは\"%s\"を指しています\n", pt);
	//
	// ポインターは代入も可
	//
	pt = "abcde";
	printf("ポインターptは\"%s\"を指しています\n", pt);
	return 0;
}
