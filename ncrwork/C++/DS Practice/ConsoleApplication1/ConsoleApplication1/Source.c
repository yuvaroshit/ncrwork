#include<windows.h>
#include<stdio.h>
void main()
{
	WCHAR a= L'ab';
	int k=wcslen(a);
	printf("%S %d %d",a,k,isTextUnicode());
}