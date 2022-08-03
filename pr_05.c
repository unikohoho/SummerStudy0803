//조건문 연습 : 공원 입장료 계산 프로그램

#include<stdio.h>
#define PRICE 20000

int main(void) {
	int age;
	int pay;
	printf("나이 입력 : ");
	scanf("%d", &age);

	if (age < 8)
		pay = 0;
	else if (age >= 8 && age < 60) {
		pay = PRICE;
	}
	else
		pay = PRICE/2;
	printf("입장료 : %d\n", pay);

	return 0;

}