#include<stdio.h>
int remcomm(FILE* fp1)
{
	int alph = 0, dig = 0, space = 0, spch = 0;
	//FILE *fp = NULL;
	FILE *fp2 = NULL;
	fopen_s(&fp1, "SampleText.txt", "r");
	fopen_s(&fp2, "SampleText2.txt", "w");
	char ch;
	while (!feof(fp1))
	{
		ch = fgetc(fp1);
		if (ch == '/')
		{
			ch = fgetc(fp1);
			if (ch == '/')
			{
				while (ch != '\n')
				{
					ch = '\0';
				}

			}
		}
		if (ch != EOF)
			fputc(ch, fp2);
	}
	return 0;
}
