#include<iostream>
#include<cmath>
#include<cstring>
#include "Calculator.h"
using namespace std;
Calculator::Calculator(double a, double b, char*p)//����ģ��
{
	operand1 = a;
	operand2 = b;
	operation = p;
}
double Calculator::doOperation()//�������
{
	if (strcmp(operation, "add") == 0)
	{
		return operand1 + operand2;
	}
	else if (strcmp(operation, "sub") == 0)
	{
		return operand1 - operand2;
	}
	else if (strcmp(operation, "mul") == 0)
	{
		return operand1 * operand2;
	}
	else if (strcmp(operation, "div") == 0)
	{
		return operand1 / operand2;
	}
}
int main(int argc, char *argv[])//�������Hint
{
	if (argc != 4)//������ʵ�ֶ������
	{
		cout << "You must give 4 arguments!" << endl;
		system("pause");
		return 1;
	}//if���������
	double op1, op2;
	char *opcode;
	sscanf_s(argv[2], "%lf", &op1);//�ٶȵĺ���...֮ǰ�������
	sscanf_s(argv[3], "%lf", &op2);//������һ�����ģ����д
	opcode = argv[1];
	Calculator one(op1, op2, opcode);
	cout << one.doOperation() << endl;//���ú���
	system("pause");
	return 0;
}