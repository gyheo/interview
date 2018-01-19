#include <stdio.h>

void main(void){
	int a = 3, b = 5;
	int temp = 0;

	printf("BEFORE : a = %d, b = %d \n", a, b);

	temp = a;
	a = b;
	b = temp;

	printf("AFTER : a = %d, b = %d \n", a, b);
}
