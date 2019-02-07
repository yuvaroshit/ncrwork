#include<stdio.h>
int replace(char*);
int main()
{
	char cat[] = "The cat sat";
	int n = replace(cat);
	printf("Count is %d", n);
	getch();
	return 0;
}
int replace(char *str)
{
	int i = 0, count = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) == ' ')
		{
			*(str + i) = '-';
			count++;
		}
		printf("%c", *(str + i));
		i++;

	}
	return count;
}