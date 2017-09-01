// Created by Jina Sung on 2017. 9. 1.
// https://github.com/ToasT1ng/C_Plus_Plus_Study
// Released under a "Simplified BSD" license

#include <iostream>

using namespace std;

int main(){
	int n;
	int sum = 0;
	char num[100];
	cin >> n;
	cin >> num;
	for (int i=0 ; i<n ; i++){
		sum += num[i] - '0';
	}
	cout << sum << endl;
}