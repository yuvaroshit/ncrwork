#include<stdio.h>
int count(FILE* fp1)
{
	int alph = 0, dig = 0, space = 0, spch = 0;
	//FILE *fp = NULL;
	//fopen_s(&fp,"SampleText.txt", "r");
	char ch;
	while (!feof(fp1))
	{
		ch = fgetc(fp1);
		if ((65 <= ch&&ch <= 90) || (97 <= ch&&ch <= 122))
			alph++;
		else if (48 <= ch&&ch <= 57)
			dig++;
		else if (ch == ' ')
			space++;
		else
			spch++;		
	}
	printf("Number of alphabets are %d\n", alph);
	printf("Number of digits are %d\n", dig);
	printf("Number of spaces are %d\n", space);
	printf("Number of special characters are %d\n", spch);
	return 0;
}
