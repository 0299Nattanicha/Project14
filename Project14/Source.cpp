#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0, sum = 0;
	char str[100];
	scanf("%s", &str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			sum++;
		}
		i++;
	}
	printf("%d", sum);
	return 0;
}