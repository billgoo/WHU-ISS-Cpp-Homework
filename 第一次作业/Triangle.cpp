#include<iostream>
#include<cmath>
#include"Triangle.h"
using namespace std;
int main()
{
	Triangle tr1(30, 40, 50);
	Triangle tr2(20, 12.3606, 12.3606);
	if (tr1 > tr2)
	{
		cout << " The first triangle is larger object! " << endl;
	}
	else if (tr2 > tr1)
	{
		cout << " The second triangle is larger object! " << endl;
	}
	else
	{
		cout << " Their area is the same! " << endl;
	}
	system("pause");
}