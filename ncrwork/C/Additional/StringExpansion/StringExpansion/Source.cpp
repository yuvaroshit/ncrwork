#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define size 100
int main()
{
	int length;//Stores string length
	int flag = 0;//checks for valid input
	while (1)//checks for positive length
	{
		printf("enter the length of the string:\n");
		scanf_s("%d", &length);
		if (length >= 0)
		{
			break;
		}
	}
	char *strng;//Holds the input
	char strng2[size];//Stores the result
	int length2 = 0;//result's size
	strng = (char *)malloc(sizeof(char)*length);//memory alloaction
	printf("\nEnter the stiring\n");
	scanf("%s", strng);
	if (strng[0] == '-' || strng[length - 1] == '-')
	{
		flag = 1;
		printf("flag=1 set at first");
	}
	printf("entered string is %s\n", strng);
	for (int i = 0; i < length && (flag == 0); i++)
	{
		if (strng[i] == '-')
		{
			if (isdigit(strng[i - 1]))
			{

				if (isdigit(strng[i + 1]))
				{
					if (strng[i - 1] < strng[i + 1])
					{

						int first = (int)strng[i - 1];
						int sec = (int)strng[i + 1];

						for (int j = first + 1; j < sec; j++)
						{
							strng2[length2] = (char)j;
							length2++;
						}

					}
					else
					{
						flag = 1;
						break;
					}
				}
				else
				{
					flag = 1;
					break;
				}
			}
			if (isalpha(strng[i - 1]))
			{
				if (isalpha(strng[i + 1]))
				{
					//expand characters code
					if ((int)strng[i - 1] < (int)strng[i + 1])
					{
						int first = (int)strng[i - 1];
						int sec = (int)strng[i + 1];
						for (int j = first + 1; j < sec; j++)
						{
							strng2[length2] = (char)j;
							length2++;

						}
					}
					else
					{
						flag = 1;
						break;
					}
				}
				else
				{
					flag = 1;
					break;
				}
			}
		}
		else//if (strng[i]!='-')
		{
			strng2[length2] = strng[i];
			length2++;
		}
	}
	strng2[length2] = '\0';
	if (flag == 1)
	{
		printf("invalid input");
	}
	else
	{
		printf("valid input");
		printf("\nthe resultant string is\n %s", strng2);
	}
	system("pause");
	return 0;
}