#include<stdio.h>
#include<string.h>
void deletes2(char*, char*);
int main()
{
	char s1[30], s2[30];
	gets(s1);
	gets(s2);
	deletes2(s1, s2);
	getch();
	return 0;
}
void deletes2(char* str1, char* str2)
{
	int i = 0,j=0,k=0;
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	char str3[30];
	if (len1 > len2)
	{
		for (i = 0; i < len1; i++)
		{
			for (j = 0; j < len2; j++)
			{
				if(str1[i]!=str2[j])
			}
		}
	}
	for(i=0)
	puts(str3);
}