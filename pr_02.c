//조건문 연습 : 입력 받은 정수의 양수/음수 판단 프로그램

#include<stdio.h>

int main(void) {
	int input;

	printf("정수 : ");
	scanf("%d", &input);

	if (input > 0) {
		printf("양수\n");
	}
	else {
		printf("음수\n");
	}
	printf("입력된 값은 %d입니다.\n", input);

	return 0;

}