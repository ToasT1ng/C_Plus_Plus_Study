// Created by Jina Sung on 2017. 6. 29.
// https://github.com/ToasT1ng/C_Plus_Plus_Study
// Released under a "Simplified BSD" license

#include <iostream>
namespace A{
	void add(){
		printf("A의 add 호출\n");
	}
	void plus(){
		printf("A의 plus 호출\n");
	}
}

using A::add;


int main(int argc, const char * argv[]) {
	add();
	// plus(); // error
	A :: plus();
	return 0;
}
