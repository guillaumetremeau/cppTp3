/* A.cpp */
#include <iostream>
#include "A.hpp"



A::A(int x) : i(x){}
int A::getI(){
	return i;
}
void A::send(B* pB){
	pB->exec(10);
}
void A::exec(int x){
	i += x;
}

