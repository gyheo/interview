#include <stdio.h>
#include <string.h>

int len(char* str);
int check(char* str, int length);

/*
  문제
  문장을 거꾸로 읽어도 원래의 문장과 같은 경우
  이를 palindrome(펠린드롬) 이라고 한다.

  문장을 입력받는경우 회문인 지 판별하는 알고리즘 작성
  예제) ABA = 회문, I am ma I = 회문
*/

void main(void){
  char str[100];
  /*
    알고리즘은 맞췄다. 그렇지만, 문자열 포인터에 대해서 보충해야할 필요가 있음
  */
  // char *str = NULL;
  int length = 0, i = 0;
  int result = 0;

  printf("회문 출력기 \n");
  printf("문장을 입력하세요 : ");
  gets(str);
  puts(str);
  length = len(str);

  result = check(str, length);

  if(result){
    printf("회문입니다 \n");
  }

  else{
    printf("회문이 아닙니다 \n");
  }
}

int len(char* str){
  int i = 0;
  int count = 0;

  while(str[i] != '\0'){
    count++;
    i++;
  }

  return count;
}

int check(char* str, int length){
  int i=0;

  for(i = 0; i < length / 2; i++){
    if(str[i] != str[length-i-1]){
      return 0;
    }
  }

  return 1;
}
