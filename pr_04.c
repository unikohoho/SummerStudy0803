//조건문 연습 : 성적을 입력 받아 학점을 결정하는 프로그램

#include<stdio.h>

int main(void) {
	int score;
	char grade;

	printf("성적 입력 : ");
	scanf("%d", &score);

	if (score >= 90)
		grade = 'A';
	else if (score >= 80)
		grade = 'B';
	else if (score >= 70)
		grade = 'C';
	else if (score >= 60)
		grade = 'D';
	else
		grade = 'F';
	printf("성적 %d에 대한 학점은 %c입니다.\n", score, grade);

	return 0;

}