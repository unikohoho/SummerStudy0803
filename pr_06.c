//���ǹ� ���� : ������ �Է� �޾� Pass/Fail �����ϴ� ���α׷�

#include<stdio.h>

int main(void) {
	int score;

	printf("������ �Է����ּ��� : ");
	scanf("%d", &score);

	if (score >= 0 && score <= 100) {
		if (score >= 70)
			printf("PASS, congratulations!\n");
		else
			printf("FAIL, you can do better!\n");
	}
	else
		printf("�߸��� ������ �Դϴ�.\n");

	return 0;
}