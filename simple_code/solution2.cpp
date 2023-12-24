#include <iostream> 

using namespace std;

int main() {

	setlocale(LC_ALL, "ru");
	int start, end, sum = 0;
	cout << "Введите начало диапазона: ";
	cin >> start;
	cout << "\n" << "Введите конец диапазона: ";
	cin >> end;
	while (start <= end) {
		if (start % 2 > 0) {
			sum += start;
			start++;
		}
		else {
			start++;
		}
	}

	cout << "\n" << "Сумма всех нечетных целых чисел в заданном диапазоне: " << sum << endl;

	return 0;



}
