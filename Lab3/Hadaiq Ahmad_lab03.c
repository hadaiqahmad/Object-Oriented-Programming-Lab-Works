#include<iostream>
using namespace std;
class line
{
private:
	int endp1;
	int endp2;
	char *linetype;
public:
	line();
	line(const line&);
	void setData(int, int, char);
	int callength();
	void comp(line& line2);
	void showData();

};
line::line(){
	endp1 = 0;
	endp2 = 0;
	linetype = new char;
	*linetype = ' & ';

}
line::line(const line& default){
	this->endp1 = default.endp1;
	this->endp2 = default.endp2;
	this->linetype = default.linetype;
	*this->linetype = *default.linetype;
}
void line::setData(int i, int j, char k){
	endp1 = i;
	endp2 = j;
	*linetype = k;
}
void line::showData(){
	cout << "the starting position of the line is\n " << endp1 << endl;
	cout << "the end position of the line is\n " << endp2 << endl;
	switch (*linetype){
	case 'N':
		cout << "the line type is normal" << endl;
		break;
	case 'B':
		cout << "the line type is bold" << endl;
		break;
	case 'S':
		cout << "the type of the line is straight" << endl;
		break;
	default:
		cout << "the line is of no type" << endl;


	}

}
int line::callength(){
	cout << "the lenght is \n" << endp2 - endp1;
	return endp2 - endp1;
}
void line::comp(line& line2){
	int l1, l2;
	l1 = this->callength();
	l2 = line2.callength();
	if (l1 > l2)
		cout << " the line 1 is greater than line 2\n" << endl;
	else if (l2 > l1)
		cout << " the line 2 is greater than line 1 \n" << endl;
	else
		cout << "both are of same length\n" << endl;
	
	}


int main(){
	int g, h;
	char k;
	char type = ' & ';
	line line1;
	line line2(line1);
	cout << "starting point of line 1\n" << endl;
	cin >> g;
	cout << "please enter the ending point\n" << endl;
	cin >> h;
	cout << "what type of line is it\n" << endl;
	cin >> k;
	line1.setData(g, h, k);
	line1.showData();
	line1.callength();
	line1.comp(line2);
	system("pause");
	return 0;
}