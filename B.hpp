/* B.hpp */
#ifndef _B_hpp_
#define _B_hpp_

#include "A.hpp"

using namespace std;

class A;

class B {
	private:
		int j;
	public:
		B(int x=0);
		void send(A* pA);
		void exec(int x);
};

#endif
