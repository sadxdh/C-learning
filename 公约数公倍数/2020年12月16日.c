#include<stdio.h>

int min(int m, int n)
{
	if (m >= n) return n;
	else return m;
}

int gys(int m, int n)//���Լ��
{
	int min(int m, int n);
	int i;
	for (i = min(m, n); i >0; i--)
		if (m % i == 0 && n % i == 0)return i;
}

int gbs(int m, int n)//��С������*���Լ��=m*n
{
	int i;
	int gys(int m, int n);
	i = m * n / gys(m, n);
	return (i);
}

int main()
{
	int m, n, c;
	printf("��������������0������\n");
	scanf_s("%d%d",&m,&n);
	if (m <= 0 || n <= 0)printf("�������\n");
	printf("���Լ��Ϊ%d",c=gys(m,n));
	printf("��С������Ϊ%d",c=gbs(m,n));
	return 0;
}
