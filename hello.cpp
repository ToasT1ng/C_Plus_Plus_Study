// Created by Jina Sung on 2017. 6. 29.
// https://github.com/ToasT1ng/C_Plus_Plus_Study
// Released under a "Simplified BSD" license

#include <iostream> // without '.h'! (to distinguish from C language)

void name(){
	char name[10];
	std::cin >> name;
	std::cout << "당신의 이름은 " << name << " 입니다." << std::endl;
}

void nameAndAge(){
	char name[10];
	int age;
	std::cin >> name >> age;
	// std::cin >> name;
	// std::cin >> age;
	
	std::cout << "당신의 이름은 " << name << " 이고 나이는 " << age << " 입니다." << std::endl;
}

namespace A {
	void add(){
		printf("A의 함수 호출\n");
	}
}

namespace B {
	void add(){
		printf("B의 함수 호출\n");
	}
}

void nameSpace(){
	A::add();
	B::add();
}

int main(int argc, const char * argv[]) {
	std::cout << "Hello, World!\n";
	std::cout << "Hello, World!" << std::endl; // the same as "\n"
	name();
	nameAndAge();
	nameSpace();
	return 0;
}
