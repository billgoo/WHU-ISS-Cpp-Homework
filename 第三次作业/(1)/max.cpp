#include<iostream>
#include<cmath>
using namespace std;
int max(int a, int b, int c);//定义函数max
namespace mynamespace//创建命名空间mynamespace
{
	int max(int a, int b, int c)//创建函数模版，求取最大数
	{
		int max;//创建一个新的变量
		if (a > b)//先判断a，b大小，将其更大数赋值给max
		{
			max = a;
		}
		else
		{
			max = b;
		}
		if (max > c)//判断max和c大小
		{
			max = max;
		}
		else
		{
			max = c;
		}
		return max;
	}
}
int main(){
	int a, b, c;
	cin >> a >> b >> c;
	cout << "The maximum value of three numbers is:" << mynamespace::max(a, b, c) << endl;//调用并执行函数输出
	system("pause");
}