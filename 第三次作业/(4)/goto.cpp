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
		if (sum % 255 == 0)//if����ж�i+j+k�Ƿ�Ϊ255�ı���
		{
			goto endloop;//�͵�һ��Ϊ255����ʱ����ѭ��
		}//if������������
	}//�����for���������
endloop://goto���ת��Ĵ���ǩ���
	cout << "Exit all three loops.\n" << sum << endl;
	system("pause");
	return 0;
}//����������