#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int a, b, x, y;
	printf("Kaç Adet Sayı Girmek İstiyorsunuz: ");
	scanf("%d", &a);
	printf("1. Sayıyı Giriniz: ");
	scanf("%d", &b);
	
	for (x = 2; x <= a; ++x)
	{
		printf("%d. Sayıyı Giriniz:  ",x);
		scanf("%d", &y);
		if (y < b) {
			b = y;
		}
	}
	printf("Girdiğiniz En Küçük Sayı: %d", b);





}/*MUSTAFA YALINIZ*/

