#include <iostream> 

using namespace std;

int main() {

	setlocale(LC_ALL, "ru");
	
	int a, b;
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << "*";
		}
		cout << "\n";
	}

	return 0;



}
