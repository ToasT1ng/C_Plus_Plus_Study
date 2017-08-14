#include <iostream>

using namespace std;

class person{
private:
	char *name;
public:	
	person(const char *cpyname){
		name = new char[strlen(cpyname)+1];
		strcpy(name,cpyname);
	}
	person(const person& people){ 	// Deep Copy
		name = new char[strlen(people.name)+1];
		strcpy(name,people.name);
	}
	~person(){ 	// Destructor
		delete []name;
		cout << "Call!" << endl;
	}
	void showInfo(){
		cout << "Name : " << name << endl;
	}
};

int main(){
	person jina("jina");
	person sung(jina);

	jina.showInfo();
	sung.showInfo();
}