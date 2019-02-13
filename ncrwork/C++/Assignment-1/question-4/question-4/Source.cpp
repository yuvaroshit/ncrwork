#include<iostream>
using namespace std;
class Arithmetic
{
private:
	int a, b;
public:
	void setData(int num1, int num2)
	{
		a = num1;
		b = num2;
	}
	inline int add(int a, int b)
	{
		return (a + b);
	};
	inline int sub(int a, int b)
	{
		return (a - b);
	};
	inline int mul(int a, int b)
	{
		return (a * b);
	};
	inline int div(int a, int b)
	{
		return (a / b);
	};
	inline int mod(int a, int b)
	{
		return (a % b);
	};
};
int main()
{
	Arithmetic a;
	cout << a.add(3, 5) << "\n";
	cout << a.sub(3, 5) << "\n";
	cout << a.mul(3, 5) << "\n";
	cout << a.div(3, 5) << "\n";
	cout << a.mod(3, 5)<<"\n";
	getchar();
	return 0;
}