#include<stdio.h>

int min(int m, int n)
{
	if (m >= n) return n;
	else return m;
}

int gys(int m, int n)//最大公约数
{
	int min(int m, int n);
	int i;
	for (i = min(m, n); i >0; i--)
		if (m % i == 0 && n % i == 0)return i;
}

int gbs(int m, int n)//最小公倍数*最大公约数=m*n
{
	int i;
	int gys(int m, int n);
	i = m * n / gys(m, n);
	return (i);
}

int main()
{
	int m, n, c;
	printf("请输入两个大于0的整数\n");
	scanf_s("%d%d",&m,&n);
	if (m <= 0 || n <= 0)printf("输入错误\n");
	printf("最大公约数为%d",c=gys(m,n));
	printf("最小公倍数为%d",c=gbs(m,n));
	return 0;
}
