//사용자로부터 정수를 입력 받아서 홀수인지 짝수인지 출력하는 프로그램

#include<stdio.h>

int main(void) {
	int num;

	printf("정수를 입력해주세요 : ");
	scanf("%d", &num);

	if (num % 2 == 0)
		printf("짝수입니다.\n");

	else
		printf("홀수입니다.\n");

	return 0;

}