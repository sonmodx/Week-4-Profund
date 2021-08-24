#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
	char string[5000];
	int a[26] = {0};
	scanf("%s", &string);
	int i=0;
	for (int i=0;i<strlen(string);i++)
	{
			a[toupper(string[i])-'A']++;
	}
	for (int i=0;i<26;i++)
	{
		if (a[i]!=0)
		{
				printf("%c = %d\n", i+'A', a[i]);
		}
	}
	return 0;
}
