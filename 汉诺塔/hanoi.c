#include<stdio.h>
void move(char x, char y)
{
	printf("%c-->%c  ",x,y);
}

void hanoi(int n, char a, char b, char c)
{
	void move(char x, char y);
	if (n == 1)
		move(a, c);
	else {
		hanoi(n - 1, a, c, b);
		move(a, c);
		hanoi(n - 1, b, a, c);
	}
}

int main()
{
	int n;
	printf("������������\n");
	scanf_s("%d", &n);
	printf("������Ϊ%d\n",n);
	void hanoi(int n, char a, char b, char c);
	printf("�ƶ�%d������\n",n);
	hanoi(n,'A','B','C');
	return 0;
}