#include<Windows.h>
#include<iostream>
int main(int argc, char *argv[])
{
	STARTUPINFO s;
	PROCESS_INFORMATION p;
	ZeroMemory(&s, sizeof(s));
	BOOL x = CreateProcessA(
		NULL, argv[1],
		NULL,
		NULL,
		false,
		NORMAL_PRIORITY_CLASS,
		NULL,
		NULL,
		&s,
		&p);
	if (x == true)
	{
		printf("Process Created\n");
	}
	else
	{
		printf("\nNot Created %d", GetLastError());
	}
	system("pause");
	return 0;
}