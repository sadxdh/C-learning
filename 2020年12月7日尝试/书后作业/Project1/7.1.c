#include<stdio.h>
int main()
{
	int m, n, i, j;
	int greattest_common_divisor(m,n);//���Լ��
	int minimize_minimum(m,n);//��С������
	printf("��������������%d %d\n",m,n);
	scanf_s("%d%d",&m,&n);
	i= greattest_common_divisor(m, n);
	j= minimize_minimum(m, n);
	printf("m,n�����Լ��Ϊ%d��m,n����С������Ϊ%d",i,j);

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