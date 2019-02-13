#include<iostream>
using namespace std;
class Time
{
public:
	int hr, min, sec;
	Time()
	{
		hr = 0;
		min = 0;
		sec = 0;
		//cout << "The time is " << hr << ":" << min << ":" << sec<<"(at Time() constructor)\n";

	}
	Time(int hr1, int min1, int sec1)
	{
		hr = hr1;
		min = min1;
		sec = sec1;
	}
	void print()
	{
		cout << "The time is " << hr << ":" << min << ":" << sec<<"\n";
	}
	Time add(Time ob1, Time ob2)
	{
		Time ob3;
		hr = ob1.hr + ob2.hr;
		min = ob1.min + ob2.min;
		sec = ob1.sec + ob2.sec;
		if (sec > 60)
		{
			sec -= 60;
			min++;
		}
		if (min > 60)
		{
			min -= 60;
			hr++;
		}
		if (hr > 12)
		{
			hr -= 12;
		}
		return ob3;
	}
};
int main()
{
	Time t;
	Time t1(2, 34, 30);
	Time t2(1, 30, 34);
	Time t3;
	t3.add(t1, t2);
	t.print();
	t1.print();
	t2.print();
	t3.print();
	//cout << "Objects created";
	getchar();
	return 0;	
}