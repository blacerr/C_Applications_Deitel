#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>



int main(void)

{
	char a = 10, b;
	int krup = 0, siz, x, y, t, f, g, z = 1, v = 2;


	
		srand((unsigned int)time(NULL));
		
		
		printf("\n21 Oyunu Başlamak için ENTER Basınız\n");
		scanf("%c", &a);
		
		if (a == 10) {
		başa:
			Sleep(1000);
			printf("\nSizin 1. Kart: %d\n", siz = 1 + rand() % 11);
			Sleep(1000);
			printf("Krupiye 1. Kart: %d\n", x = 1 + rand() % 11);
			g = krup + x;
			Sleep(1000);
			printf("Sizin 2. Kart: %d\n", y = 1 + rand() % 11);
			Sleep(1000);
			printf("Siz: %d\n", t = y + siz);
		start:
			printf("\nKart İstemek İçin 'h', Kalmak İçin 's' Basınız:  ");
			b = _getch();
			if (b == 'h') {
				v++;
				Sleep(1000);
				printf("\nSizin %d. Kart: %d\n", v, f = 1 + rand() % 11);
				t = t + f;
				Sleep(500);
				printf("Siz: %d\n", t);
				if (t > 21) {
					printf("\n***Kaybettiniz***\n");
					goto başa;
				}
				goto start;
			}
			if (b == 's') {
				for (g; g < 17; ) {

					z++;
					Sleep(1000);
					printf("\nKrupiye %d. Kart: %d\n", z, krup = 1 + rand() % 11);
					g = g + krup;
					printf("Krupiye:%d\n", g);



				}

				if (g > 21) {
					printf("\n***Kazandınız***\n");

				}
				if (g > t && g <= 21) {
					printf("\n***Kaybettiniz***\n");
				}
				if (g == t) {
					printf("\n***Berabere***\n");
				}
				if (t > g) {
					printf("\n***Kazandınız***\n");
				}
				goto başa;
			}





		}
		else
			return 0;

	
}