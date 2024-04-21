#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>






int main()
{
	int a, b, c, d, e, f, g, h;
	printf("Kaç Harfli kelime İstiyorsunuz(Max 7 Değer): ");
	scanf("%d", &a);
	for (b = 97; b < 123; b++) {
		for (c = 97; c < 123; c++) {
			for (d = 97; d < 123; d++) {
				for (e = 97; e < 123; e++) {
					for (f = 97; f < 123; f++) {
						for (g = 97; g < 123; g++) {
							for (h = 97; h < 123; h++) {

								switch (a) {
								case 1: printf("%c", b);
									break;
								case 2: printf("%c%c\n", b, c);
									break;
								case 3: printf("%c%c%c\n", b, c, d);
									break;
								case 4: printf("%c%c%c%c\n", b, c, d, e);
									break;
								case 5: printf("%c%c%c%c%c\n", b, c, d, e, f);
									break;
								case 6: printf("%c%c%c%c%c%c\n", b, c, d, e, f, g);
									break;
								case 7: printf("%c%c%c%c%c%c%c\n", b, c, d, e, f, g, h);
								}
							}
						}
					}
				}
			}
		}

	}

}/*MUSTAFA YALINIZ*/



