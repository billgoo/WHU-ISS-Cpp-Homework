//Write a function template
//卓越一班，顾岩
//2015年6月8日
#include<iostream>
using namespace std;
template <typename T>//定义模版参数T
int find(T val, T *list, int size)//定义函数模版find
{
	for (int i = 0; i <= size; i++)
	{
		//for循环实现对值的检索
		if (list[i] == val)
		{
			//判断检索条件，条件成立就结束循环
			return i;
			break;

		}//内层if在这里结束

	}//for语句在这里结束

	return -1; //检索失败则返回值-1

}//模版在这里结束
int main()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int val;
	cout << "Please input a number between 1 and 10: "
		<< endl;
	cin >> val;
	cout << find(val, a, 10) << endl;
	system("pause");
	return 0;
}//主函数在这里结束