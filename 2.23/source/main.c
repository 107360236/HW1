#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n1, n2, n3, max, min;
	scanf_s("%d%d%d", &n1, &n2, &n3);
	max = (n1 > n2) ? n1 : n2;
	max = (max > n3) ? max : n3;
	min = (n1 < n2) ? n1 : n2;
	min = (min < n3) ? min : n3;
	printf("�T�̳̤j�Ʀr��%d\n", max);
	printf("�T�̳̤p�Ʀr��%d\n", min);
	system("pause");
	return 0;
}