#include<stdio.h>
int prime(int m)
{
	int z = 0;
	for (int i = 2; i < m; i++)
		if (m % i == 0)
		{
			z = 1;
			break;
		}
		else z = 0;
	return (z);
}
int main()
{
	int z,m;
	printf("������һ������\n");
	scanf_s("%d", &m);
	z = prime(m);
	if (z == 1)
		printf("��������һ������\n");
	else
		printf("������һ������\n");
	return 0;
}
