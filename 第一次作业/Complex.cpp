#include<iostream>
#include "Complex.h"
using namespace std;
class Complex
{
private:                             //define member variables
	double real;                     //define member real
	double image;                    //define member image
	double r0, i0;
public:
	Complex(double r = 0, double i = 0)
	{
		real = r;
		image = i;
	}
	void setValue(double r, double i)
	{
		real = r;
		image = i;
		r0 = r;
		i0 = i;
	}//set r,i
	void addValue(double r, double i)//find the sum
	{
		real += r;
		image += i;
	}// a=a+b 
	void multiply(double r, double i)//find the multipey
	{
		real = r * r0 - i * i0;
		image = r * i0 + i * r0;
	}// a=a*b
	void displayMessage()//output the value
	{
		cout << real << "+" << image << "i" << endl;
		real = r0;
		image = i0;
	}
	~Complex()
	{

	}

};
void main()
{
	Complex Cp(3.14, 2.71828);
	Cp.displayMessage();
	Cp.setValue(2.71828, 3.14);
	Cp.displayMessage();
	Cp.addValue(8, 13);
	Cp.displayMessage();
	Cp.multiply(3.14, 2.71828);
	Cp.displayMessage();
	return ;
	system("pause");
}
