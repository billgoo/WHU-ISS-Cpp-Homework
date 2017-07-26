/*
*June 20th
*卓越一班 顾岩 2014302580191
动态内存分配与释放
*/
#include<iostream>
#include<cmath>
#include <cstdlib>
using namespace std;
int i, j;
int k;
double **Matrix;//题目要求的变量定义
double **allocMatrix(int n);
void releaseMatrix(double **m);//两个函数的定义
double **allocMatrix(int n)
{
	Matrix = new double*[n];
	for (int i = 0; i < n; i++)
	{
		Matrix[i] = new double[n];
	}//内存的分配

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			Matrix[i][j] = (i + j) * 3.14;
			cout << Matrix[i][j] << "\t";
		}
		cout << '\n';
	}//执行n阶矩阵的输出

	k = n;
	return Matrix;
};
void releaseMatrix(double **m)
{
	for (i = 0; i < k; i++)
	{
		delete[] m[i];
	}

	delete[] m;
};//内存释放
void main()
{
	int n;
	cin >> n;//输入矩阵的阶
	allocMatrix(n);
	releaseMatrix(Matrix);
	return ;
}