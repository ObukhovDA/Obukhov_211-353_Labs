#include <iostream>
#include <cstring>
using namespace std;

bool Palindrom(char* str)
{
	bool checkPalindrom = true;
	for (int i = 0, j = strlen(str) - 1; i < j; i++, j--)
	{
		if (str[i] == ' ')
		{
			i++;
		}
		if (str[j] == ' ')
		{
			j--;
		}
		if (tolower(str[i]) != tolower(str[j]))
		{
			checkPalindrom = false;
		}
	}
	return checkPalindrom;
}void task1()
{
	const int size = 256;
	char inputString[size];

	cin.ignore();
	cout << "Введите предложение для проверки на палиндром: " << endl;
	cin.getline(inputString, size);

	if (Palindrom(inputString))
	{
		cout << "Строка является палиндромом";
	}
	else
	{
		cout << "Строка не является палиндромом";
	}

	cout << endl;
}
void task2()
{

}
void encrypt(char* str_for_encrypt, int key) {
	for (int i = 0; i < strlen(str_for_encrypt); i++) {
		if (str_for_encrypt[i] >= 'a' && str_for_encrypt[i] <= 'z')
		{
			str_for_encrypt[i] = ((str_for_encrypt[i] - 'a' + key) % 26) + 'a';
		}
		else if (str_for_encrypt[i] >= 'A' && str_for_encrypt[i] <= 'Z')
		{
			str_for_encrypt[i] = ((str_for_encrypt[i] - 'A' + key) % 26) + 'A';
		}
	}
}
void task3()
{
	const int size = 256;
	char inputstr[size];
	int key;
	cin.ignore();
	cout << "Вход = " << endl;
	cin.getline(inputstr, size);
	cin >> key;
	encrypt(inputstr, key);
	cout << inputstr << endl;
}
void foo(const char* cstr4)
{
	for (int i = 0; i < strlen(cstr4); i++)
	{
		if (cstr4[i] == '"') {
			char* arr = new char[256];
			int position = i + 1;
			int counter = 0;
			while (cstr4[position] != '"' && position != strlen(cstr4))
			{
				arr[counter] = cstr4[position];
				counter++;
				position++;
			}
			if (position != strlen(cstr4))
			{
				arr[counter] = '\0';
				cout << arr << " ";
			}

			i = position + 1;
			delete[] arr;
		}
	}
}
void task4()
{
	char cstr4[256];
	cout << "Вход = " << endl;
	cin.ignore();
	cin.getline(cstr4, 256);
	foo(cstr4);
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "ru");
	int choise = 0;
	while (true)
	{
		cout << "\n1. Проверка на палиндром\n" << "2. Поиск подстроки в строке\n" << "3. Шифрование сдвигами \n" << "4. Вывести все названия (то, что внутри кавычек) \n" << "5. Выход\n" << endl;
		cin >> choise;
		switch (choise)
		{
		case 1:
		{
			task1();
			break;
		}
		case 2:
		{
			task2();
			break;
		}
		case 3:
		{

			task3();
			break;
		}
		case 4:
		{
			task4();
			break;
		}
		case 5:
		{
			return 0;
			break;
		}
		}

	}
}