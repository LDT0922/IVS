#include <stdio.h>

int main(void) {

	char name[10];
	char gender[5];
	int 국어,영어,수학;

	printf("성별을 입력하세요(남/여)\t: ");
	scanf_s("%s", gender, sizeof(gender));
	printf("이름을 입력하세요\t: ");
	scanf_s("%s", name, sizeof(name));
	printf("국어 영어 수학 점수를 입력하세요:\t");
	scanf_s("%d %d %d", &국어, &영어, &수학);

	printf("---학생정보---\n");
	printf("이름  :%s\n", name);
	printf("성별  :%s\n", gender);
	printf("국어  :%d\n", 국어);
	printf("영어  :%d\n", 영어);
	printf("수학  :%d\n", 수학);
	printf("합계  :%d\n", 국어+영어+수학);
	printf("평균  :%.2lf\n", (국어 + 영어 + 수학)/3.0);



	return 0;
}