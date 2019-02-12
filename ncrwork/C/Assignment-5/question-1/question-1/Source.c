#include<stdio.h>
 struct time
{
	int hour;
	int min;
	int sec;
}t;
int main()
{
	struct time t = { 2,12,57 };
	printf("%d:%d:%d", t.hour, t.min, t.sec);
	getch();
	return 0;
}