//���ǹ� ���� : ���� ����� ��� ���α׷�

#include<stdio.h>
#define PRICE 20000

int main(void) {
	int age;
	int pay;
	printf("���� �Է� : ");
	scanf("%d", &age);

	if (age < 8)
		pay = 0;
	else if (age >= 8 && age < 60) {
		pay = PRICE;
	}
	else
		pay = PRICE/2;
	printf("����� : %d\n", pay);

	return 0;

}