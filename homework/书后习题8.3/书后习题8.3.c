#include<stdio.h>
void swap_min(int a[])
{
	int temp = 0, *end = a + 10, *p = a;
	for (int* i = a; i < end; i++)p = *i > *p ? p :i;
	temp = a[0];a[0] = *p;*p = temp;
}
int swap_max(int a[])
{
	int temp = 0, * end = a + 10, * p = a;
	for (int* i = a; i < end; i++)p = *i < *p ? p : i;
	temp = a[9];a[9] = *p;*p = temp;
}
int main()
{
	int a[10]; 
	printf("please enter ten integer:\n");
	for (int* i = a; i < &a[10]; i++)
		scanf_s("%d", i);
	swap_min(a);swap_max(a);
	for (int* i = a; i < &a[10]; i++)
		printf("%d ",*i);
	return 0;
}