#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	gets(str);
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		else if (97 <= str[i] && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	puts(str);
	getch();
	return 0;
}