#include <iostream>
#include<string.h>
#include<cstddef>
using std::cout;
using std::endl;
#pragma warning(disable:4996)
class String{
	static int nCharArray;
	char* str;
	size_t _len;//int型返回值，sizeof的返回值，类型的字节数
public:
	String();
	String(char *p);
	String(const String &s);
	char& operator[](unsigned int idx);
	String& operator=(const String &s);//重载=
	~String();
	const char* c_str(){
		return str + 1;
	}
};
int String::nCharArray;
String::String(){
	str = NULL;
	_len = 0;
	cout << "in constructor,nCharArray=" << nCharArray << endl;
}
String::String(char *p){
	_len = strlen(p);//strlen取字符长度，空字符不计算在内
	str = new char[_len + 1 + 1];//给_len留两个存储位置(+1+1)
	strcpy(str + 1, p);//把p中字符复制到str+1，如str为abcdef，p为g，则为ag\0def\0，遇到\0输出结束，即为输出ag
	str[0] = 1;//把p\0叠加到1之后
	nCharArray++;//+1
	cout << "in constructor,nCharArray=" << nCharArray << endl;
}

String::String(const String &s){
	str = s.str;
	_len = s._len;
	str[0]++;
	cout << "in constructor,nCharArray=" << nCharArray << endl;
}

char& String::operator[](unsigned int idx){
	if (idx<0 || idx>_len || str == NULL){
		static char nullchar = 0;
		return nullchar;
	}
	if (str[0]>1){
		char *buf = new char[_len + 1 + 1];
		strcpy(buf + 1, str + 1);
		str[0]--;
		str = buf;
		str[0] = 1;
		nCharArray++;
	}
	cout << "in oprator[],nCharArray=" << nCharArray << endl;
	return str[1 + idx];
}

String& String::operator=(const String &s){
	if (!str){
		_len = s._len;
		str = s.str;
		s.str[0]++;
	}
	else{
		str[0]--;
		if (!str[0]){
			delete[] str;
			nCharArray--;
		}
		_len = s._len;
		str = s.str;
		str[0]++;
	}
	cout << "in operator=,nCharArray=" << nCharArray << endl;
	return *this;
}

String::~String(){//析构，清除内存
	if (str){
		str[0]--;
		if (!str[0]){
			delete[] str;
			nCharArray--;
		}
	}
	cout << "in destructor,nCharArray=" << nCharArray << endl;
}


int main(){
	String s1;//为空
	String s2 = "abc";//s2拷贝为abc
	String s3 = s2;//拷贝为s2
	s3[0] = 'p';
	cout << s2.c_str() << endl;
	cout << s3.c_str() << endl;
	s1 = s3;
	s2 = s3;
	cout << s1.c_str() << endl;
	cout << s2.c_str() << endl;
}
