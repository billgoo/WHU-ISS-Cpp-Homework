#include<iostream>
#include<cmath>
using namespace std;
void binaryOut(char c);//���庯��binaryOut
void displayInBinary(void * data, int len)//����ִ��ģ�溯��
{
	unsigned char * com = new unsigned char[len];//����
	com = (unsigned char *)data;
	for (int i = len-1; i >= 0; i--)//forѭ������binaryOut
	{
		binaryOut(com[i]);
	}
}
void binaryOut(char c)//ģ�溯��binaryOut���ڰ�λ���
{
	unsigned char tmp = 0x80;
	for (int i = 0; i<8; i++)
	{
		if (c&tmp)
			cout << 1;
		else
			cout << 0;
		tmp >>= 1;
	}
}
void main()
{
	char c = 'a';//�ַ���
	displayInBinary(&c, sizeof(c));
	cout << endl;
	short n = 257;//������
	displayInBinary(&n, sizeof(n));
	cout << endl;
	float f = 1.0f;//�����ȸ�����
	displayInBinary(&f, sizeof(f));
	cout << endl;
	system("pause");//ִ����Ϻ�ֹͣ�����Զ��ر�
}