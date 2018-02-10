#include <conio.h>
#include <iostream>
#include <string>
using namespace std;
class teacher
{
protected:
	string Name;
	int Age;
public:
	teacher(){ cout << "\nhere is the default constroctor of teacher is called"; };
	teacher(string n, int a){
		cout << "\nand here is the default constroctor of teacher is called";
		Name = n;
		Age = a;
	};
	void setdata_tchr()
	{
		cout << "\nEnter name of Teacher : ";
		getline(cin, Name);
		cout << "\nEnter age of Teacher : ";
		cin >> Age;
	}
	void showdata_tchr()
	{
		cout << "\nhere The name of teacher is :" << Name;
		cout << "\nhere The age of teacher is :" << Age;
	}


};
class author
{
protected:
	string Name;
	int Age;
public:
	author(){ cout << "\nhere is the default constroctor of author is called"; };
	author(string n, int a){
		cout << "\nhere is the default constroctor of author is called";
		Name = n;
		Age = a;
	};
	void setdata_athr()
	{
		cout << "\nplease Enter name of Author : ";
		getchar();
		getline(cin, Name);
		cout << "\nplease Enter age of Author : ";
		cin >> Age;
	}
	void showdata_athr()
	{
		cout << "\nhere The name of Author is :" << Name;
		cout << "\nhere The age of Author is :" << Age;
	}


};
class scholar : public teacher, public author
{
private:
	string bookName;
public:
	void setdataScholar(){
		cout << "\nplease Enter the name of Book : ";
		getchar();
		getline(cin, bookName);
		cout << "\nand the name of Book is :" << bookName;
	}
	void setdata_tchr();
	void showdata_tchr();
	void setdata_athr();
	void showdata_athr();
	scholar() : author(), teacher(){
		cout << "\n here is default constructor of Scholar is called";
	};
	scholar(string name, int age, string bn) :author(name, age), teacher(name, age), bookName(bn){
		cout << "\nhere is thr parameterized constructor of Scholar is called";
	};
};
int main()
{


	scholar s;
	s.teacher::setdata_tchr();
	s.teacher::showdata_tchr();
	s.author::setdata_athr();
	s.author::showdata_athr();
	s.setdataScholar();

	scholar t("Hadaiq", 77, "booKname"); /*author(name, age), teacher(name, age);*/





	_getch();
}
