#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float BMI, weight, height;
	printf("BMI values\nUnderweight:\tless than 18.5kg\nNormal:\t\tbetween 18.5 and 24.9\nOverweight:\tbetween 25 and 29.9\nObese:\t\t30 or greater\n");
	printf("輸入體重kg:");
	scanf_s("%f", &weight);
	printf("輸入身高m:");
	scanf_s("%f", &height);
	BMI = weight / (height*height);
	printf("BMI=%9.6f\n", BMI);
	if (BMI < 18.5)
	{
		printf("Your BMI is Underweight");
	}
	if (BMI <= 24.9&&BMI >= 18.5)
	{
		printf("Your BMI is Normal");
	}
	if (BMI <= 29.9&&BMI >= 25)
	{
		printf("Your BMI is Overweight");
	}
	if (BMI>=30)
	{
		printf("Your BMI is Obese");
	}
	system("pause");
	return 0;
}