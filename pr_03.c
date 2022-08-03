//조건문 연습 :  입력 받은 두 정수의 나눗셈 결과를 출력하는 프로그램(단, 분모는 0으로 나눌 수 없다)

#include<stdio.h>

int main(void) {
	//변수 선언 및 초기화 : 입력 받는 두 정수, 결과
	int num1, num2;
	double result;

	//입력 받기
	printf("두 정수를 입력하시오 : ");
	scanf("%d%d",&num1,&num2);

	if (num2 == 0) {
		printf("0으로 나눌 수는 없엉..\n");
	}
	else {
		//나누기
		result = (double)num1 / num2;

		//출력
		printf("나눗셈 결과는 %.2lf입니다.\n", result);
	}

	return 0;


}