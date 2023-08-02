#include<stdio.h>//冒泡法运用函数
#define num 10
void min_to_max(int a[])
{
	int j, i, t;
	for (j = 0; j < num - 1; j++)
		for (i = j + 1; i < num; i++)
			if (a[j] > a[i])
			{t = a[j]; a[j] = a[i]; a[i] = t;}
}
int main()
{
	int a[num], i, j ;
	printf("请输入%d个整数：\n",num);
	for (i = 0; i < num; i++)
		scanf_s("%d",&a[i]);
	for (j = 0; j < num - 1; j++)
		min_to_max(a);
	printf("从小到大输出为：");
	for (i = 0; i < num; i++)
	{
		printf("%d，", a[i]);
	}
		return 0;
}