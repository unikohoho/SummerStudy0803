//���ǹ� ���� :  �Է� ���� �� ������ ������ ����� ����ϴ� ���α׷�(��, �и�� 0���� ���� �� ����)

#include<stdio.h>

int main(void) {
	//���� ���� �� �ʱ�ȭ : �Է� �޴� �� ����, ���
	int num1, num2;
	double result;

	//�Է� �ޱ�
	printf("�� ������ �Է��Ͻÿ� : ");
	scanf("%d%d",&num1,&num2);

	if (num2 == 0) {
		printf("0���� ���� ���� ����..\n");
	}
	else {
		//������
		result = (double)num1 / num2;

		//���
		printf("������ ����� %.2lf�Դϴ�.\n", result);
	}

	return 0;


}