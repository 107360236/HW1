#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num, a;
	printf("��J�@�ӼơG");
	scanf_s("%d", &num);
	a = num % 2;
	if (a == 0)
	{
		printf("���Ƭ�����\n");
	}
	else
	{
		printf("���Ƭ��_��\n");
	}
	system("pause");
	return 0;
}