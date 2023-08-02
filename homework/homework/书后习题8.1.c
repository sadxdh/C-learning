#include<stdio.h>
int main()
{
	printf("please enter three integer:\n");
	int a, b, c;
	int * p0 = &a; int * p1 = &b; int * p2 = &c;
	scanf_s("%d%d%d", &a, &b, &c);
	if (a >= b && b >= c)
		printf("min to max:%d %d %d", *p0, *p1, *p2);
	else if (a >= c && c >= b)
		printf("min to max:%d %d %d", *p0, *p2, *p1);
	else if (b >= a && a >= c)
		printf("min to max:%d %d %d", *p1, *p0, *p2);
	else if (b >= c && c >= a)
		printf("min to max:%d %d %d", *p1, *p2, *p0);
	else if (c >= a && a >= b)
		printf("min to max:%d %d %d", *p2, *p0, *p1);
	else if (c >= b && b >= a)
		printf("min to max:%d %d %d", *p2, *p1, *p0);
	return 0;
}