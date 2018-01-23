#include <stdio.h>

void printFlip(int input);


void main(void){
	/*
		문제
		숫자를 입력했을 경우, 거꾸로 출력하도로 프로그램 작성
		예) 356을 입력한 경우 653, 1424를 입력한 경우 4241
	*/

	int input = 0;

	printf("printFilp integer \n");
	printf("input the number : ");
	
	scanf("%d", &input);
	printFlip(input);

}

void printFlip(int input){
	int remain = 0;

	/*
		문제 주어졌을 때 내가 해결한 방식
		몫과 나머지의 특징을 이용함
	*/

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

	/* 
		Q1) 위의 방법은 Recursive인가요 아닌가요?
		A1) 비슷해보이지만 다르.  재귀함수의 호출 횟수가 많아지는 것 != 지역변수에 큰 숫자 입력하는 것
		Q2) 그럼 새로운 질문, Recursive로 구현해볼까요?
	*/

	// Recursive
	remain = input % 10;
	printf("%d", remain);

	if(input / 10 == 0){
		printf("\n");
		return ;
	}

	printFlip(input / 10);
}
