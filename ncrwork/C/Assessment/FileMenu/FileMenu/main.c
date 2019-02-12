#include<stdio.h>
//int count(FILE*);
int main()
{
	int ch;
	printf("\n1. Count number of alphabets,digits,spaces and special chars in file");
	printf("\n2. Remove all comments from file content");
	printf("\n3. Find a matching word in the file and rotate the word and place it in the same file");
	printf("\n4. Replace all tabs present in the file content with 't'\n");
	scanf_s("%d", &ch);
	FILE *fp = NULL;
	fopen_s(&fp, "SampleText.txt", "r");
	while (1){
		switch (ch)
		{
		case 1:
			count(fp);
			break;
		case 2:
			remcomm(fp);
			break;
			/*case 3:
				rotate();
				break;*/
		case 4:
			reptab(fp);
			break;
		case 5:
			exit(0);
		default:
			printf("\nEnter a valid choice");
			break;
		}
}
	_fcloseall();
	getch();
	return 0;
}