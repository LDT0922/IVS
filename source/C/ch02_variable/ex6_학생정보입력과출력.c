#include <stdio.h>

int main(void) {

	char name[10];
	char gender[5];
	int ����,����,����;

	printf("������ �Է��ϼ���(��/��)\t: ");
	scanf_s("%s", gender, sizeof(gender));
	printf("�̸��� �Է��ϼ���\t: ");
	scanf_s("%s", name, sizeof(name));
	printf("���� ���� ���� ������ �Է��ϼ���:\t");
	scanf_s("%d %d %d", &����, &����, &����);

	printf("---�л�����---\n");
	printf("�̸�  :%s\n", name);
	printf("����  :%s\n", gender);
	printf("����  :%d\n", ����);
	printf("����  :%d\n", ����);
	printf("����  :%d\n", ����);
	printf("�հ�  :%d\n", ����+����+����);
	printf("���  :%.2lf\n", (���� + ���� + ����)/3.0);



	return 0;
}