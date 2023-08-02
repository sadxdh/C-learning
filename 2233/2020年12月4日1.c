#include<stdio.h>
#define num 11
int main()
{
	int a[num], i, j, t;
	printf("请输入%d个整数\n", num - 1);
	for (i = 0; i < num - 1; i++)
		scanf_s("%d", &a[i]);
	for (i = 0; i < num - 1; i++)
	{
		for (j = i + 1; j < num - 1; j++)
		{
			if (a[i] < a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
		printf("%3d", a[i]);
	}
	int m, n;
	printf("写一个整数：\n");
	scanf_s("%d", &m);
	for (i = 0; i < num-1; i++)
		if (a[i] > m) continue;
		else break;
	for (n = i; n < num; n++)
	{
		t = a[n];
		a[n] = m;
		m = t;
	}
	for (i = 0; i < num; printf("%d, ", a[i++]));
	printf("\b\b.");
	return 0;
}