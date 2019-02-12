#include<stdio.h>
int reptab()
{
	int alph = 0, dig = 0, space = 0, spch = 0;
	FILE *fp = NULL;
	FILE *fp1 = NULL;
	fopen_s(&fp, "SampleText.txt", "r");
	fopen_s(&fp1, "SampleText2.txt", "w");
	char ch;
	while (!feof(fp))
	{
		ch = fgetc(fp);
		if (ch == '\t')
		{
			fputc('\\', fp1);
			fputc('t', fp1);
		}
		else if(ch!=EOF)
			fputc(ch, fp1);
	}
	printf("Tabs Replaced");
	return 0;
}
