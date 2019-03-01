#include<stdio.h>
#include<windows.h>

int main()
{
	char *s = "ravi";
	WCHAR *t = L"teja";
	char *multibytestring = NULL;
	WCHAR *widecharstring = NULL;
	int slen = strlen(s);
	int tlen = wcslen(t);
	int b = IsTextUnicode(t, tlen * sizeof(WCHAR), NULL);
	if (b == 1)
		printf("t is unicode");
	else
		printf("t is not unicode");
	int c = IsTextUnicode(s, slen * sizeof(char), NULL);
	if (c == 1)
		printf("s is unicode");
	else
		printf("s is not unicode");
	return 0;
}