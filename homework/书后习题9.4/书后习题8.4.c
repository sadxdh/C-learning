#include<stdio.h>
# define num 10
int main()
{
	int a[num], m, b[num];
	int move();
	printf("������n������\n");
	for (int i = 0; i < num; i++)
		scanf_s("%d", &a[i]);
	printf("�������ƶ�m������\n");
	scanf_s("%d", &m);
	for (int i = 0, j = num - 2 * m; i < m; i++,j++)
		b[i] = a[j];
	move(a,m);
	for (int i = 0, j = num - m; i < m; i++,j++)
		a[j] = b[i];
	for (int i = 0; i < num; i++)
		printf("%2d", a[i]);
}
int move(a,m)
{
	int* p = a, temp = *(p + m);
	for (int i=0;i<m;i++)
	{
		*(p+m+i) = *(p+i); *(p+i) = *(p+num-m+i); *(p+num-m+i) = *(p+num-m-1);
	}
	*(p+num-m-1) = temp;
}