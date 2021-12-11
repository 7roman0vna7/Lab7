#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	cout << "Введите число: " << endl;
	int x;
	cin >> x;
	switch (x / 100) {       //определяем сотни
	case 1:
		cout << "Сто ";
		break;
	case 2:
		cout << "Двести ";
		break;
	case 3:
		cout << "Триста ";
		break;
	case 4:
		cout << "Четыреста ";
		break;
	case 5:
		cout << "Пятсот ";
		break;
	case 6:
		cout << "Шестьсот ";
		break;
	case 7:
		cout << "Семьсот ";
		break;
	case 8:
		cout << "Восемьсот ";
		break;
	case 9:
		cout << "Девятьсот ";
		break;
	}
	switch ((x % 100) / 10) {      //определяем десятки
	case 2:
		cout << "Двадцать ";
		break;
	case 3:
		cout << "Тридцать ";
		break;
	case 4:
		cout << "Сорок ";
		break;
	case 5:
		cout << "Пятьдесят ";
		break;
	case 6:
		cout << "Шестьдесят ";
		break;
	case 7:
		cout << "Семьдесят ";
		break;
	case 8:
		cout << "Восемьдесят ";
		break;
	case 9:
		cout << "Девяносто ";
		break;
	}
	if (10 <= x % 100 < 20) {         //условие для вывода чисел от 10 до 19
		switch (x % 100) {
			cout << "Десять";
			break;
		case 11:
			cout << "Одиннадцать";
			break;
		case 12:
			cout << "Двенадцать";
			break;
		case 13:
			cout << "Тринадцать";
			break;
		case 14:
			cout << "Четырнадцать";
			break;
		case 15:
			cout << "Пятнадцать";
			break;
		case 16:
			cout << "Шестнадцать";
			break;
		case 17:
			cout << "Семнадцать";
			break;
		case 18:
			cout << "Восемнадцать";
			break;
		case 19:
			cout << "Девятнадцать";
			break;
		}
	}
	if ((x % 100 >= 20) || (x < 10) || (x % 100 < 10)) {       //условие для вывода чисел от 1 до 9
		switch (x % 10) {
		case 1:
			cout << "Один" << endl;
			break;
		case 2:
			cout << "Два" << endl;
			break;
		case 3:
			cout << "Три" << endl;
			break;
		case 4:
			cout << "Четыре" << endl;
			break;
		case 5:
			cout << "Пять" << endl;
			break;
		case 6:
			cout << "Шесть" << endl;
			break;
		case 7:
			cout << "Семь" << endl;
			break;
		case 8:
			cout << "Восемь" << endl;
			break;
		case 9:
			cout << "Девять" << endl;
			break;
		}
	}
	return 0;
}