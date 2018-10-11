#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c, d, e, f;
	printf("一整天的總里程數(km)：");
	scanf_s("%f", &a);
	printf("汽油1公升多少錢：");
	scanf_s("%f", &b);
	printf("汽油1公升能行駛多少公里：");
	scanf_s("%f", &c);
	printf("一天的停車費 ：");
	scanf_s("%f", &d);
	printf("一天的通行費(過路費)：");
	scanf_s("%f", &e);
	printf("一天開車的花費：%9.6f元", (a / c)*b + d + e);
	system("pause");
	return 0;
}