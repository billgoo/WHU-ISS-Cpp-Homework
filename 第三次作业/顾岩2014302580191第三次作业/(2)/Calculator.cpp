#include<iostream>
#include<cmath>
#include<cstring>
#include "Calculator.h"
using namespace std;
Calculator::Calculator(double a, double b, char*p)//构造模版
{
	operand1 = a;
	operand2 = b;
	operation = p;
}
double Calculator::doOperation()//处理计算
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
int main(int argc, char *argv[])//函数入口Hint
{
	if (argc != 4)//数组来实现多次输入
	{
		cout << "You must give 4 arguments!" << endl;
		system("pause");
		return 1;
	}//if在这里结束
	double op1, op2;
	char *opcode;
	sscanf_s(argv[2], "%lf", &op1);//百度的函数...之前并不清楚
	sscanf_s(argv[3], "%lf", &op2);//按照上一个语句模仿这写
	opcode = argv[1];
	Calculator one(op1, op2, opcode);
	cout << one.doOperation() << endl;//调用函数
	system("pause");
	return 0;
}