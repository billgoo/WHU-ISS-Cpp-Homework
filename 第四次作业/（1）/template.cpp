//Write a function template
//׿Խһ�࣬����
//2015��6��8��
#include<iostream>
using namespace std;
template <typename T>//����ģ�����T
int find(T val, T *list, int size)//���庯��ģ��find
{
	for (int i = 0; i <= size; i++)
	{
		//forѭ��ʵ�ֶ�ֵ�ļ���
		if (list[i] == val)
		{
			//�жϼ������������������ͽ���ѭ��
			return i;
			break;

		}//�ڲ�if���������

	}//for������������

	return -1; //����ʧ���򷵻�ֵ-1

}//ģ�����������
int main()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int val;
	cout << "Please input a number between 1 and 10: "
		<< endl;
	cin >> val;
	cout << find(val, a, 10) << endl;
	system("pause");
	return 0;
}//���������������