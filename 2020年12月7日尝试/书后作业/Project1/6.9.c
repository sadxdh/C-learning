#include<stdio.h>
#define num 15
int main()
{
	int a[num], i, j, t;
	printf("请输入%d个整数\n",num);
	for(i=0;i<num;i++)
		scanf_s("%d",&a[i]);
	for (i = 0; i < num; i++)
	{for (j = i+1; j < num; j++)
		{if (a[i] < a[j])
			{t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
		printf("%4d", a[i]);
		if (i == 14)
			printf("\n");
	}
	int m=0,n=num,x;
	printf("请输入一个整数，使得a[0] >= x && x >= a[num - 1]。\n");
	scanf_s("%d",&x);
	for (j = m + n; x != a[j-1];j=(m+n)/2)
	{
		if (x >= a[j / 2]) n = (m + n)/2;
		else m = (m + n) / 2 + 1;
	}
	if (x == a[j-1])printf("%d", j);
	else printf("无此数\n");
	return 0;
}