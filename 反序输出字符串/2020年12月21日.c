#include<stdio.h>
#include<string.h>
reverse_str(str)
{
	int i, j;
	for (i = 0, j = strlen(str) - 1; str[i] != '\0'; i++, j--)
		str[i] = str[j];
}
void main()
{
	char str[100];
	printf("������һ���ַ���\n");
	gets(str);
	printf("��������ַ���Ϊ��%s",str);
	reverse_str(str);
	printf("�������Ϊ��%s",str);
	return 0;
}
