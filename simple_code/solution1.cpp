#include <iostream> 

using namespace std;

int main() {

	setlocale(LC_ALL, "ru");
	int lenght, logick, counter = 0;
	char item;
	cout << "Введите сколько символов нужно вывести: ";
	cin >> lenght;
	cout << "\n" << "Введите какой символ будет выводиться: ";
	cin >> item;
	cout << "\n" << "Введите тип линии (1 - вертикальная, 2 - горизонтальная): ";
	cin >> logick;

	switch (logick) 
	{
	case 1:
		while (counter != lenght) {
			cout << item << "\n";
			counter++;
		}
		break;
	case 2:
		while (counter != lenght) {
			cout << item;
			counter++;
		}
		break;
	default:
		cout << "ERROR: ошибка значения типа линии";
		break;
	}
	return 0;



}
