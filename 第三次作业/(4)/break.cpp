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
			}//���ڲ�for�ڴ˽���
		}//�ڶ���for���������
		if (sum % 255 == 0)//if����ж�i+j+k�ĺ��Ƿ�Ϊ255����
		{
			cout << "Exit all three loops.\n" << sum << endl;
			break;
			/*
			*���������־
			*breakִ�г������ֹ
			*/
		}
	}//�����for���������
	system("pause");
	return 0;
}//����������