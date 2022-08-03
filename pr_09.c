//선불카드 사용을 보여주는 프로그램

/*조건 : 초기 잔액은 10만원
사용자에게 사용액을 입력받기
사용가능한지 검사하기
사용가능하다면 잔액에서 사용액을 차감한 후 잔액 출력
만약 사용액이 잔액보다 크다면 적절한 메시지를 출력
*/
#include<stdio.h>

int main(void) {
	int money = 100000;
	int price;

	printf("물건의 금액을 입력해주세요 : ");
	scanf("%d", &price);

	if (price <= money) {
		money -= price;
		printf("잔액 : %d\n", money);

	}
	else
		printf("잔액이 부족합니다!\n");

	return 0;

}