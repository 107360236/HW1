#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1, num2,a;
	printf("��J�Ĥ@�Ӽ�:");
	scanf_s("%d", &num1);
	printf("��J�ĤG�Ӽ�:");
	scanf_s("%d", &num2);
	a = num1%num2;
	if (a == 0)
	{
		printf("%d�O%d������", num1, num2);
	}
	else
	{
		printf("%d���O%d������", num1, num2);
	}
	system("pause");
	return 0;
}