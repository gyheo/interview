#include <stdio.h>

void printFlip(int input);

void main(void){
	int input = 0;

	printf("printFilp integer \n");
	printf("input the number : ");
	
	scanf("%d", &input);
	printFlip(input);

}

void printFlip(int input){
	int remain = 0;

	/*

	while(1){
		remain = input % 10;

		printf("%d", remain);

		if(input / 10 == 0){
			printf("\n");
			break;
		}

		input = input / 10;
	}

	*/

	// Recursive로 구현해볼것
	remain = input % 10;
	printf("%d", remain);

	if(input / 10 == 0){
		printf("\n");
		return ;
	}
	printFlip(input / 10);
}
