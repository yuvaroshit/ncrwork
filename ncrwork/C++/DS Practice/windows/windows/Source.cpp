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
		printf("t is unicode\n");
	else
		printf("t is not unicode\n");
	int c = IsTextUnicode(s, slen * sizeof(char), NULL);
	if (c == 1)
		printf("s is unicode\n");
	else
		printf("s is not unicode\n");
	int x = MultiByteToWideChar(CP_UTF8, 0, s, -1, widecharstring, 0);
	widecharstring = new WCHAR[x];
	int x1 = MultiByteToWideChar(CP_UTF8, 0, s, -1, widecharstring, x);
	if (x1 == 0)
		printf("s couldnot be converted to Unicode. Error (%d)", GetLastError());
	else
		printf("Converted widechar string is : %S\n", widecharstring);

	int y = WideCharToMultiByte(CP_UTF8, 0, t, -1, multibytestring, 0, NULL, NULL);
	multibytestring = new char[y];
	int y1 = WideCharToMultiByte(CP_UTF8, 0, t, -1, multibytestring, y, NULL, NULL);
	if (y1 == 0)
		printf("t couldnot be converted to Unicode. Error (%d)", GetLastError());
	else
		printf("Converted multibyte string is : %s\n", multibytestring);

	system("pause");
	return 0;
}