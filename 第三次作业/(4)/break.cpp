#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
	int i, j, k;
	int sum;
	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			for (k = 0; k < 100; k++)
			{
				sum = i + j + k;
			}//最内层for在此结束
		}//第二层for在这里结束
		if (sum % 255 == 0)//if语句判断i+j+k的和是否为255倍数
		{
			cout << "Exit all three loops.\n" << sum << endl;
			break;
			/*
			*输出结束标志
			*break执行程序的终止
			*/
		}
	}//最外层for在这里结束
	system("pause");
	return 0;
}//主函数结束