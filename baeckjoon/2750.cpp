// Created by Jina Sung on 2017. 9. 1.
// https://github.com/ToasT1ng/C_Plus_Plus_Study
// Released under a "Simplified BSD" license

#include <iostream>

using namespace std;

int sort(int array[], int n){
	int num = 0;
	for (int i=0 ; i<n-1 ; i++){
		if (array[i] > array[i+1]){
			int temp = array[i];
			array[i] = array[i+1];
			array[i+1] = temp;
			num++;
		}
	}
	return num, *array;
}

int main(){
	int n, check;	
	cin >> n;
	int num[n];
	bool key = true;
	for (int i=0 ; i<n ; i++) cin >> num[i];
	while(key){	
		check,*num = sort(num,n);
		if (check == 0){
			key = false;
		}
	}
	for (int i=0 ; i<n ; i++) cout << num[i] << " ";
	cout << endl;
}