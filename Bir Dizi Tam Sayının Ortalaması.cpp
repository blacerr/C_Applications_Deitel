#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int a, b, d;
	float total, c;
	a = 0;
	total = 0;
	d = 0;
	while (a != 9999) 
	{
		printf("Ortalamasını Alınmasını İstediğiniz Sayıları Girin (Bitirmek İçin 9999 Tuşalıyın): ");
		scanf("%d", &b);
		if (b == 9999) {
			 c = total / d;
			printf("Ortalama: %.2f \n", c);

		}
		d++;
		total = total + b;
	}

}/*MUSTAFA YALINIZ*/
