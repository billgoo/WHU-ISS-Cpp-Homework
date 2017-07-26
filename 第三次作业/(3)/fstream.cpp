#include <iostream>
#include<string>
#include<fstream>//ifstream��ofstream��Ҫ��ͷ�ļ�
#include<cstdlib>
#include<cstdio>//����C������feof������Ҫ��ͷ�ļ�
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
	//�ļ��������ж���������infile�������ļ�Input.txt
	ofstream outfile("Output.txt");
	//�ļ�������ж���������outfile�������ļ�Output.txt
	if (infile.is_open())//���ó�Ա����openʵ���ļ���
	{
		while (getline(infile, line))
		{
			
			//ѭ������getline����ʵ�����ݵĶ��ץȡ
			year = atoi(line.c_str());//��������ַ��ͳ���ת�������ͳ���
			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
			{
				//if���ִ�й��������жϵ�ѭ��
				outfile << year << " is a leap year" << "\n";
				//����������䣬�����ָ���ĵ���
			}
			else
			{
				outfile << year << " is not a leap year" << "\n";
				//ִ�������ݲ������굽ָ���ĵ���
			}//if��䵽�������	

		}//while������������
		FILE *stream;//FILE���ж���ָ��
		fopen_s(&stream, "Input.txt", "r");//ָ��ʵ�ֶ������ĵ�ÿ�ж�ȡ
		char c;
		c = fgetc(stream);
		//���ļ�ָ��streamָ����ļ��ж�ȡһ���ַ�����ȡһ���ֽں󣬹��λ�ú���һ���ֽ�
		while (!feof(stream))
		{
			outfile << "End Of File." << "\n";
			//������ĵ�ĩβ�����ʾ
			c = fgetc(stream);//�ٴκ��ƹ��ֱ����ȡ����
			break;
		}
		/*�ĵ���ȡ����ʱfeof����ֵΪ��
		*δ����ʱΪ�٣���ʱ����ѭ��
		*�ʶ�ȡδ����ʱ!foefΪ��ֵ*/
		infile.close();
	}
	else
	{
		cout << "Unable to open file";
	}//�����if������������
	system("pause");
	return 0;
}//�������������β