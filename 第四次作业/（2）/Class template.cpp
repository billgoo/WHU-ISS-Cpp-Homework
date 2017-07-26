/*
*Define a class template
*that employes more than one template parameters,
*and create some objects to test it
*/
#include <iostream>
#include <string>
using namespace std;
template<class T1, class T2, class T3, class T4>//employ four template parameters
class cpr //template class
{
public:
	void addition(T1 a, T2 b, T3 c, T4 d)//加法运算
	{
		cout << "The sum is:\t" <<
			a + b + c + d << "!\n";
	}
	void multiply(T1 a, T2 b, T3 c, T4 d)//乘法运算
	{
		cout << "The product is:\t" <<
			a * b * c * d << "!\n";
	}
};

int main()
{
	cpr<int, int, int, int> n;
	n.addition(2, 3, 3, 3);
	n.multiply(6, 6, 6, 6);
	cpr<double, double, double, double> m;
	m.addition(62.1, 62.3, 62.7, 62.9);
	m.multiply(1.2, 1.6, 0.8, 12.5);
	system("pause");
	return 0;
}