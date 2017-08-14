#include <iostream>

using namespace std;

void swap(int &first, int &second){
	int temp = first;
	first = second;
	second = temp;
}

int main(){
	int num = 3;
	int &addNum = num;
	int &addNum2 = addNum;

	cout << "Num : " << &num << endl;
	cout << "AddNum : " << &addNum << endl;
	cout << "AddNum2 : " << &addNum2 << endl;

	int first = 1, second = 2;
	cout << "Before : " << first << " And " << second << endl;
	swap(first, second);
	cout << "After : " << first << " And " << second << endl;
}