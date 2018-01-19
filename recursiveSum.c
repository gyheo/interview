#include <stdio.h>

int sum(int n);

void main(void){
	// 맨 처음 몸풀기 문제
	// 함수 만들기(인자값 n까지의 합, 언어 자유)
	int input = 0;
	int total = 0;

	printf("1부터 n까지의 총합 \n");
	printf("원하는 숫자 n을 입력하세요 : ");
	scanf("%d", &input);
	total = sum(input);

	printf("1부터 %d까지의 총합은 %d입니다 \n", input, total);

	return ;
}

int sum(int n){
	int total = 0;
	for(int i = 1; i <= n; i++){
		total += i;
	}

	return total;
}
