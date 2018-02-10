#include<iostream>
using namespace std;
class car {
private:
	static int count;
	static int totalmoney;
public:
	car();
	static	int showdata();
};
int car::count = 0;
int car::totalmoney = 0;

car::car(){
	 count++;
	 totalmoney+=25;
 }
int car::showdata(){
	cout << "The nmbr of car which has passed through tollbooth are : " << count << endl;
	cout << "the total money is collected : " << totalmoney << endl;
	return 0;
}

	int main(){
		int carPassed;
		cout << "enter the number of car passed :" << endl;
		cin >> carPassed;
		car *cr7 = new car[carPassed];
		car::showdata();
		delete[]cr7;
		system("pause");
		return 0;
	}
