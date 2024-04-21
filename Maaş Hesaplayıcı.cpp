#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a;
	float b, c;
	a = 0;
	while (a != -1) {
		printf("Çalışanın Saatini Girin (Bitirmek İçin -1): ");
		scanf("%d", &a);
		if (a == -1) {
			return 0;
		}
		printf("Çalışanın Saat Ücretini Girin: ");
		scanf("%f", &b);
		if (a <= 40) {
			c = a * b;
			printf("Maaş: %.2f $", c);
		}
		if (a > 40) {
			c = (a - 40) * 1.5 * b + 40 * b;
			printf("Maaş: %.2f $", c);
		}
	}


}/*MUSTAFA YALINIZ*/
