#include <iostream>
#include<string>
#include<fstream>//ifstream和ofstream需要的头文件
#include<cstdlib>
#include<cstdio>//引用C语言中feof函数需要的头文件
using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;
int main()
{
	int year;
	string line;
	cout << "Input year:" << endl;
	ifstream infile("Input.txt");
	//文件读入类中定义类类型infile，读入文件Input.txt
	ofstream outfile("Output.txt");
	//文件输出类中定义类类型outfile，读入文件Output.txt
	if (infile.is_open())//调用成员函数open实现文件打开
	{
		while (getline(infile, line))
		{
			
			//循环调用getline函数实现数据的多次抓取
			year = atoi(line.c_str());//将读入的字符型常量转换成整型常量
			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
			{
				//if语句执行关于闰年判断的循环
				outfile << year << " is a leap year" << "\n";
				//闰年的输出语句，输出到指定文档中
			}
			else
			{
				outfile << year << " is not a leap year" << "\n";
				//执行输出年份不是闰年到指定文档中
			}//if语句到这里结束	

		}//while语句在这里结束
		FILE *stream;//FILE类中定义指针
		fopen_s(&stream, "Input.txt", "r");//指针实现对输入文档每行读取
		char c;
		c = fgetc(stream);
		//从文件指针stream指向的文件中读取一个字符，读取一个字节后，光标位置后移一个字节
		while (!feof(stream))
		{
			outfile << "End Of File." << "\n";
			//在输出文档末尾输出提示
			c = fgetc(stream);//再次后移光标直至读取结束
			break;
		}
		/*文档读取结束时feof返回值为真
		*未结束时为假，此时跳出循环
		*故读取未结束时!foef为真值*/
		infile.close();
	}
	else
	{
		cout << "Unable to open file";
	}//最外层if语句在这里结束
	system("pause");
	return 0;
}//主函数在这里结尾