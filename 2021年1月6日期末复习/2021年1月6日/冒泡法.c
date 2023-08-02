#include<stdio.h>//起泡法从小到大排序
int main()
{
	int a[10], t, i , j;
	for (i=0; i < 10; i++)
		scanf_s("%d", &a[i]);
	for(int m=0;m<10;m++)
		for(i=0,j=i+1;i<10&&j<10;i++,j++)
			if(a[i]>a[j])
			{
				t = a[i]; a[i] = a[j]; a[j] = t;
			}
	for (i = 0; i < 10; i++)
		printf("%d", a[i]);
	return 0;
}