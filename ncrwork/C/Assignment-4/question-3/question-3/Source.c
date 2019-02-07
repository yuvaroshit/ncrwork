#include<stdio.h>
int main()
{
	int count = 0;
	char *s[] = { "we will teach you how to","Move a mountain","Level a building","Erase the past","Make a million" };
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < (strlen(s[i]) - 1); j++)
		{
			if (s[i][j] == 'e' || s[i][j] == 'E')
				count++;
		}
	}
	printf("Count is %d", count);
	getch();
	return 0;
}