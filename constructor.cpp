#include <iostream>

using namespace std;

class person{
private:
	int id;
	char *name;
	char *food;
public:
	person(int _id, char *_name, char *_food); // Constructor
	void showInfo();
	void eat();
	void shower();
};

person::person(int _id, char *_name, char *_food){
	id = _id;
	name = _name;
	food = _food;
}

person::person(int num){
	cout << num << endl;
}

void person::showInfo(){
	cout << "Name : " << name << " // ID : " << id << " // Food : " << food <<endl;
}

void person::eat(){
	cout << "Let's Eat!" << endl;
}

void person::shower(){
	cout << "Let's Take Shower!" << endl;
}

int main(){
	person jina(2016003609, "jina", "chicken"); 	// Constructor -> can use function overloading
	jina.showInfo();
	jina.eat();
	jina.shower();
}