#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, x, y, total;
	printf("Kaç Adet Sayıyı Toplama Yapmak İstiyorsunuz: ");
	scanf("%d", &a);
	total = 0;
	for (x = 1; x <= a; x++)
	{
		printf("%d. sayıyı girin: ", x);
		scanf("%d", &y);
		total = total + y;
	}
	printf("Girdiğiniz Sayıların Toplamı: %d", total);
	return 0;

}/*MUSTAFA YALINIZ*/

