#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main()
{
	unsigned int  b, c, d, player, g, h, computer, k;
	char x;
	srand(time(NULL));
	puts("\t\tZar Oyununa Hoş Geldiniz");
	puts("1. Kural: Bir Çift Zar Atıyorsunuz  ");
	puts("2. Kural: Attığınız Makinenin Atığı Zardan Büyükse Kazanıyorsunuz");
	puts("3. Kural: Attığınız Makinenin Atığı Zardan Küçükse Kaybediyorsunuz");
	puts("4. Kural: Kazandığınızda Yatırdığınız Bakiyenin X2' Alıyorsunuz");
	puts("5. Kural: Kaybettiğnizde Yatırdığınız Bakiyenin Hepsini Veriyorsunuz ");
	printf("\t  Başlamak İçin ENTER Tuşuna Basınız");
	scanf("%c", &x);
	if (x == 10) {
		printf("\nYatırmak İstediğinzi Miktarı Girin: ");
		scanf("%d", &k);
	start:
		printf("\nOynamak istediğiniz Miktarı Girin: ");
		scanf("%d", &b);

		if (b > k) {
			printf("\n\n\t\t**Bakiye Yetersiz**\n");
			printf("Lütfen Başka Değer Giriniz\n");
			goto start;
		}
		else {
			k = k - b;
			Sleep(2000);
			c = 1 + rand() % 6;
			d = 1 + rand() % 6;
			g = 1 + rand() % 6;
			h = 1 + rand() % 6;

			printf("1. Zarınızın Değeri: %d\n", c);
			Sleep(2000);
			printf("2. Zarınızın Değeri: %d\n", d);
			Sleep(2000);
			player = c + d;
			printf("Kasanın 1. Zarının Değeri: %d\n", g);
			Sleep(2000);
			printf("Kasanın 2. Zarının Değeri: %d\n", h);
			Sleep(2000);
			computer = g + h;
			
			if (player > computer) {
				k = k + b * 2;
				printf("%d$ Kazandınız\n", b * 2);
				printf("Bakiyeniz: %d$\n\n", k);
				goto start;
			}
			if (computer > player) {
				printf("Kaybettiniz\n");
				printf("Bakiyeniz: %d$\n\n", k);
				goto start;
			}
			if (computer == player) {
				k = k + b;
				printf("Kazanan Olmadı\n");
				printf("Bakiyeniz: %d$\n\n", k);
				goto start;
			}
		}


	}
	else
		return 0;
}/*MUSTAFA YALINIZ*/