#include<iostream>
using namespace std;
class Ram
{
public:
	Ram();
	void operator ++(int);
	friend  void f();
private:
 int memo;

};


Ram::Ram ()
{
	memo= 0;
}

void Ram::operator++(int
	)
 {
	memo++ ;
}
void f(){
	Ram b;
	for (int i = 0; i <513; i++)
	{
		if (a.memo == 512)
		{
			cout << "Memory full";
			break;
		}
		else
			b++;
	}
}
	int main(){
	    f();
		system("pause");
		return 0;
	}
