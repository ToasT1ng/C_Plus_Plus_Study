// Created by Jina Sung on 2017. 6. 30.
// https://github.com/ToasT1ng/C_Plus_Plus_Study
// Released under a "Simplified BSD" license

#include <iostream>

using namespace std;

void overLoad(int a, int b){
	cout << "overLoad( " << a << " , " << b << " ) called" << endl;
}

void overLoad(int a){
	cout << "overLoad( " << a << " ) called" << endl;
}

void mallWithAver(){
	int *student;
	int studentNum, average;
	int total = 0;

	cout << "Number? ";
	cin >> studentNum;
	student = new int[studentNum]; // malloc in C++

	for (int i=0 ; i<studentNum ; i++){
		cout << i+1 << "'s student : " ;
		cin >> student[i];
		total += student[i];
	}

	average = total / studentNum;
	cout << "Average : " << average << endl;

	delete []student; // free in C++
}

int main(int argc, const char * argv[]) {
	overLoad(3, 4);
	overLoad(5); // the same as Java
	mallWithAver();
	return 0;
}
