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
	printf("请输入一个字符串\n");
	gets(str);
	printf("您输入的字符串为：%s",str);
	reverse_str(str);
	printf("反序输出为：%s",str);
	return 0;
}
