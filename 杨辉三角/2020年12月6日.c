#include<stdio.h>//输出十行杨辉三角
#define num 11
int main()
{
	int i, j, a[num][num + 1] = { {1},{1,1} };
	for (i = 0; i < num - 1; printf("\n"), i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
		for (j = 0; j <= i; j++)
		{
			a[i + 1][j + 1] = a[i][j] + a[i][j + 1];
			printf("%5d", a[i][j]);
		}
	}	
	return 0;
}