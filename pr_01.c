//조건문 연습 : 입력 받은 정수의 양수 판단 프로그램

#include<stdio.h>

int main(void) {
	int num;

	printf("정수 : ");
	scanf("%d", &num);

	if (num > 0) {
		printf("양수입니다!\n");
	}

	printf("입력된 값은 %d입니다.\n",num);

	return 0;

}