#define BUFFSIZE 100
#include<stdio.h>
#include<windows.h>
#include<tchar.h>
int main(int argc,LPTSTR argv[])
{
	HANDLE hFile;
	TCHAR buffer[]=TEXT("RAVI");
	hFile = CreateFile(argv[1], GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	if (hFile == INVALID_HANDLE_VALUE)
	{
		_tprintf(_T("File not created. Error (%d)\n", GetLastError()));
		getchar();
		return FALSE;
	}
	else
	{
		printf("File (%S) created successfully\n", argv[1]);
	}
	DWORD nbw;
	ZeroMemory(buffer, BUFFSIZE);
	BOOL ret = WriteFile(hFile, buffer, sizeof(buffer), &nbw, NULL);
	if (ret == 0)
	{
		_tprintf(_T("Cant write in the file. Error (%d)\n", GetLastError()));
		return FALSE;
	}
	else
	{
		printf("Written successfully\n");
	}
	CloseHandle(hFile);
	getchar();
	return TRUE;
}