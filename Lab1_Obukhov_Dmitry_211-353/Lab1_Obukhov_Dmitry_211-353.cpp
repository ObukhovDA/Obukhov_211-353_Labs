#include<iostream>
#include <bitset>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	// Задание №1
	cout << "Obukhov Dmitry Aleksandrovich, 211-353\n";
	
	//Задание №2
	cout << numeric_limits<double>::max() << endl;
	cout << numeric_limits<int>::max() << endl;
	cout << numeric_limits<char>::max() << endl;
	cout << numeric_limits<bool>::max() << endl;
	cout << numeric_limits<short>::max() << endl;
	cout << numeric_limits<long long>::max() << endl;
	cout << numeric_limits<long int>::max() << endl << endl;;
	cout << numeric_limits<double>::min() << endl;
	cout << numeric_limits<int>::min() << endl;
	cout << numeric_limits<char>::min() << endl;
	cout << numeric_limits<bool>::min() << endl;
	cout << numeric_limits<short>::min() << endl;
	cout << numeric_limits<long long>::min() << endl;
	cout << numeric_limits<long int>::min() << endl;

	//Задание №3
	int nump;
	cout << "ВВЕДИТЕ ЧИСЛО С" << endl;
	cin >> nump;
	cout << bitset<sizeof(nump) * 8>(nump) << endl;
	cout << std::hex << nump << endl;

	//Задание №4
	int a, b, c, answ;
	cout << "Введите коэффициенты a * x = b: ";
	cin >> a >> b;
	answ = b / a;
	cout << "2 * x = 4\n" << "x = 4 / 2\n" << "x = 2\n";
	cout << "Ответ: " << answ << endl;

	//Задание №5
	int x1, x2;
	cout << "Введите координаты отрезка на прямой : ";
	cin >> x1 >> x2;
	cout << "Середина отрезка находится в точке с координатой " << (x1 + x2) / 2 << ".";
}