//����ڷκ��� �Է� ���� �� ���� �հ� ���� ���ؼ� ���(��, ������� �׻� ����� ��µǾ����)

#include<stdio.h>

int main(void) {
	int num1, num2, sum, sub;

	printf("�� ������ �Է����ּ��� : ");
	scanf("%d%d", &num1, &num2);

	sum = num1 + num2;

	if (num1 > num2)
		sub = num1 - num2;
	else
		sub = num2 - num1;

	printf("�� ������ �� : %d\n", sum);
	printf("�� ������ �� : %d\n", sub);

	return 0;


}