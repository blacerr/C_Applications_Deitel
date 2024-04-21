#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{

	int a, b, hipotenüs;
	for (a = 1; a < 500; a++) {




		for (b = a; b < 500; b++) {
			hipotenüs = sqrt(a * a + b * b);
			
			if (hipotenüs <= 100000 && a * a + b * b == hipotenüs*hipotenüs) {
				printf("%d,%d,%d\n", a, b, hipotenüs);
				return 0;
			}
			



		}





	}

}/*MUSTAFA YALINIZ*/

