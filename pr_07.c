//����ڷκ��� ������ �Է� �޾Ƽ� Ȧ������ ¦������ ����ϴ� ���α׷�

#include<stdio.h>

int main(void) {
	int num;

	printf("������ �Է����ּ��� : ");
	scanf("%d", &num);

	if (num % 2 == 0)
		printf("¦���Դϴ�.\n");

	else
		printf("Ȧ���Դϴ�.\n");

	return 0;

}