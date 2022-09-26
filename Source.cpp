#include <iostream>
using namespace std;
int main() {
	//If7.Даны два числа.Вывести порядковый 
	//номер меньшего из них.
	
	/*int a, b;
	cin >> a >> b;
	if (a > b) {
		cout << 1 << endl;
	}
	else (b > a);
		cout << 2 << endl;*/

	//If8◦.Даны два числа.Вывести вначале
	//большее, а затем меньшее из них.

	int a, b;
	cin >> a >> b;
	if (a > b) {
		cout << a  << ' ' << b;
	}
	else  {
		cout << b  << ' ' << a;
	}
	

}
