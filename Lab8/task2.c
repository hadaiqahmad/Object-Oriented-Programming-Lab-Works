#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
class person{
protected:
	string Name;
	int Age;
public:
	person(){ cout << "\here is the person default constructor called"; }
	void settter(){
		cout << "\nplease enter the name of the  person is\n";
		cin >> Name;
		cout << "\nplease enter the age of the  person is\n";
		cin >> Age;
	}
	void getter(){
		cout << "\nso the name of person is: " << Name << "\n";
		cout << "\nso the age of person is: " << Age << "\n";
	}
	~person(){ cout << "\nhere the  person default destructor is called"; }
};
class teacher :virtual public person
{
protected:
	int Grade;
public:
	teacher(){ cout << "\nhere teacher default constructor is called"; }
	teacher(int age) :Grade(age)
	{
		cout << "\nhere teacher parametrized constructor is called";
	}
	void Setter(){
		
		cout << "\nWhat is the grade of the this  Teacher?\n";
		cin >> Grade;
	}
	void Getter(){
		Getter();
		cout << "\nso the Grade of the teacher is: " << Grade << "\n";
	}
	~teacher(){
		cout << "\nTeacher default destructor called";
	}
};
class author : virtual public person{
protected:
	string Book;
public:
	author()
	{
		cout << "\nthe author default constructor is called";
	}
	author(string name) :Book(name)
	{
		cout << "\nAuthor parametrized constructor is called";
	}
	void set_a(){
		cout << "\nplease enter the  name of the book of the author?\n";
		cin >> Book;
	}
	void get_a(){
		cout << "\nso the name of the book of the author is: " << Book << "\n";

	}
	~author()
	{
		cout << "\nAuthor default destructor called";
	}
};
class scholar :public teacher, public author{
protected:
	string article;
public:
	scholar(){ cout << "\nthe scholar default constructor is called"; };

	scholar(string name, int grade, string article) : teacher(grade), author(name), article(article){ cout << "\nthe Scholar parametrized constructor is called"; };

	void setS(){	//Setter
		set_a();
		Setter();
		
		cout << "\n pleae enter the Article of Scholar : ";
		cin >> article;

	}
	void getS(){
		void Getter();
		get_a();
		cout << "\nso The name of the article of the scholar is: " << article << "\n";
	}
	~scholar(){ cout << "\nScholar default destructor is  called"; };
};
int main()
{

	scholar s;
	s.setS();
	s.getS();
	string x, y;
	cout << "\nPlease Enter the name of the second scholar ";
	cin >> x;
	cout << "\nPlease Enter the name of the article of the second scholar ";
	cin >> y;
	cout << "\nPlease Enter the age of the second scholar ";
	int z;
	cin >> z;
	scholar s1(x, z, y);
	_getch();
}
