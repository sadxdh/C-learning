#include<stdio.h>//求3*3矩阵对角线元素的和
int main()
{
	int a[3][3], i, sum;
	printf("请输入%d个整数，生成一个3*3的矩阵。\n", i = 9);
	for (i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
		scanf_s("%d", &a[i][j]);
	for (i = -1; i++ < 2; printf("\n"))
		for (int j = 0; j < 3; j++)
			printf("%2d", a[i][j]);
	sum = a[0][0] + a[1][1] + a[2][2] + a[2][0] + a[0][2];
	printf("对角线元素的和为%d\n", sum);
	return 0;
}