/* B.cpp */
#include <iostream>
#include "B.hpp"

B::B(int x) : j(x){}
void B::send(A* pA){
	pA->exec(10);
}
void B::exec(int x){
	j += x;
}
