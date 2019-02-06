#include<stdio.h>
#include<string.h>
int a(char*);
int b(char*);
int c(char*);
int main()
{
	char hex[10],ch;
	gets(hex);
	printf("a. Display hexadecimal equivalent of 1s Complement\n");
	printf("b. Carry out a masking operation and display the hexadecimal equivalent of result\n");
	printf("c. Carry out a bit shifting operation and display hexadecimal equivalent of result\n");
	printf("d. Exit\n");
	scanf("%c", &ch);
	switch (ch)
	{
	case 'a':
		a(hex);
		break;
	case 'b':
		b(hex);
		break;
	case 'c':
		c(hex);
		break;
	case 'd':
		exit(1);
		break;
	default:
		printf("Enter valid option");
		break;
	}
	getch();
	return 0;

}