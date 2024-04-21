#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main(void) {

	int a, b, c, d;
	float e, f, g;



	printf("Birinci Noktanın X kordinatlarını Girin: ");
	scanf("%d", &a);
	printf("Birinci Noktanın Y kordinatlarını Girin: ");
	scanf("%d", &b);
	printf("İkinci Noktanın X Kordinatlarını Girin: ");
	scanf("%d", &c);
	printf("İkinci Noktanın Y Kordinatlarını Girin: ");
	scanf("%d", &d);
	e = pow(a - c, 2);
	f = pow(b - d, 2);
	g = sqrtf(e + f);
	printf("İki Nokta Arası Mesafe: %.2f", g);


}