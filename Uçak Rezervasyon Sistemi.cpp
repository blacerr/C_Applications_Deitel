#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define m 5
#define n 5

int main(void) {

	int a, b, c, d;
	srand(time(NULL));
	int birinci[n] = { 0,0,0,0,0 };
	int ikinci[m] = { 0,0,0,0,0 };
	while (true) {

		printf("Lütfen \"Birinci Sınıf\" İçin 1'e Basınız : \n");
		printf("Lütfen \"Ekonomik Sınıf\" İçin 2'ye Basınız : \n");
		scanf_s("%d", &a);
		
		if (a == 1) {
		
			do {
			
				b = rand() % 5;
			
			}while (birinci[b] == 1);
			birinci[b] = 1;
			printf("\nBirinci Sınıf %d Numaralı Koltuğunuzu Aldınız\n\n", b + 1);	
		
		}
		else if (a == 2) {
			
			do {
			
				c = rand() % 5;
			
			} while (ikinci[c] == 1);
			ikinci[c] = 1;
			printf("\nEkonomik Sınıf %d Numaralı Koltuğunuzu Aldınız\n\n", c + 1);
		
		}
		else 
		printf("\nYanlış Tuşladınız\n\n");			
		
	}
}/*MUSTAFA YALINIZ*/