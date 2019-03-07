#include<stdio.h>
#include<string.h>
#define size 100
//String Reverse Functions
char* STRREV(char *str1)
{
	int i, j;//hold the loop running vars
	for (i = 0, j = strlen(str1) - 1; i < j; i++, j--)
	{
		char ch;
		ch = str1[i];
		str1[i] = str1[j];
		str1[j] = ch;
	}
	return str1;
}
//Compares 2 strings
/*int STRCMP(char *str1, char *str2)
{
	while (*str1 == *str2)
	{
		if ((*str1 == '\0') || (*str2 == '\0'))
			return 0;
		str1++;
		str2++;
	}
	return ((*str1) - (*str2));
}*/
int STRCMP(char string1[], char string2[])
{
	int i = 0, flag = 0;
	while (flag == 0)
	{
		if (string1[i]>string2[i])
		{
			flag = 1;
		}
		else if (string1[i]<string2[i])
		{
			flag = -1;
		}
		else
		{
			i++;
		}
	}
	return flag;
}
//Concatenates the strings
char* STRCAT(char *str1, char *str2)
{
	char *og = str1;
	while (*str1 != '\0')
	{
		*str1++;
	}
	while ((*str1 = *str2) && (*str2 != '\0'))
	{
		*str1++;
		*str2++;
	}
	return og;
}
//String Copy Function
char* STRCPY(char *str1, char *str2)
{
	char *og;
	og = str1;
	while ((*str1 = *str2) != '\0')
	{
		*str1++;
		*str2++;
	}
	return og;
}
int main()
{
	int choice;
	char str1[size];
	char str2[size];
	printf("1.String Reverse\n2.String Compare\n3.String Concatenate\n4.String Copy\n");
	scanf_s("%d", &choice);
	//Evaluates User's Choice
	switch (choice)
	{
	case 1: printf("Enter the string\n");
		scanf_s("%s", str1, 10);
		printf("%s", STRREV(str1));
		break;
	case 2:printf("Enter string 1\n");
		scanf_s("%s", str1, 10);
		printf("Enter string 2\n");
		scanf_s("%s", str2, 10);
		printf("%d", STRCMP(str1, str2));
		break;
	case 3:printf("Enter string 1\n");
		scanf_s("%s", str1, 10);
		printf("Enter string 2\n");
		scanf_s("%s", str2, 10);
		printf("%s", STRCAT(str1, str2));
		break;
	case 4:printf("Enter string 1\n");
		scanf_s("%s", str1, 10);
		printf("Enter string 2\n");
		scanf_s("%s", str2, 10);
		printf("%s", STRCPY(str1, str2));
		break;
	default:printf("Enter a valid option");
		break;
	}
	system("pause");
	return 0;
}