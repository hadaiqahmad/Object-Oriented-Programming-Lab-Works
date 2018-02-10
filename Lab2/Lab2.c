task 1
#include<iostream>
using namespace std;
class date {
private: 
	int day;
	int month;
	int year;
	int cu_day;
	int cu_month;
	int cu_year;
public: 
	date(){};
	date(int i, int j, int k)
	{
		day = i;
		month = j;
		year = k;
	};
	void setter();
	void getter();
	void checkdate();
	




};
void date :: setter(){
	cout << "today is date(1-31):\n";
	cin >> cu_day;
    cout << "today is month(1-12):\n";
	cin >> cu_month;
	cout << "today is year:\n";
	cin >> cu_year;
	cout << " please enter the date bw 1 and 31:\n";
	cin >> day;
	cout << "enter the month bw 1 and 12:\n";
	cin >> month;
	cout << "enter the year:\n";
	cin >> year;
}
void date :: getter(){
	cout << "today is date \n" << cu_day;
	cout << "the current month is\n " << cu_month;
	cout << "the current year is\n" << cu_year;
	cout << "entered date \n" << day;
	cout << "enterd month \n" << month;
	cout << "enterd year\n" << year;
}



void date :: checkdate(){

	if(cu_year > year)
		cout << "the year has passed\n";
	if(cu_month > 12){
		cout << " invalid month\n";
	}
	else if(cu_month > month)
		cout << "the month has passed\n :";
	 if (cu_day > 31 || day > 31)
	 {
		 cout << " month is invalid\n";
	 }
	 else if (cu_day > day)
		 cout << " the day has passed:\n";
	 else
		 cout << "the day  will come in future\n";

}
int main(){
	date d1;
	int d,m,y;
	cout << "enter the date that u want to compare: dd/mm/yy\n";
	cin >> d >> m >> y;
	date d2(d , m , y);
	d1.setter();
	d2.setter();
	d1.getter();
	d2.getter();
	d1.checkdate();
	d2.checkdate();

	system("pause");
	return 0;

}







task 2
#include<iostream>
using namespace std;

void poupulate_array(int *array,int N){
	int i;
	for(i = 0; i < N; i++)
	{
		int n;
		cout << "enter the nmbr\n";
		cin >> n;
		array[i] = n;
	}
}
	void print_array(int *array, int N){
		int j;
		for(j = 0; j < N ; j++)
		{
			cout << " the numbers in the index are \n " <<  j+1  <<"  "<< array[j];

		}
	}
	void search_array(int *array, int N){
		int k;
		cout << "enter  the nmbr that u want to search";
		cin >> k;
		for(int i = 0; i < N; i++){

		if(array[i]==k){
			cout << " the nmbr has found\n ";
			break;}

		}
	}

	int main(){
		int size;
		cout << " enter the size of array";
		cin >> size;
		int *array = new int[size];
		poupulate_array(array , size);
		print_array(array ,size);
		search_array(array ,size);
		system("pause");
		return 0;
	}#include<iostream>
using namespace std;

void poupulate_array(int *array,int N){
	int i;
	for(i = 0; i < N; i++)
	{
		int n;
		cout << "enter the nmbr\n";
		cin >> n;
		array[i] = n;
	}
}
	void print_array(int *array, int N){
		int j;
		for(j = 0; j < N ; j++)
		{
			cout << " the numbers in the index are \n " <<  j+1  <<"  "<< array[j];

		}
	}
	void search_array(int *array, int N){
		int k;
		cout << "enter  the nmbr that u want to search";
		cin >> k;
		for(int i = 0; i < N; i++){

		if(array[i]==k){
			cout << " the nmbr has found\n ";
			break;}

		}
	}

	int main(){
		int size;
		cout << " enter the size of array";
		cin >> size;
		int *array = new int[size];
		poupulate_array(array , size);
		print_array(array ,size);
		search_array(array ,size);
		system("pause");
		return 0;
	}