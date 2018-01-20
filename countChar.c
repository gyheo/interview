#include <stdio.h>
#include <string.h>

#define LENGTH 100

void main(void){

  // aba, aabbaa를 입력했을 경우
  // 각각 a1b1a1, a2b2a2를 출력할 수 있도록

  char str[LENGTH];
  int i = 0;
  int count = 1;
  printf("count char \n");
  printf("please input the str : ");
  gets(str);

  // printf("%s \n", str);

  // (진짜 중요) 문자열의 종료 '\0'
  while(str[i] != '\0'){
    if(str[i] == str[i+1]){
      count++;
    }

    else if(str[i] != str[i+1]){
      printf("%c%d", str[i], count);
      count = 1;
    }

    i++;
  }

  printf("\n");
}
