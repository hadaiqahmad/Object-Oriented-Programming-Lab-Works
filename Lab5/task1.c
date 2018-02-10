#include<conio.h>
#include<iostream>



using namespace std;
class matrix{
private:
	double mat[2][2];
public:
	matrix();
	void setter();
	void getter();
	matrix operator+(const matrix&) const;
	matrix& operator=(matrix& b);

};

matrix::matrix()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			mat[i][j] = 0;
		}
	}
}

void matrix::setter()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> mat[i][j];
		}
	}
	
}

void matrix::getter()
{
	cout << "The data after overloading is" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << mat[i][j]<<endl;
		}
	}
}
matrix matrix::operator+(const matrix& plus)const
{
	matrix temp;
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++)
		{
			temp.mat[i][j] = this->mat[i][j] + plus.mat[i][j];
		}
	}
	return temp;
	
}
matrix& matrix::operator=(matrix& a) 
{
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++)
		{
			this->mat[i][j] = a.mat[i][j];
		}
	}
	return *this;
}
int main()
{
	matrix a, b,c;
	cout << "Using the + overloading" << endl;
	cout << "Enter the data of a i.e mat[2][2]" << endl;
	a.setter();
	cout << "Enter the data of b i.e mat[2][2]" << endl;
	b.setter();
	c = a + b;
	cout << "Doing c=a+b" << endl;
	c.getter();
	cout << "Using = overloading " << endl;
	b = a;
	cout << "Doing b=a" << endl;
	b.getter();
	system("pause");
}
