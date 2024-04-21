,#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, x, toplam;
	printf("2'den Kaça Kadar Olan Sayının Toplamını Hesaplamak İstiyorsunuz: ");
	scanf("%d", &a);
	toplam = 0;
	printf("Sayılar: ");
	for (x = 2; x < a; x += 2) {
		printf("%d,", x);
		toplam = toplam + x;
	}
	printf("\nSayıların Toplamları: %d", toplam);
	return 0;

}/*MUSTAFA YALINIZ*/


