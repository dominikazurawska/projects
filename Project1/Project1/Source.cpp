#include <iostream>

using namespace std;

int main() {
	int ilosc;

	cout << "Podaj wysokosc: ";
	cin >> ilosc;
	cout << endl;
	ilosc -= 1; 

	for (int i = 0; i < ilosc; i++) {            
		for (int j = ilosc - i; j > 0; j--) {
			cout << " ";
		}
		for (int j = 1; j <= ((i * 2) + 1); j++) {    
			cout << "*";
		}
		cout << endl;
	}

	for (int i = ilosc; i > 0; i--) { 
		cout << " ";
	}
	cout << "#" << endl;

	for (int i = 0; i < ilosc * 2 + 1; i++) {    
		cout << "-";
	}

	return 0;
}