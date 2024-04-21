#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main()
{
	float a, b; 
	a = 0;
	while (a != -1) {
		printf("Satışları Girin (Bitirmek İçin -1): ");
		scanf("%f", &a);
		if (a == -1) {
			return 0;
		}
		b = a / 100 * 9 + 200;
		printf("Maaş: %.2f$\n",b);
		
	

	}

}
/*MUSTAFA YALINIZ*/