#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class vehicle
{
public:
	vehicle(){};
	~vehicle(){};
	string color;
	int modelno;
	int getvalue()
	{
		cout << "Enter vehicle color and model no. \n";
		cin >> color;
		cin >> modelno;
		return 0;
	}
	void print()
	{
		cout <<"the color of vehicle is the " << color<< endl ;
		cout <<"\n the model number  of the vehicle isthe " << modelno<<endl;
		
	}
};

class car :public vehicle
{
public:
	car(){};
	~car(){};
	int carID;
	int Doors;
	int getc()
	{
		getvalue();
		cout << "please enter Car id and number of Doors ehich have been in your cars \n";
		cin >> carID;
		cin >> Doors;
		return 0;
	}
	void printc()
	{
		if (carID == 0)
		{
			cout << "there is no data found in ypur car profile \n";
		}
		print();  
		cout <<"Car ID is: " << carID<<"\n";
		cout <<"the number of  doors of the car  are following " << Doors<<"\n";
		
	}
	void deletec()
	{
		carID == 0;
		Doors == 0;
	}
};

class truck :public vehicle
{
public:
	truck(){};
	~truck(){};
	int truckID;
	int cabSize;
	int cap;
	int gett()
	{
		getvalue();
		cout << "Enter truck ID, cabsize and towing capacity \n";
		cin >> truckID;
		cin >> cabSize;
		cin >> cap;
		return 0;
	}
	void printt()
	{
		if (truckID == 0)
		{
			cout << "there is no data found \n";
		}
		print();
		cout <<"the ID of the truck is  " << truckID<<"\n";
		cout <<"the Cabin  size of the truck is is: "  << cabSize<<"\n";
		cout <<"the towing capacity of truck is " << cap<<"\n";
	
	}
	void deletet()
	{
		truckID == 0;
		cabSize == 0;
		cap == 0;
	}
};

class bus :public vehicle
{
public:
	bus(){};
	int BusID;
	int Engine;
	string transtype;
	int pass;
	int getb()
	{
		getvalue();
		cout << "Enter bus ID, engine no., transimission type and no. of passengers \n";
		cin >> BusID;
		cin >> Engine;
		cin >> transtype;
		cin >> pass;
		return 0;
	}
	void printb()
	{
		if (BusID == 0)
		{
			cout << "there is no data found \n";
		}
		print();
		cout << "the id of the bus  is: " << BusID << "\n";
		cout << " the engine number of the bus is " << Engine << "\n";
		cout << "the transmission type of the bus is " << transtype << "\n";
		cout << "No. of passengers is: " << pass << "\n";
    }
	void deleteb()
	{
		BusID == 0;
		Engine == 0;
		transtype = 'a';
		pass == 0;
	}
};

void main()
{
	int i;
	int b;
	int c;
	int j;
	car* cp;
	truck* t;
	bus* bp;
	while (1)
	{

		cout << "please enter 1 to add a sub category vehicle and 2 to view all vehicles that u have entered and enter 3 to view a subcategory of vehicles and  4 to delete a sub-category, 5 to exit system \n";
		cin >> i;
		if (i == 1)
		{
			int x;
			cout << " please enter 1 to add the cars and 2 to add trucks and enter 3 to add buses \n";
			cin >> x;
			if (x == 1)
			{
				cout << " please write that how many cars do you want to enter? \n";
				cin >> b;
				cp = new car[b];
				for (int d = 0; d < b; d++)
				{
					cp[d].getc();
				}
			}
			if (x == 2)
			{
				cout << "How many trucks do you want to enter? \n";
				cin >> c;
				t = new truck[c];
				for (int y = 0; y < c; y++)
				{
					t[y].gett();
				}
			}
			if (x == 3)
			{
				cout << "please writeb that how many buses do you want to enter in the manue? \n";
				cin >> j;
				bp = new bus[j];
				for (int y = 0; y < j; y++)
				{
					bp[y].getb();
				}
			}
		}
		if (i == 2)
		{
			for (int d = 0; d < b; d++)
			{
				cp[d].printc();
			}
			for (int y = 0; y < c; y++)
			{
				t[y].printt();
			}
			for (int y = 0; y < j; y++)
			{
				bp[y].printb();
			}
		}
		if (i == 3)
		{
			int m;
			cout << "please enter 1 to view all data of the cars and 2 to view all the data of the trucks and press  3 to view all data of the buses " << endl;
			cin >> m;
			if (m == 1)
			{
				for (int d = 0; d < b; d++)
				{
					cp[d].printc();
				}
			}
			if (m == 2)
			{
				for (int y = 0; y < c; y++)
				{
					t[y].printt();
				}
			}
			if (m == 3)
			{
				for (int y = 0; y < j; y++)
				{
					bp[y].printb();
				}
			}
		}
		if (i == 4)
		{
			int l;
			cout << "Enter 1 to delete cars, 2 to delete trucks, 3 to delete buses \n";
			cin >> l;
			if (l == 1)
			{
				for (int d = 0; d < b; d++)
				{
					cp[d].deletec();
				}
			}
			if (l == 2)
			{
				for (int d = 0; d < b; d++)
				{
					t[d].deletet();
				}
			}
			if (l == 3)
			{
				for (int d = 0; d < j; d++)
				{
					bp[d].deleteb();
				}
			}
		}
		if (i == 5)
		{
			break;
		}
	}
	_getch();
}

