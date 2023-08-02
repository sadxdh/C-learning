#include<stdio.h>
int DigitSum(int b)
{
	int n, temp=b;
	for (n = 0; temp; temp /= 10, n++);
	if (n == 1)return b;
	else return b % 10 + DigitSum(b / 10);
}
int main()
{
	printf("请输入一个非负整数\n");
	int n,a;
	scanf_s("%d",&a);
	n=DigitSum(a);
	printf("递归的结果为%d\n",n);
	return 0;
}

