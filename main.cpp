/* main.cpp */

#ifndef _main_cpp_
#define _main_cpp_

#include <iostream>
#include "A.hpp"
#include "B.hpp"

using namespace std;

int main(int,char**){
	A * pa = new A(0);
	B * pb = new B(0);
	cout << pa->getI() << endl;
	pa->exec(3);
	cout << pa->getI() << endl;
	pb->send(pa);
	
	cout << pa->getI() << endl;

	delete pa;
	delete pb;
	return 1;
}


#endif
