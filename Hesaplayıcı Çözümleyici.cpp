#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	float a, b, c, d,e,f,g;
	a = 0;
	b = 0;
	d = 0;
	e = 1;
	f = 0;
	g = 1000000;
	while (a != -1) {
		printf("Hesplamak İstediğiniz Sayıları Girin (Bitirmek İçin -1): ");
		scanf("%f", &a);
		if (a == -1) {
			printf("\nToplam: %.0f\n", b); 
			printf("Ortalama: %.2f\n", c);
			printf("Çarpım: %.0f\n", e);
			printf("Girdiğiniz En Büyük Sayı: %.0f\n", f);
			printf("Girdiğiniz En Küçük Sayı: %.0f\n", g);
			return 0;
		}
		d++;
		b = b + a;
		c = b / d;
		e = e * a;
		if (f < a) {
			f = a;
		}
		if (g > a) {
			g = a;
		}



	}
	


}/*MUSTAFA YALINIZ*/

