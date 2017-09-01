// Created by Jina Sung on 2017. 9. 1.
// https://github.com/ToasT1ng/C_Plus_Plus_Study
// Released under a "Simplified BSD" license


// for문 initial position값에 문제 -> 머릿속으로 돌려볼것
#include <iostream>

using namespace std;

int main(){
	string line;
	getline(cin,line);
	int num = 0; 
	int position;
	bool key = true;
	while (key){
		position = line.find(" ");
		if (position == line.find("0")){
			key = false;
		} else {
			num++;
			line = line.substr(position+1);
		}
	}
	// for ( ; position != line.find("0") ; num++){
	// 	position = line.find(" ");
	// 	line = line.substr(position+1);
	// 	cout << line << endl;
	// }
	cout << num+1 << endl;
}