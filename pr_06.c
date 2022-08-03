//조건문 연습 : 성적을 입력 받아 Pass/Fail 결정하는 프로그램

#include<stdio.h>

int main(void) {
	int score;

	printf("성적을 입력해주세요 : ");
	scanf("%d", &score);

	if (score >= 0 && score <= 100) {
		if (score >= 70)
			printf("PASS, congratulations!\n");
		else
			printf("FAIL, you can do better!\n");
	}
	else
		printf("잘못된 데이터 입니다.\n");

	return 0;
}