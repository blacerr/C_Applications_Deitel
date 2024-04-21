
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int N, x, total;
	printf("N'yi Girin: ");
	scanf("%d", &N);
	total = 1;
	printf("Sayılar: ");
	for (x = 1; x < N; x += 2) {
		
		printf("%d,",x);
		total = total * x;
		

	}
	printf("\nSayıların Çarpımı: %d", total);



}/*MUSTAFA YALINIZ*/

