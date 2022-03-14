#include <stdio.h>
int main()
{
	int num;
	int array[9] = { 0, };
	int answer[1000];
	scanf("%d", &num);
	for (int n = 0; n < num; n++)
	{
		int all = 0;
		for (int i = 0; i < 9; i++)
		{
			scanf("%d", &array[i]);
			all += array[i];
		}
		if (array[5] != 0)
		{
			array[8] += array[5];
			array[5] = 0;
		}
		int cnt = 0;
		for (int i = 8; i >= 0; i--)
		{
			for (int q = 0; q < array[i]; q++)
			{
				if (cnt>= 0)
				{
					answer[cnt] = i+1;
					cnt = -(cnt + 1);
				}
				else
				{
					answer[all + cnt] = i+1;
					cnt = -cnt;
				}
			}

		}
		for (int i = 0; i < all; i++)
			printf("%d ", answer[i]);
		printf("\n");
	}
	return 0;
}