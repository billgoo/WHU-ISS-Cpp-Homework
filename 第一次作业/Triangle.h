#include<iostream>
#include<cmath>
using namespace std;
class Triangle
{
private:
	double a, b, c;
public:
	Triangle()//if there is no define
	{
		a = 0;
		b = 0;
		c = 0;
	}
	Triangle(double x, double y, double z) //definition
	{
		if (x+y>z & x+z>y & y+z>x)
		{
			a = x;
			b = y;
			c = z;
		}
		else
		{
			a = 0;
			b = 0;
			c = 0;
		}
	}
	double Area()//evaluate the Area
	{
		double squ;
		double p;
		p = (a + b + c) / 2;
		squ = sqrt( p * ( p - a ) * ( p - b ) * ( p - c ) );
		return squ;
	}
	friend bool operator>(Triangle tr1, Triangle tr2)
	{
		if (tr1.Area() > tr2.Area())
			return true;
		else
			return false;
	}//find the larger area
};
