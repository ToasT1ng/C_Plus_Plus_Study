// Created by Jina Sung on 2017. 9. 1.
// https://github.com/ToasT1ng/C_Plus_Plus_Study
// Released under a "Simplified BSD" license

#include <iostream>

using namespace std;

int main(){
	int sum = 0; 
	int num;
	for (int i=0 ; i<5 ; i++){
		cin >> num;
		if (num < 40){
			sum += 40;
		} else {
			sum += num;
		}
	} 
	cout << sum / 5 << endl;
}