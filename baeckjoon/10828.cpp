// Created by Jina Sung on 2017. 9. 1.
// https://github.com/ToasT1ng/C_Plus_Plus_Study
// Released under a "Simplified BSD" license

// Have to fix Problems!!

#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	int position = 0;
	string command;
	char stack[10000];
	cin >> n;
	for (int i=0 ; i<n ; i++){
		cin >> command;
		string push = command.substr(0,4);
		if (push.compare("push") == 0){
			// string num = command.substr(5,command.length()-4);
			// stack[position] = command.substr()
			n++ , position++;
			cout << "push!! " << command.length() << endl;
		} else if (command.compare("top") == 0){
			cout << "top!!" << endl;
		} else if (command.compare("size") == 0){
			cout << "size!!" << endl;
		}
	}
}