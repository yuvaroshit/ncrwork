#include<Windows.h>
#include<stdio.h>
void main()
{
	int m, n, i;
	WCHAR *h = L"hello";
	char *g = "good";
	
	n = wcslen(h);
	m = strlen(g);

	i = IsTextUnicode(h, n*sizeof(WCHAR), NULL);
	printf("%S %d %d",h, n,i);
	getchar();
}
