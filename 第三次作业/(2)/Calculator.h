#pragma once
class Calculator//定义类
{
	double operand1, operand2;
	char *operation;
public:
	Calculator(double, double, char*);
	double doOperation();//定义函数
};
