#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float a, b, c;
	a = 0;
	while (a != -1) {
		printf("Vize Notunu Giriniz (Bitirmek İçin -1): ");
		scanf("%f", &a);
		if (a == -1) {
			return 0;
		}
		printf("Final Notunu Giriniz: ");
		scanf("%f", &b);
		c = a * 0.4 + b * 0.6;

		if (b < 50) {
			printf("\nKaldınız\n");
			return 0;
		}
		if (c < 50) {
			printf("\nKaldınız\n");
			printf("Notunuz: %.2f\n\n", c);
		}
		else {
			printf("\nGeçtiniz\n");
			printf("Notunuz: %.2f\n\n", c);
		}

	}

}/*MUSTAFA YALINIZ*/
