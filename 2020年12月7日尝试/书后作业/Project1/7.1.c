#include<stdio.h>
int main()
{
	int m, n, i, j;
	int greattest_common_divisor(m,n);//最大公约数
	int minimize_minimum(m,n);//最小公倍数
	printf("请输入两个整数%d %d\n",m,n);
	scanf_s("%d%d",&m,&n);
	i= greattest_common_divisor(m, n);
	j= minimize_minimum(m, n);
	printf("m,n的最大公约数为%d，m,n的最小公倍数为%d",i,j);

	int greattest_common_divisor(int x)
{
	for (x = max(m, n); 1; x++)
		if (x % m == 0 && x % n == 0)break;
	return (x);
}

	int minimize_minimum(int y)
{
	for(x=min(m,n);1;y--)
		if (y % m == 0 && y % n == 0)break;
	return (y);
}

	int max(m, n)
{
	int z;
	if (m >= n)
		z = m;
	else z = n;
	return (z);
}

	int min(m, n)
{
	int z;
	if (m >= n)
		z = n;
	else z = m;
	return (z);
}
	return 0;
}