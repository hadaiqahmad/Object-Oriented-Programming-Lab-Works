#include<stdio.h>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<time.h>
using namespace std;
class student{
private:
	string student_name;
	string student_course;
public:
	int student_ID;
	student()
	{
		student_ID = rand();
	}
	void setter(){
		cout<< "please enter the name of the student\n";
		cin >> student_name;
		cout << "please enter the student course\n";
		cin >> student_course;
	

	}
	void getter(){
		cout << "the student name is\n "<< student_name;
		cout << "the student course is\n " << student_course;
		cout << "the student ID is\n " << student_ID;
	}
};
bool myfunction(student &s, student &p) { return (s.student_ID<p.student_ID); }

void main()
{
	student studentarray[5];
	for (int i = 0; i < 5; i++)
	{
		studentarray[i].setter();
	}
	vector <student> v;
	vector <student> vb(5);
	v.assign(studentarray, studentarray + 5);
	sort(v.begin(), v.end(), myfunction);
	student s;
	s.setter();
	v.push_back(s);
	cout << "the students after push back are\n";
	for (int i = 0; i < 6; i++)
	{
		v[i].getter();
	}
	cout << "now for the second vector\n";
	student s1;
	student s2;
	vb.push_back(s1);
	vb.push_back(s2);
	vb[0].setter();
	vb[1].setter();
	v.insert(v.end(), vb.begin(), vb.end());
	cout << "now after merge the students are\n";
	for (int i = 0; i < 2; i++)
	{
		v[i].getter();
	}
	system("pause");
}