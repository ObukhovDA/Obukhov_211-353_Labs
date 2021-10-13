#include<iostream>

using namespace std;

//Числовой треугольник
void task1() {
	int n;
	cout << "Введите число n: ";
	cin >> n, "\n";
	int c = 0;
	int count = 1;
	int r = 0;
	while (r != n + 1) {
		if (c != count)
		{
			cout << c;
			c += 1;
		}
		else
		{
			cout << "\n";
			r = c;
			count += 1;
			c = 0;
		}

	}
}

//Вычисление среднего арифметического введенных точек на прямой
void task3(){
	double c;
	cin >> c;
	double cnt_1 = 0;
	double cnt_2 = 0;
	while (c != 0) {
		if (c != 0)
		{
			cnt_1 += 1;
			cnt_2 += c;
			cin >> c;
		}

		cout << cnt_2 / cnt_1 << endl;
	}
}

int main(){

	setlocale(LC_ALL, "Russian");

	int chse;

	while (true) {
		cout << "Какое действие вы хотите выполнить?\n" << "1.Числовой треугольник\n" << "2.Нахождение биномиальных коэффициентов\n" << "3.Вычисление среднего арифметического введенных точек\n"
			<< "4.Выход\n";
		cin >> chse;
		switch (chse) {
		case 1: {
			task1();
			break;
		}
		case 2: {
			NULL;
			break;
		}
		case 3: {
			task3();
			break;
		}
		case 4: {
			cout << "Программа завершена";
		}
		default:
			return 0;
		}
	}
}