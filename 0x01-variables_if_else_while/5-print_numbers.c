#include <stdio.h>

/*
 * main returns numbers from 0 to 10
 */

int main(void)
{
	int num;
	
	for(num = 0; num <= 10; num++)
		printf('%d', num);

	printf('\n');

	return(0);
}
