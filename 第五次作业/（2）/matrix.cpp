/*
*June 20th
*׿Խһ�� ���� 2014302580191
��̬�ڴ�������ͷ�
*/
#include<iostream>
#include<cmath>
#include <cstdlib>
using namespace std;
int i, j;
int k;
double **Matrix;//��ĿҪ��ı�������
double **allocMatrix(int n);
void releaseMatrix(double **m);//���������Ķ���
double **allocMatrix(int n)
{
	Matrix = new double*[n];
	for (int i = 0; i < n; i++)
	{
		Matrix[i] = new double[n];
	}//�ڴ�ķ���

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			Matrix[i][j] = (i + j) * 3.14;
			cout << Matrix[i][j] << "\t";
		}
		cout << '\n';
	}//ִ��n�׾�������

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
};//�ڴ��ͷ�
void main()
{
	int n;
	cin >> n;//�������Ľ�
	allocMatrix(n);
	releaseMatrix(Matrix);
	return ;
}