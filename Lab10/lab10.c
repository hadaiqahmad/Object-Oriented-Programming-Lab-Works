#include<iostream>
#include<conio.h>
using namespace std;
#include<exception>
class Array{
private:
	int size;
	int* ptr;
public:
	Array(int s){
		size = s;
		ptr = new int(size);
	}

	~Array() {
		delete ptr;
	}

	int& operator [] (int j){
		return *(ptr + j);
	}
};

class Size : public exception{

public:
	Size()
	{
		cout << " the exception has been  Occured!\n";

	}
	const char * what() const throw ()
	{
		return " Size of the Array is big\n";
	}

};
class enteries : public exception{

public:
	enteries()
	{
		cout << " the exception has been  Occured!\n";

	}
	const char * what() const throw ()
	{
		return " the enteries in the array are may b greate than 0 or less than 100 \n";
	}

};
class MultipleOf10 : public exception{

public:
	MultipleOf10()
	{
		cout << " the exception has been  Occured!\n";

	}
	const char * what() const throw ()
	{
		return " the array is of multiple of 10 \n";
	}

};
class Formula : public exception{

public:
	Formula()
	{
		cout << " the exception has been  Occured!\n";

	}
	const char * what() const throw ()
	{
		return " the size of array has been changed to according to the formula\n";
	}

};
int main(){
	int a, b = 0;
	cout << "enter the size of the array";
	cin >> a;
	try {
		if (a > 20){
			throw Size();
		}
		Array i(a);
	}
	catch (Size &i){
		cout << i.what();
		
	}
	while (a < 20){
		for (int x = 0; x < a; x++){
			cout << "enter the enteries of the array";
			cin >> b;
			try{

				if (b % 10 == 0){
					throw MultipleOf10();
				}

				if (b<100 && b>50){
					throw Formula();
				}
				if (b > 200){
					throw b;
				}
				if (b<100 || b > 0){
					throw enteries();
				}
			}
			catch (enteries &q){
				cout << q.what();

			}
			catch (MultipleOf10 &w){
				cout << w.what();

			}
			catch (Formula &r){
				b = b / 2 + (54 * b) / 12;
				cout << r.what();
				cout << "the new formula is " << b;
			}
		}
	}
	_getch();
	system("pause");
}