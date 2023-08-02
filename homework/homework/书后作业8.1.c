#include<stdio.h>
int main()
{
	printf("please enter three integer:\n");
	int a[3], temp;
	for(int i=0;i<3;i++)
		scanf_s("%d", &a[i]);
	for (int i = 0; i < 2; i++)
		for(int j=i+1;j<3;j++)
		if (a[i] > a[j])
		{
			temp = a[i]; a[i] = a[j]; a[j] = temp;
		}
	printf("min to max:");
	for (int i = 0; i < 3; i++)
		printf("%d ",a[i]);
	return 0;
}