//дһ��������һ��3*3�����;���ת��
#include<stdio.h>
int main()
{
	int a[3][3];//00 01 02 10 11 12 02 12 22
	int trans(a);
	printf("������Ÿ���������һ��3*3�ľ���\n");
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			scanf_s("%d", &a[i][j]);
	int* p = a;
	trans(a);
	for (int i = 0; i < 9; i++,p++)
	{
		printf("%2d", *p);
		if ((i + 1) % 3 == 0)
			printf("\n");
	}
}
int trans(int(*a)[3])
{
	int t;
	for(int i=0;i<3;i++)
		for(int j=i+1;j<3;i++)
		{
			t = a[i][j]; a[i][j] = a[j][i]; a[j][i] = t;
		}
}