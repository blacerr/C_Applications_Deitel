#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{


	int x = 0, y = 1, z;
	
	scanf("%d", &z);

	printf("%d %d ", x, y); 

	for (float d = 2; d <= z; d++)
	{
		x = x + y;
		y = y + x;
		printf("%d %d ",x, y );

	}



}/*MUSTAFA YALINIZ*/