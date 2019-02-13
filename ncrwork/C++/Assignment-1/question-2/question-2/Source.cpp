#include<iostream>
#include<cstring>
using namespace std;
class Student
{
public:
	char student_name[50];
	char student_grade[30];
	int mark1, mark2, mark3;
	float avg;
	void set_Data(char name[50],int m1,int m2,int m3)
	{
		strcpy_s(student_name, name);
		mark1 = m1;
		mark2 = m2;
		mark3 = m3;
	}
	void calculate_Average()
	{
		avg=(mark1+mark2+mark3)/3;
	}
	void ComputeGrade()
	{
		if (avg >= 60)
			strcpy_s(student_grade, "first class");
		else if (50 <= avg&&avg < 60)
			strcpy_s(student_grade, "second class");
		else if (40 <= avg&&avg < 50)
			strcpy_s(student_grade, "third class");
		else
			strcpy_s(student_grade, "Fail");
	}
	void display()
	{
		cout << "Student name: " << student_name << "\n";
		cout << "Marks in three subjects are " << mark1 << "," << mark2 << "and" << mark3<<"\n";
		cout << "Average marks are " << avg<<"\n";
		cout << "Grade is " << student_grade<<"\n";
	}
};
int main()
{
	Student s;
	s.set_Data("Roshit", 40, 65, 23);
	s.calculate_Average();
	s.ComputeGrade();
	s.display();
	getchar();
	return 0;
}