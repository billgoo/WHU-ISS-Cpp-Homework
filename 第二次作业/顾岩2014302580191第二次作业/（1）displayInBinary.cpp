#include<iostream>
#include<cmath>
using namespace std;
void binaryOut(char c);//定义函数binaryOut
void displayInBinary(void * data, int len)//给出执行模版函数
{
	unsigned char * com = new unsigned char[len];//重载
	com = (unsigned char *)data;
	for (int i = len-1; i >= 0; i--)//for循环调用binaryOut
	{
		binaryOut(com[i]);
	}
}
void binaryOut(char c)//模版函数binaryOut用于按位输出
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
	char c = 'a';//字符型
	displayInBinary(&c, sizeof(c));
	cout << endl;
	short n = 257;//短整型
	displayInBinary(&n, sizeof(n));
	cout << endl;
	float f = 1.0f;//单精度浮点型
	displayInBinary(&f, sizeof(f));
	cout << endl;
	system("pause");//执行完毕后停止程序自动关闭
}