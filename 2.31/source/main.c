#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c;
	printf("number\tsquare\tcube\n");
	for (a = 0; a <= 10; a++)
	{
		b = a *a;
		c = a *a*a;
		printf("%d\t%d\t%d\n", a, b, c);
	}
	system("pause");
	return 0;
}