#include <iostream>

/* 			Structure || Class 
access	==	public	  || private

exactly same function!
*/

using namespace std;

class person{
private:
	char *name;
	int id;
	char *favorite;
public:
	void showInfo();
	void setInfo(char *_name, int _id, char *_favorite);
	void game();
};

void person::showInfo(){
	cout << "Name : " << name << " // ID : " << id << " // Favorite : " << favorite <<endl;
}

void person::setInfo(char *_n, int _i, char *_f){
	name = _n;
	id = _i;
	favorite = _f;
}

void person::game(){
	cout << "Play Game!" << endl;
}

int main(){
	person jina;
	jina.setInfo("jina", 2016003609, "chicken");
	jina.showInfo();
	jina.game();
}