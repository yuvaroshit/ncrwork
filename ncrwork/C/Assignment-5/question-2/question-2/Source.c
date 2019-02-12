#include<stdio.h>
struct  str
{
	int data;
	char ch;
}s;
union un
{
	int data1;
	char ch1;
}u;
int main()
{
	printf("Size of structure is %d\n", sizeof(s));
	printf("Size of union is %d", sizeof(u));
	getch();
	return 0;

}
