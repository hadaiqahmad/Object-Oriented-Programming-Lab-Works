#include<iostream>
using namespace std;
class employe{
protected:
	bool t[3];
	string days[5];
public:
	employe(){
		for (int x = 0; x < 3; x++){
			t[x] = true;
		}
	}
	virtual void s_t(){

		int i = 0;
		do
		{
			cout << "please enter 0 or  1 or  2 for free time or enter 4 to exit: ";
			cin >> i;
			t[i] = true;
		}
		while (i != 4);
	}

	virtual void f_slot(){

		if (t[0] == true)
			cout << "employee  is free from 9-10 AM" << endl;

		if (t[1] == true)
			cout << "employee  is free from  10-11 AM" << endl;

		if (t[2] == true)
			cout << "employee  is free from  11-12 AM " << endl;
	}
	virtual void ap(int n){

		if (t[n] != false){
			t[n] = false;
			cout << "your appointment has been created successfully" << endl;
		}
		else{
			cout << "the employee is not free at that moment that u want to meet" << endl;
		}
	}

	virtual void c_ap(int n){

		if (t[n] != true){
			t[n] = true;
			cout << "your Appointment has canceled sucessfully" << endl;
		}
		else {

			cout << "please enter valid time" << endl;
		}
	}
	virtual void s_leave(int n) = 0;

};
class faculty :public employe{
public:
	faculty(){
		for (int j = 0; j < 3; j++){
			t[j] = true;
		}
	}
virtual	void s_ti(){
		int k = 0;
		while (k != 4){
			cout << "please enter 0 or  1 or  2 for free time or enter 4 to exit: ";
			cin >> k;
			t[k] = true;
		}
	}

virtual	void f_slot(){

		if (t[0] == true)
			cout << "employee  is free from 9-10 AM" << endl;

		if (t[1] == true)
			cout << "employee  is free from 91-11 AM" << endl;

		if (t[2] == true)
			cout << "employee  is free from 11-12 AM" << endl;
	}

virtual	void ap(int n){

		if (t[n] != false){
			t[n] = false;
			cout << "your appointment has been created sucessfully" << endl;
		}
		else{
			cout << "the employee is not free at that moment that u want to meet" << endl;
		}
	}

virtual	void c_ap(int n){

		if (t[n] != true){
			t[n] = true;
			cout << "your Appointment has canceled sucessfully" << endl;
		}
		else {

			cout << "please enter valid time" << endl;
		}
	}

virtual	void s_leave(int n){
		for (int a = 0; a < n; a++){
			days[a] = "he is on leave";
		}
		cout << "employee is on vacation for " << n << "days" << endl;
	}
};

	class staff :public employe{
	public:
		staff(){
			for (int b = 0; b < 3; b++){
				t[b] = true;
			}
		
		}
virtual	void s_tm(){
			int z = 0;
			while (z != 4){
				cout << "please enter 0 or  1 or  2 for free time or enter 4 to exit: ";
				cin >> z;
				t[z] = true;
			}

		}
		virtual	void f_slot(){

				if (t[0] == true)
					cout << "employee  is free from 9 - 10 AM" << endl;

				if (t[1] == true)
					cout << "employee  is free from 10 - 11 AM"<< endl;

				if (t[2] == true)
					cout << "employee  is free from 11-12 AM" << endl;
			}

		virtual	void ap(int n){

				if (t[n] != false){
					t[n] = false;
					cout << "your appointment has been created sucesfully" << endl;
				}
				else{
					cout << "the employee is not free at that moment that u want to meet" << endl;
				}
			}

		virtual	void c_ap(int n){

				if (t[n] != true){
					t[n] = true;
					cout << " your Appointment has canceled sucessfully" << endl;
				}
				else {

					cout << " please enter valid time" << endl;
				}
			}

		virtual	void s_leave(int n){
				for (int a = 0; a < n; a++){
					days[a] = "employee is on leave";
				}
				cout << "He is on vacation for " << n << "days" << endl;
			}
		
	};
	
	int main(){
		faculty cr7;
		staff kroos;
		employe *b1 = &cr7;
		employe *Di = &kroos;
		int x, y;
		cout << " please enter the choice press 1 to meet Faculty Press 2 to meet staff and  press 3 to exit" << endl;
		cin >> y;
		if (y == 1)
		{
			cr7.s_ti();
			do{

				cout << "please Press 1 for appointment and Press 2 to cancel an appointment that u have created" << endl;
				cout << "Press 3 to find faculty's free slot and Press 4 to exit" << endl;
				cin >> x;

				if (x == 1){
					int n;
					b1->f_slot();
					cout << "please enter time for appointment and press  0, 1, or  2 for appointment";
					cin >> n;
					b1->ap(n);
				}
				if (x == 2){
					int n;
					cout << " please enter time to cancel appointment 0, 1,or 2 for appointment   ";
					cin >> n;
					b1->c_ap(n);
				}

				if (x == 3)
					b1->f_slot();
			} while (x != 4);
		}
		if (y == 2)
		{
			kroos.s_tm();
			do{
				if (x == 1){
					int n;
					b1->f_slot();
					cout << "please Enter time for appointment 0, 1, or 2 ";
					cin >> n;
					b1->ap(n);
				}
				if (x == 2){
					int n;
					cout << "please Enter time to cancel appointment 0, 1, or 2: ";
					cin >> n;
					b1->c_ap(n);
				}

				if (x == 3)
					b1->f_slot();
			} while (x != 4);
			if (y == 3)
			{

				return 0;
			}
		}

	}

	


