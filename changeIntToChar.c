#include <stdio.h>

#define LENGTH 10

	/*
		문제)
		excel의 column처럼 문자를 숫자로 변경해주는 프로그램 작성
		(생각보다 어려웠던 문제)
	*/

void main(void){
	int num;
	int i = 0;
	char row[LENGTH];

	printf("숫자를 문자로 변환(A:1, Z:25, AA:26 ..) \n");
	printf("숫자를 입력하세요 : ");

	scanf("%d", &num);

	while(1){
		row[i] = (num % 26) + 'A' - 1;
		if(num / 26 == 0){
			row[i+1] = '\0'; 
			break;
		}
		num = num / 26;
		i++;
	}

	printf("%s \n", row);

	
}
