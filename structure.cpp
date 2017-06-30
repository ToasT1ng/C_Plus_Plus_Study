// Created by Jina Sung on 2017. 6. 30.
// https://github.com/ToasT1ng/C_Plus_Plus_Study
// Released under a "Simplified BSD" license

#include <iostream>

using namespace std;

struct student{
	int num;
	char name[10];
};

void structure1(){
	student jina = {2016003609,"Jina Sung"}; // in C, sturuct student jina
	cout << "Student Number : " << jina.num << endl;
	cout << "Student Name : " << jina.name << endl;
}



struct student2{
	int num;
	char name[10];

	void show(){ // function is not allowed in C language
		cout << "Number : " << num << endl;
		cout << "Name : " << name << endl;
	}
};

void structure2(){
	student2 jina = {2016003609,"Jina Sung"};
	jina.show(); // not allowed in C language
}



struct student3{
	int num;
	char name[10];
	
	void show();
};

void student3::show(){
	cout << "Number : " << num << endl;
	cout << "Name : " << name << endl;
}

void structure3(){
	student3 jina = {2016003609,"Jina Sung"};
	jina.show(); // not allowed in C language
}



struct accessStudent{
	private :
		int num;
		char *name;

	public :
		void set(int _num, char _name[10]);
		void show();
};

void accessStudent::show(){
	cout << "Number : " << num << endl;
	cout << "Name : " << name << endl;
}

void accessStudent::set(int _num, char * _name){
	num = _num;
	name = _name;
}

void accessControlStructure(){
	accessStudent jina;
	// jina.num = 2016003609; // error
	jina.set(2016003609,"jina");
	jina.show();
}

int main(int argc, const char * argv[]) {
	structure1();
	structure2();
	structure3();
	accessControlStructure();
	return 0;
}
