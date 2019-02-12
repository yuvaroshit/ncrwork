#include<stdio.h>
FILE *fp1 = NULL;
int main()
{
	fopen_s(&fp1, "Text.txt", "r");
	while (!feof(fp1))
	{
		char ch = fgetc(fp1);
		if(ch!=EOF)
			printf("%c", ch);
	}
	getch();
	return 0;
}

