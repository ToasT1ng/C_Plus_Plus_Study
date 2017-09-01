// Created by Jina Sung on 2017. 9. 1.
// https://github.com/ToasT1ng/C_Plus_Plus_Study
// Released under a "Simplified BSD" license

#include <iostream>

using namespace std;

int main(){
	int in;
	cin >> in;
	for (int i=0 ; i<in ; i++){
		for (int j=0 ; j<=i ; j++){
			cout << "*";
		}
		cout << endl;
	}
	 
}