#include<iostream>
using namespace std;

class shape{

public:

	virtual void draw(){

		cout << "can not draw a general shape!" << endl;

	}

};

class triangle :public shape{

public:

	void draw(){

		cout << "  *  " << endl;

		cout << " * * " << endl;

		cout << "*****" << endl;

	}

};

class rectangle :public shape{

public:

	void draw(){

		cout << "*****" << endl;

		cout << "*   *" << endl;

		cout << "*****" << endl;

	}

};

int main(int argc, char *argv[]){

	shape c;  triangle t;  rectangle r;   shape *p;

	shape &rt = t;   shape &rr = r;

	c.draw();   t.draw();  r.draw();

	p = &c;

	p->draw();   p = &t;   p->draw();

	p = &r;

	p->draw();   rt.draw();   rr.draw();

}