/* A.hpp */
#ifndef _A_hpp_
#define _A_hpp_

#include "B.hpp"
using namespace std;

class B;

class A {
	private:
		int i;
	public:
		int getI();
		A(int x=0);
		void send(B* pB);
		void exec(int x);
};

#endif
