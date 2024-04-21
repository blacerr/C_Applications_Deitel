#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float a, b, c, d;
	a = 0;
	while (a != -1) {
		printf("Ana Parayı Girin (Bitirmek İçin -1): ");
		scanf("%f", &a);
		if (a == -1) {
			return 0;
		}
		printf("Faiz Oranını Girin: ");
		scanf("%f", &b);
		printf("Kredi Dönemini Girin (Gün): ");
		scanf("%f", &c);
		d = a * b * c / 365;
		printf("Faiz Miktarı: %.2f $\n", d);
	}


}/*MUSTAFA YALINIZ*/
