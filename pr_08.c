//사용자로부터 입력 받은 두 수의 합과 차를 구해서 출력(단, 결과값은 항상 양수가 출력되어야함)

#include<stdio.h>

int main(void) {
	int num1, num2, sum, sub;

	printf("두 정수를 입력해주세요 : ");
	scanf("%d%d", &num1, &num2);

	sum = num1 + num2;

	if (num1 > num2)
		sub = num1 - num2;
	else
		sub = num2 - num1;

	printf("두 정수의 합 : %d\n", sum);
	printf("두 정수의 차 : %d\n", sub);

	return 0;


}