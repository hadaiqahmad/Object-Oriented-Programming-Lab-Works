HADAIQ AHMAD 
BSCS-4A
36520
                                                 TASK 1
 




#include<iostream>
using namespace std;
class animal
{
private :
	int wieght;
	int noOflegs;
	char gender;
public :
	animal();
	void setter(int i ,  int j , char a)
	{
		wieght = i;
		noOflegs = j;
		gender = a;
	}
	void getter()
	{
		cout << "wieght of the animal is\n " << wieght;
		cout << "no of legs of the animal is\n " << noOflegs;
		cout << "gender of the animal is\n " << gender;

	}
};



class shape 
{
private: 
	int noOfsides;
	int exteriorAngels;
	int lenghtOfSides;
public:
	shape();
	void setter(int i ,  int j , int a)
	{
		noOfsides = i;
		exteriorAngels= j;
		lenghtOfSides= a;
	}
	void getter()
	{
		cout << "no of sides of the shape are\n " <<noOfsides;
		cout << "no of exteruor angels of shape are\n " <<exteriorAngels;
		cout << "the lenght of sides of the shape is\n " << lenghtOfSides;

	}

};


animal::animal()
{
	wieght = 0;
	noOflegs = 0;
	gender = '&';

}
shape::shape()
{
	noOfsides = 0;
    exteriorAngels = 0;
	lenghtOfSides = 0;
}

int main(){
	animal h1;
	shape s1;
	int h_1, h_2, s_1, s_2, s_3;
	char h_3;
	cout << "enter the wieght of the animal\n";
	cin >> h_1;
	cout << "enter the noOflegs of the animal\n";
	cin >> h_2;
	cout << "enter the gender of the animal\n";
	cin >> h_3;
	cout << "enter the noOfsides of the shape\n";
	h1.setter(h_1,h_2,h_3);
	cin >> s_1;
	cout << "enter the exteriorangel of the shape\n";
	cin >> s_2;
	cout << "enter the lenghtOfSides of the shape\n";
	cin >> s_3;
	s1.setter(s_1,s_2,s_3);
	h1.getter();
	s1.getter();
	system("pause");
	return 0;
}







TASK 2 :






#include<iostream>
using namespace std;
class Box {
private:
int height;
int width;
int length, price;
void cal_price()
{
	price = 3*volume();
};
public:
void Box1();
int volume();
void getter();
};

void Box::Box1(){
	int b, b2, b3;
	cout << "enter the height of the box";
	cin >> b;
	height=b;
	cout << "enter the length of the box";
	cin >> b2;
	length = b2;
	cout << "enter the width of the box";
	cin >> b3;
   width =
	   b3;
};


int Box::volume(){
	return length*width*height;
};

void Box::getter(void){
	 cal_price();
	cout << " the price is " << price;
};

int main()
{
	int Vol;
	Box b1;
	b1.Box1();
	Vol = b1.volume();
	cout << "volume of the box is" << Vol << endl;
	b1.getter();
	system("pause");
	
}



