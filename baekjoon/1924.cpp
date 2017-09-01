#include <iostream>
#include <string>
using namespace std;

int main(){
	int mon, day;
	cin >> mon >> day;
	int sum = 0;
	for (int i = 1; i < mon; i++){
		if (i == 1 || i == 3 || i == 5 ||
		i == 7 || i == 8 || i == 10 || 	i == 12 ){
			sum += 31;
		}
		else if (i == 2){
			sum += 28;
		}
		else{
			sum += 30;
		}
	}


	sum += day;
	int num = sum % 7;
	string wen;

	switch (num){
	case 1:
		wen = "MON";
		break;
	case 2:
		wen = "TUE";
		break;
	case 3:
		wen = "WED";
		break;
	case 4:
		wen = "THU";
		break;
	case 5:
		wen = "FRI";
		break;
	case 6:
		wen = "SAT";
		break;
	case 0:
		wen = "SUN";
		break;
	}

	cout << wen;

	return 0;
}