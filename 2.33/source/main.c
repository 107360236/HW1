#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c, d, e, f;
	printf("�@��Ѫ��`���{��(km)�G");
	scanf_s("%f", &a);
	printf("�T�o1���ɦh�ֿ��G");
	scanf_s("%f", &b);
	printf("�T�o1���ɯ��p�h�֤����G");
	scanf_s("%f", &c);
	printf("�@�Ѫ������O �G");
	scanf_s("%f", &d);
	printf("�@�Ѫ��q��O(�L���O)�G");
	scanf_s("%f", &e);
	printf("�@�Ѷ}������O�G%9.6f��", (a / c)*b + d + e);
	system("pause");
	return 0;
}