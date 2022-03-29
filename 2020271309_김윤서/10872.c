#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fac(int n)
{
	int mul = 1;
	if (n > 1) {
		for (int i = 1; i <= n; i++)
			mul *= i;
		return mul;
	}
	else 
		return 1;
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", fac(n));
	return 0;
}
