#include<iostream>
#include<cmath>
using namespace std;
int max(int a, int b, int c);//���庯��max
namespace mynamespace//���������ռ�mynamespace
{
	int max(int a, int b, int c)//��������ģ�棬��ȡ�����
	{
		int max;//����һ���µı���
		if (a > b)//���ж�a��b��С�������������ֵ��max
		{
			max = a;
		}
		else
		{
			max = b;
		}
		if (max > c)//�ж�max��c��С
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
	cout << "The maximum value of three numbers is:" << mynamespace::max(a, b, c) << endl;//���ò�ִ�к������
	system("pause");
}