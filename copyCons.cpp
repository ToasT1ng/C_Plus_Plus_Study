#include <iostream>

using namespace std;

class person{
private:
	int id;
	char *name;
public:
	person(int _id, char *_name){
		id = _id;
		name = _name;
	}
	void showInfo();
};

void person::showInfo(){
	cout << "ID : " << id << " // Name : " << name << endl;
}

int main(){
	person jina(2016003609, "jina");
	person jina2(jina); // SAME AS -> person jina2 = jina;
	jina2.showInfo();
}