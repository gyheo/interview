#include <stdio.h>

void swap(int *x, int *y);

void main(void){
	int a = 3, b = 5;
	int *temp = NULL;

	printf("BEFORE : a = %d, b = %d \n", a, b);
	
	/*
	temp = &a;
	a = b;
	b = temp;
	*/

	swap(&a, &b);

	printf("AFTER : a = %d, b = %d \n", a, b);
}

void swap(int *x, int *y){
	/*
	아래를 실수로 포인터로 선언한 게 큰 문제였다
	int *temp = NULL;		
	*temp = *x;
	*x = *y;
	*y = *temp;
	*/
	
	// 일반 local variable로 선언
	int temp = 0;

	temp = *x;
	*x = *y;
	*y = temp;
}
