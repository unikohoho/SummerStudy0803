//���ǹ� ���� : �Է� ���� ������ ���/���� �Ǵ� ���α׷�

#include<stdio.h>

int main(void) {
	int input;

	printf("���� : ");
	scanf("%d", &input);

	if (input > 0) {
		printf("���\n");
	}
	else {
		printf("����\n");
	}
	printf("�Էµ� ���� %d�Դϴ�.\n", input);

	return 0;

}