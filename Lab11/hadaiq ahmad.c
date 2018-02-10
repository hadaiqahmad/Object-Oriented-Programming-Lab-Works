                                          task 1
#include<iostream>
using namespace std;
template <typename a>
void swapper(a&x1, a&x2){
	a temp;
	temp = x2;
	x2=x1;
	x1 = temp;
	cout << "the swap elements are \t" << x1 << x2;

}
template<typename a>
void print(a&x1,a&x2){
	cout << "the first element before swap is\n"<< x1;
	cout << "the second element before swap is\n" << x2; 

}
	int main(){
		int  i, j;
		char k, l;
		double m, n;
		cout << "enter the interger value of x1\n";
		cin >> i;
		cout << "enter the integer  value of x2\n";
		cin >> j;
		print(i, j);
		swapper(i, j);
		cout << "enter the x1 characters to swap\n ";
		cin >> k;
		cout << "enter the x2 characters to swap\n ";
		cin >> l;
		print(k,l);
		swapper(k,l);
		cout << "enter the x1 double to swap\n ";
		cin >> m;
		cout << "enter the x2 double to swap \n";
		cin >> n;
		print(m, n);
		swapper(m, n);
		system("pause");
		return 0;
	}



                        task 2


#include<iostream>
using namespace std;
template<class a>
class array_handling{
public:
	void print_array(a ha[], int size_array){
		cout << " the elemnts of the array";
		for (int i= 0;  i < size_array; i++){
			cout << ha[i];
		}
	}
	void reverse_array(a ha[], int size_array){
		cout << "the reverse of elemnts of the array";
		for (int i = (size_array-1);  i >=0; i--){
			cout << ha[i];
		}
	}
	void sum_array(a ha[], int size_array){
		cout << "the sum of elemnts of the array";
		int sum = 0;
		for (int i = 0;  i < (size_array); i++){
			sum = sum + ha[i];
		}
		cout <<sum << endl;
	}
	void product_array(a ha[], int size_array){
		cout << "the products of elemnts of the array";
		int product = 1;
		for (int i = 0;  i < (size_array); i++){
			product= product*ha[i];
		}
		cout <<product<<endl;
	}
};
void main(){
		int a;
		int b;
		cout << "please enter 1. for integer\t2. for Double\n3. for Float\t4. for Charcater\n";
		cin >> a;
		cout << "please enter the aize which is not greater than 10\n";
		cin >> b;
		if (a == 1)
		{
			array_handling<int>instance;
			int ha[10];
			cout << "please enter the elements\n";
			for (int i = 0; i < b; i++)
			{
				cin >> ha[i];
			}
			instance.print_array(ha, b);
			instance.reverse_array(ha, b);
			instance.sum_array(ha, b);
			instance.product_array(ha, b);
		}
		else if (a == 2)
		{
			array_handling<double>instance;
			double ha[10];
			cout << "please enter the elemnts\n";
			for (int i = 0; i < b; i++)
			{
				cin >> ha[i];
			}
			instance.print_array(ha, b);
			instance.reverse_array(ha, b);
			instance.sum_array(ha, b);
			instance.product_array(ha, b);
		}
		else if (a == 3)
		{
			array_handling<float>instance;
			float ha[10];
			cout << "please enter the elemnts\n"; 
			for (int i = 0; i < b; i++)
			{
				cin >> ha[i];
			}
			instance.print_array(ha, b);
			instance.reverse_array(ha, b);
			instance.sum_array(ha, b);
			instance.product_array(ha, b);
		}
		else if (a == 4)
		{
			array_handling<char>instance;
			char ha[10];
			for (int i = 0; i < b; i++)
			{
				cin >> ha[i];
			}
			instance.print_array(ha, b);
			instance.reverse_array(ha, b);

		}
		system("pause");
	}







