#include <iostream>
#define Apple 3
#define Triple(x) ((x)*(x)*(x))

/*
	Define 		vs		Inline
			Exactly Same
	no limit	||		formation limit
*/

using namespace std;

void boolean(){
	cout << true << endl;
	cout << false << endl;

	bool t = true;
	bool f = false;

	cout << "Size of True : " << sizeof(t) /* Same As -> sizeof true */ << endl;
	cout << "Size of Flase : " << sizeof(f) /* Same As -> sizeof false */ << endl;
}

inline int triple(int x){	// INLINE!!
	return x*x*x;
}

void inlines(){
	cout << Triple(3) << endl;
	cout << triple(3) << endl;  // exactly same!
}

int main(){
	boolean();
	inlines();
}