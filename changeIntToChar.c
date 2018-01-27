#include <stdio.h>

#define LENGTH 10

void main(void){
	int num;
	int i = 0;
	char row[LENGTH];

	printf("숫자를 문자로 변환(A:1, Z:25, AA:26 ..) \n");
	printf("숫자를 입력하세요 : ");

	scanf("%d", &num);

	while(1){
		row[i] = num % 25 + 'A' - 1;
		if(num / 25 == 0){
			row[i+1] = '\0'; 
			break;
		}
		num = num / 25;
		i++;
	}

	printf("%s \n", row);

	
}
