#include <stdio.h>
int factor(int num)
{
	if (num > 1)
		return num * factor(num - 1);
	else return 1;
}
int main()
{
	int number;
	scanf("%d", &number);
	printf("%d", factor(number));
	return 0;
}