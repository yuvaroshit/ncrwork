#include<stdio.h>
#include<windows.h>

int main(int argc,TCHAR *argv[])
{
	int i;
	argv = CommandLineToArgvW(GetCommandLineW(), &argc);
	if (argv == NULL)
		printf("No command line arguments\n");
	else
	{
		printf("%d\n",argc);
		for (i = 0; i < argc; i++)
			printf("%d : %S\n", i, argv[i]);
	}
	system("pause");
	return 0;
}