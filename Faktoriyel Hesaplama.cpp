#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	 int a,x,total;
	puts("1'den N'ye Kadar Olan Sayıların Faktöriyellerini Bulma");
	printf("N'yi Giriniz: ");
	scanf("%d", &a);
	total = 1;
	for (x = 1; x <= a; x++) {
		total = total * x;
		
		printf("%d!= %d\n", x,total);
		
	}
	

}/*MUSTAFA YALINIZ*/



