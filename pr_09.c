//����ī�� ����� �����ִ� ���α׷�

/*���� : �ʱ� �ܾ��� 10����
����ڿ��� ������ �Է¹ޱ�
��밡������ �˻��ϱ�
��밡���ϴٸ� �ܾ׿��� ������ ������ �� �ܾ� ���
���� ������ �ܾ׺��� ũ�ٸ� ������ �޽����� ���
*/
#include<stdio.h>

int main(void) {
	int money = 100000;
	int price;

	printf("������ �ݾ��� �Է����ּ��� : ");
	scanf("%d", &price);

	if (price <= money) {
		money -= price;
		printf("�ܾ� : %d\n", money);

	}
	else
		printf("�ܾ��� �����մϴ�!\n");

	return 0;

}