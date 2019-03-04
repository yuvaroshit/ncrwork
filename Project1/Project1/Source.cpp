#include<Windows.h>
#include<stdio.h>
#include<WinBase.h>
int main(int argc, TCHAR *argv[], TCHAR *env[])
{
	int i = 0;
	env = GetEnvironmentStrings();
	while (env[i] != '\0')
	{
		printf("%s", env[i]);
		i++;
	}
	return 0;
}