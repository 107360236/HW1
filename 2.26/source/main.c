#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1, num2,a;
	printf("輸入第一個數:");
	scanf_s("%d", &num1);
	printf("輸入第二個數:");
	scanf_s("%d", &num2);
	a = num1%num2;
	if (a == 0)
	{
		printf("%d是%d的倍數", num1, num2);
	}
	else
	{
		printf("%d不是%d的倍數", num1, num2);
	}
	system("pause");
	return 0;
}