#define BUFFSIZE 100
#include<stdio.h>
#include<windows.h>
#include<tchar.h>
int _tmain(int argc, LPTSTR argv[])
{
	HANDLE hFile;
	char buffer[BUFFSIZE];
	hFile = CreateFile(argv[1], GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (hFile == INVALID_HANDLE_VALUE)
	{
		_tprintf(_T("File doesnt exist. Error (%d)\n", GetLastError()));
		getchar();
		return FALSE;
	}
	else
	{
		printf("File (%S) opened successfully\n", argv[1]);
	}
	DWORD nbr;
	ZeroMemory(buffer, BUFFSIZE);
	BOOL ret = ReadFile(hFile, buffer, BUFFSIZE, &nbr, NULL);
	if (ret == 0)
	{
		_tprintf(_T("Cant read file. Error (%d)\n", GetLastError()));
		return FALSE;
	}
	else
	{
		printf("Text from file (%S) : %s\n", argv[1],buffer);
	}
	CloseHandle(hFile);
	getchar();
	return TRUE;
}