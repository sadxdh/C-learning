#include<stdio.h> //返回从大到小序列
int main()
{
	int a, b, c, z;
	int max(int a, int b);
	int* printer_1 = &a, * printer_2 = &b, * printer_3 = &c, * p = z;
	printf("please enter two integer number:\n");
	scanf_s("%d%d%d", &a, &b, &c);
	printf("max to min：%d>%d>%d", *printer_1, *printer_2, *printer_3);
	return 0;
}
int max(int a, int b)
{
	int z;
	if (a > b)
		return (z = a);
	else return(z = b);
}