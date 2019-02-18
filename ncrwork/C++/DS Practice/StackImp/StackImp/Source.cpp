#include<iostream>
using namespace std;
struct __Stack__
{
	int top;
	int *s;
	int size;
};
class _Stack_
{
	struct __Stack__ sta;
public:
	_Stack_();
	void push(int);
	int pop();
	//int peek();
	bool IsEmpty();
	bool IsFull();
	void Display();
	//~_Stack_();
	void getsize(int);
};
_Stack_::_Stack_()
{
	sta.top = -1;
	sta.s = NULL;
	sta.size = 0;
}
void _Stack_::getsize(int n)
{
	sta.size = n;
	sta.s = new int[n];
}
bool _Stack_::IsFull()
{
	return(sta.top == (sta.size - 1));
}
bool _Stack_::IsEmpty()
{
	return(sta.top == -1);
}
void _Stack_::push(int ele)
{
	if (!IsFull())
		sta.s[++sta.top] = ele;
	cout << "Element Pushed\n";
}
int _Stack_ :: pop()
{
	int x = -999;
	if (!IsEmpty())
		x = sta.s[sta.top--];
	else
		cout << "Stack empty";
	return 0;
}
void _Stack_::Display()
{
	for (int i = 0; i <= sta.top; i++)
		cout << sta.s[i];
}
int main()
{
	_Stack_ s;
	int c,e;
	s.getsize(10);	
	while (1)
	{
		cout << "1. Push\n2. Pop\n3. Peek\n4. IsEmpty\n5. IsFull\n6. Display\n7. Exit\n";
		cin >> c;
		switch (c)
		{
		case 1:
			cout << "Enter element";
			cin >> e;
			s.push(e);
			break;
		case 2:
			s.pop();
			break;
		/*case 3:
			s.peek();
			break;*/
		case 4:
			s.IsEmpty();
			break;
		case 5:
			s.IsFull();
			break;
		case 6:
			s.Display();
			break;
		case 7:
			exit(0);
			break;
		}
	}
	getchar();
	return 0;
}