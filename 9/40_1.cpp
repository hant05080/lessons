// Определите, является ли введённый символ цифрой
#include <iostream>
using namespace std;

int main()
{
	char c;
	cin >> c;

	if (c >= '0' && c <= '9')
		cout << "Цифра" << endl;
	else
		cout << "Не цифра" << endl;
}
